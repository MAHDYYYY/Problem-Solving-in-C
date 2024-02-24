#include<stdio.h>



int search_for (int *,int,int);

int main(void){
	int search_result;
	int arr[10]={20,23,30,50,62,102,500,610,612,700};            // sorted array                arr[0]--> arr[9]                       
	int key;
	while(1){
	scanf("%d",&key);
	search_result = search_for(arr,10,key);
	if (search_result==-1){printf("key is not found yet !! \n\n\n\n ");}
    else{printf("the key u searched for is found in the list with index of : %d \n\n\n\n",search_result);}
	
	}
	
	return 0;
}


int search_for(int * arr,int size ,int key){            // binary search 
     int start=0;                            // decleration of 4 int variable used in searching
     int end=size-1;
     int mid;                                                     	 
                                                    
	while(start<=end){
		mid=((end-start)/2)+start;
		if(arr[mid]==key){return mid;}
		else if (key<arr[mid]){end=mid-1;}
		else if (key>arr[mid]){start=mid+1;}
	}												// looping until start == end
                                                    //rechange variables //  

	  return -1;
}