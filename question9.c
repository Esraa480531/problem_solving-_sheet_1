#include<stdio.h>
#include<stdlib.h>

int power (int base , int exp); //prototype of function

int main (){
	 
	 //Test case:1
	 printf("input = 2 , 3 \t , output = %d",power(2 , 3));
	  //Test case:2
	 printf("\ninput = 5 , 0 \t , output = %d",power(5,0));
	 
 return 0 ;
 } 
 // implementation of function
 int power (int base , int exp){
      long double res = 1;
	 if (exp == 0 ){
		 return 1 ;
	 }
	 while(exp>0){
		 res *= base ;
	     exp-- ; }
		 return res ;
	
		
	 }
	 
	 
	 
 
