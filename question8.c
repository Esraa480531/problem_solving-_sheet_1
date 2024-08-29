#include<stdio.h>
#include<stdlib.h>

int countDigits (int n); //prototype of function

int main (){
	 
	 //Test case 1
	 printf("input = 1234 \t , output = %d",countDigits(1234));
	  //Test case 2
	 printf("\ninput = 100 \t , output = %d",countDigits(100));
	 
 return 0 ;
 } 
    // implementation of function
	int countDigits (int n){
		int count = 0 ;
		if ( n == 0){
			return 1 ;
		}
		while ( n > 0){
			n /= 10 ;
			count++ ;
		}
			
		return count ;
	}
