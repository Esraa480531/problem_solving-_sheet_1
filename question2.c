#include<stdio.h>
#include<stdlib.h>

int isprime (int n); //prototype of function
 
 int main (){
	 
	 //Test case 1
	 printf("input = 7 \t , output = %d",isprime(7));
	  //Test case 2
	 printf("\ninput = 10 \t , output = %d",isprime(10));
	 
 return 0 ;
 } 
 // implementation of function
 
    int isprime (int n){
		  if(n<=1){        // if number less than 1 or equal
			  
			 return 0;
		  }
		else {
		int i ;
		for(i=2 ; i<= n/2 ; i++ ){
			 
			 if ( n%i == 0 ){
				 return 0 ;
			 }
			 
		else {
			return 1 ;
			}
		}
			
		}
	}
