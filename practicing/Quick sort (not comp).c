// problem : acending order sort ana array using Quick sort type 
#include <stdio.h>
// decleration of quick sort function //

void Quick_sort(int * arr, int start, int end);

// decleration of pivot function //

int pivot_get(int * arr, int start, int end);

int main (void){
	int arr_size;
	
	// take array size from user //
	printf("Enter array size : ");
    scanf("%d",&arr_size);
	
	// create ana array and take it's elments from user //
	int arr[arr_size];
printf ("Enter array elements by this form 1 2 3 4 ...\n");	
	for (int i=0;i<arr_size;i++){scanf ("%d",&arr[i]);}
	
	// call Quick sort function //
	
Quick_sort(arr,0,arr_size-1);
	
	// print sorted array //
	
	for (int i=0;i<arr_size;i++){printf ("%d ",arr[i]);}
	
	return 0;
	}
	
	// Quick sort function//
	void Quick_sort(int * arr, int start, int end){
		int p_index;
		if (start<end ){
			
			p_index=pivot_get(arr,start,end);
			Quick_sort(arr,start,p_index-1);
			Quick_sort(arr,p_index+1,end);
			
		}	
		
	}
	
	// pivot function //
	
	int pivot_get(int * arr,int start, int end){            //       5 4 3 2 |1              //
		int i=start;                                      //         i       j   pivot=1
		int j=end;
		int pivot=arr[end];
		int temp=0;
		
		while (i<j){                                                                                                                      // i       j    pivot =4       
	                                         // if pivot == arr[start] == arr[end] so push any arr[i] or arr[j] and pivit may ==arr[i] or arr[j]      4 3 5 2 |4 
while(arr[i]<pivot){i++;}
while(arr[j]>=pivot){j--;}	              // if pivot != arr[start] so ..  if push arr[end] ==> pivit= must arr[end] if push arr[i] ==> pivit must = arr[i]   becaus if pivit included it will be replaced also at the end 
                                             
// swap // 
        if (i<j){
		temp=arr[i];        
 		arr[i]=arr[j];
		arr[j]=temp;
		}
		}
		                                   // if push arr[end] ==> swap it with i . if push arr[start] ==> swapit with j (smaller than pivit which is arr[start])
		// swap arr[end] with arr[i]          because i is from the bigger than pivot , but if returned and replaced with j . j is from the smaller than pivit so if swaped j with arr[end] ==> pivit will have small valeu at the right which is wri=ong 
		temp=arr[end];        
 		arr[end]=arr[i];
		arr[i]=temp;
		
		return i;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	