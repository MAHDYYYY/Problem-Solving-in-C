#include <stdio.h>

// decleration of reverse function //
void arr_reverse(int *arr ,int size);


int main(void){
int size=0;

// take a number of elements from user //

printf ("Enter the number of elements : ");
scanf ("%d",&size);

// create an array and take elements from user //
int arr[size];
printf ("Enter arry elements :\n");
for (int i=0;i<size;i++){scanf("%d",&arr[i]);}	
	
	
	// call reverse function //
	
	arr_reverse(arr,size);
	
	// print reversed array //
	for (int i=0;i<size;i++){printf("%d ",arr[i]);}	
	
	
	return 0;
}

// reverse function //
                                                       //    0    size -1
void arr_reverse(int * arr, int size){                 //    5 4 3 2 1  // 
	int i=0;                                           //    i       j  //   
	int j=size-1;
	int temp;
	
	while (i<j){
	// swap // 
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
		i++;
		j--;
	}
}