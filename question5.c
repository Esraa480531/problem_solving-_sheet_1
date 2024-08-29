#include<stdio.h>
#include<stdlib.h>

void sumOfEvenAndOddDigits (int n); //prototype of function

int main (){
	  //Test case:1
	 printf("input = 1234\n");
	 sumOfEvenAndOddDigits (1234);
	  //Test case:2
	 printf("input = 105\n");
	 sumOfEvenAndOddDigits (105);
	 
	 
 return 0 ;
 } 
 // implementation of function
 void sumOfEvenAndOddDigits (int n){
	  int sumEven = 0 ;
	  int sumOdd = 0 ;
	  int digit=0 ;
	  while( n != 0){
		  digit = n%10 ;
		  if ( digit%2 == 0){
			  sumEven += digit;
		  }
		  else {
			  sumOdd += digit;
		  }
		  n/=10;
 }
   printf("sum of even digit : %d \n",sumEven);
   printf("sum of odd digit : %d \n",sumOdd);
 }
