// problem : =========> descending order sort for an array using (Bubble sort) 10 , 9 , 8 , ........ //



#include<stdio.h>

int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};	
	int size_arr =(sizeof(arr)/sizeof(arr[0]));
	int temp;
	int flag=0;
	
// Theory : Bubble up the biggest value to it's right position.
// make for loop for positions (i) which need to be sorted in the array (0 --> 8) , not put 9 beacause it will be sorted by it self after sort another elements.
//make for loop for compare each element (j) with the element before it (J-1)(if smaller than it --> (swape) .. repeat the process until reach the unsorted position (i).	
	for (int i=0;i<size_arr-1;i++){
		
		flag=0;  
		for (int j=size_arr-1;j>=i+1;j--){
			    // swap //
			if (arr[j]>arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				
				flag=1;      // flag to show that the element is swaped 
				}
		}
		
		if (flag==0){break;}              // check if the elements is not swaped then .. the array is already sorted so break the loop and print the sorted array
	}
	
 ///////////////////////////// print sorted array /////////////////////////////////

	for (int i=0;i<size_arr;i++){		
		printf("%d ",arr[i]);
	}
	return 0;
	}