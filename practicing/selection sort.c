// problem : =========> descending order sort for an array using (Selection sort) 10 , 9 , 8 , ........ //



#include<stdio.h>

int main(){
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};                               
	int size_arr=sizeof(arr)/sizeof(arr[0]);
    int temp;

// Theory : Select unsorted elemet and compare it by another elements to put the biggest value in it's right position 
// select element (i) and compare it with all another elements (j)  .. if element (j) > element (i) make Swape  //
// repeat it for all array elements to sure that element (i) is the maximum of all elements (j) //
				 
				 
for (int i=0;i<size_arr-1;i++){         
	for (int j=i+1;j<size_arr;j++){
		
		  // swape // 
		if (arr[j]>arr[i]){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
		
	}
	
	}	
	
///////////////////////////// print sorted array /////////////////////////////////

	for (int i=0;i<size_arr;i++){		
		printf("%d ",arr[i]);
	}

	return 0;
	}
	
	
	

	
	