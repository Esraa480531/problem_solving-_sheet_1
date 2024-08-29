#include<stdio.h>
#include<stdlib.h>
int sumOfNumbers (int n); //prototype of function

int main (){
	 
	 //Test case 1
	 printf("input = 5 \t , output = %d",sumOfNumbers(5));
	  //Test case 2
	 printf("\ninput = 10 \t , output = %d",sumOfNumbers(10));
	 
 return 0 ;
 } 
    // implementation of function
	int sumOfNumbers (int n){
		
		float sum_Nat_num = n * ( n + 1) / 2 ;
		
		return sum_Nat_num ;
		
	}
	
