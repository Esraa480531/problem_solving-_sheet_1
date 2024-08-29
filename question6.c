#include<stdio.h>
#include<stdlib.h>

int ispalindrome (int n); //prototype of function

int main (){
	 
	 //Test case 1
	 printf("input = 121 \t , output = %d",ispalindrome(121));
	  //Test case 2
	 printf("\ninput = 123 \t , output = %d",ispalindrome(123));
	 
 return 0 ;
 } 
 // implementation of function
   int ispalindrome (int n){
	     int  original = n ;
	     int  rev = 0 ;
		 int digit = 0;
		 while (n!=0){
			 digit = n %10 ;
			 rev = rev *10 + digit ;
			 n/=10 ; 
		 }
		 
	   return (original == rev)? 1 : 0 ;
   }
 
