#include<stdio.h>
#include<stdlib.h>

int reverseNumber (int n); //prototype of function

int main (){
	 
	 //Test case 1
	 printf("input = 1234 \t , output = %d",reverseNumber(1234));
	  //Test case 2
	 printf("\ninput = 100 \t , output = %d",reverseNumber(100));
	 
 return 0 ;
 } 
    // implementation of function
     int reverseNumber (int n){
		 int  rev = 0 ;
		 int digit = 0;
		 while (n!=0){
			 digit = n %10 ;
			 rev = rev *10 + digit ;
			 n/=10 ; 
		 }
		 
		 return rev; 	 
	 }
