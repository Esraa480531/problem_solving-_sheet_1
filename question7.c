#include<stdio.h>
#include<stdlib.h>

void decimalToBinary (int n); //prototype of function

int main (){
	  //Test case:1
	 printf("input = 10\n");
	 decimalToBinary (10);
	  //Test case:2
	 printf("\ninput = 7\n");
	 decimalToBinary (7);
	 
	 
 return 0 ;
 } 
 // implementation of function
  void decimalToBinary (int n){
	  
	  if ( n > 0 ){ 
	  decimalToBinary(n/2);
	  printf("%d",n%2);
		  
	  }
	  
  }
