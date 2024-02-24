// problem : =========> descending order sort for an array using (insertion sort) 10 , 9 , 8 , ........ //



#include<stdio.h>

int main(){
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};                               
	int size_arr=sizeof(arr)/sizeof(arr[0]);
    int j,key;
	
// Theory : catch the unsorted element and insert it in it's right position 
	
                      //                      1    :   2 3 4 5 6 7 8 9 10        // 
			          //                 (sorted ) :     ( unsorted )          //                     
// make for loop for unsorted elements (i) and while loop for sorted elements (j) //
	
for (int i=1;i<size_arr;i++){         
    key=arr[i];
	j=i-1;
	        //compare unsorted lements with sorted elements and shifting array then insert the key in the right position // 

	while(i>=0 && key>arr[j]){
		arr[j+1]=arr[j];
		j--;
	}
	
	arr[j+1]=key;
	}	
	
 ///////////////////////////// print sorted array /////////////////////////////////

	for (int i=0;i<size_arr;i++){		
		printf("%d ",arr[i]);
	}

	return 0;
	}
	
	/* inserion sort addvantage ==> simple code , space complexity very low O(1){3 variables only to sort an array with any size} , time complexity at best case O(n) which is better than selection sort , 
	                            ==> timpe complexity is high -> worst case O(n^2)*/  
	
	
	