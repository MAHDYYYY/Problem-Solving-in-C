#include<stdio.h>

// calculate repeated and unrepeated char in string 

int freq_repeated_char(char * string_arr){     // time complexity = o(n)  space co. =o(1)
int freq=0;
int result=0;
int i;
	for (int j=97;j<=122;j++){
	for (i=0;string_arr[i] != '\0';i++){
			if (string_arr[i]==j){freq++;}                 // frequent array complete // 
		}

		if(freq>1){result++;freq=0;}
		else{freq=0;}
		
	}
	
	
	
	if (result==0){return -1;}
	else{return result;}	
	
}



int freq_unrepeated_char(char * string_arr){     // time complexity = o(n)  space co. =o(1)     can be mede with o (n^2)
int freq=0;
int result=0;
int i;
	for (int j=97;j<=122;j++){
	for (i=0;string_arr[i] != '\0';i++){
			if (string_arr[i]==j){freq++;}                 // frequent array complete // 
		}

		if(freq==1){result++;}
		freq=0;
		
	}
	
	if (result==0){return -1;}
	else{return result;}	
	
}

int main (void){
	char arr[]={"qwertyuioppppppppp"};
	
	int x=freq_unrepeated_char(arr);
	if (x == -1){printf ("there is no unrepeated char !!");}
	else {printf ("the number of unrepeated characters is : %d ",x);}
		
	return 0;
}