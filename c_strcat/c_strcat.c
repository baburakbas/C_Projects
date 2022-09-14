#include<stdio.h>
#include<string.h>

char *adder(char *a,char *b);


int main(){
    char babur,akbas;
    char firstChar[]  = "babur";
    char secondChar[] = " akbas";

	 
    char *total = adder(firstChar, secondChar);

	printf("%s",total);

    return 0;
     
	 
 }



 char *adder(char *a,char *b){

	char *savedValue = a;

	for  ( ; *a ; a++);
	for	 ( ; *b ; b++){
		*a = *b; 
		a++;
	//	printf("%s\n", savedValue);
	}

	
	//printf("%s\n", savedValue);
	return savedValue;
	 // Bir şey deniyorum kabul et müco seni sikmesin 
} 
