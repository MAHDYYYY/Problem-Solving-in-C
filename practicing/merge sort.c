// problem : sort array (acending order)by using (Merge sort)

#include <stdio.h>
// decleration of megre function //
void merge_sort(int *arr ,int ,int );
//declearation of merge sorted function //
void merge_sorted(int *, int, int);

int main(void){
	int arr[10];

// take array from user //
printf("Enter the array u wanna to sort : \n");
for (int i=0;i<10;i++){scanf("%d",&(arr[i]));}

// call megre funcrion //
merge_sort(arr,0,9);

// print sorted array //
for (int i=0;i<10;i++){
	printf("%d ",arr[i]);
}
	
	return 0;
}

// merge functio //
void merge_sort(int * arr, int start, int end){
	int mid =((end-start)/2)+start;
	if (start < end){
merge_sort(arr,start,mid);
merge_sort(arr,mid+1,end);		
merge_sorted(arr,start,end);
	}
	
}

// merge sorted function //

void merge_sorted(int * arr, int start, int end){
	int mid=((end-start)/2)+start;
	int size_arr_1=(mid-start)+1;
	int size_arr_2=(end)-(mid+1)+1;
	int arr_1[size_arr_1];
	int arr_2[size_arr_2];
	int i=0;
	int q=0;
	int k=start;
	
     // fil arr_1 //
	 for (int i=0;i<size_arr_1;i++){
		 arr_1[i]=arr[i+start];
	 }
	 // fil arr_2 //
 for (int i=0;i<size_arr_2;i++){
		 arr_2[i]=arr[i+mid+1];
	 }

	 // merge the two arrys in one array sorted //
	while ( i<=size_arr_1-1 && q<=size_arr_2-1 ){
		
	if (arr_1[i]<arr_2[q]){
		arr[k++]=arr_1[i++];
	}	
	else {
		arr[k++]=arr_2[q++];
	}
	
	}
	
	
	while(i<=size_arr_1-1){arr[k++]=arr_1[i++];}
	while(q<=size_arr_2-1){arr[k++]=arr_2[q++];}
		
		
		
		
	}



