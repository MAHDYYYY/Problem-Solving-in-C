#include<stdio.h>

// find the index of the first unrepeated character in a string with time complexity of o(n) and o(n^2) and space complexity of o(1)
// if w wanna to find index of first reapeated character we can use o(n^2) and o (n)
int find_index_of_no_repeated_char_n(char * string_arr){     // time complexity = o(n)  space co. =o(1)
	int freq[123]={0};

	for (int j=97;j<=122;j++){
	for (int i=0;string_arr[i] != '\0';i++){
			if (string_arr[i]==j){freq[j]++;}                 // frequent array complete // 
		}
	}
	
	for (int j=0;string_arr[j] != '\0';j++){
			for(int i=97;i<=122;i++){
				if(string_arr[j]==i){if (freq[i]==1){return j;}}
			}	
	}
	
	return -1;		
}


int find_index_of_no_repeated_char_n2(char m[]){ // time complexity is o(n^2)    // space complexity is o(1)
	int count=0;
	for (int i=0;m[i] != '\0';i++){
		for (int j=0;m[j] != '\0';j++){         
			if (m[i]==m[j]){count++;}
		}
	if(count==1){return i;}
	count=0;
	}
	return -1;

}


int main (void){
	char arr[]={"ujjjjjjjjjjjjjjjjjjjjj"};
	
	int x=find_index_of_no_repeated_char_n2(arr);
	if (x == -1){printf ("there is no non repeated char !!");}
	else {printf ("the index of the first non repeated char is : %d ",x);}
		
	return 0;
}