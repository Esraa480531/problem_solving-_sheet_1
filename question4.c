#include<stdio.h>
#include<stdlib.h>

int gcd (int a , int b); //prototype of function

int main (){
	 
	 //Test case:1
	 printf("input = 56 , 98 \t , output = %d",gcd(56 , 98));
	  //Test case:2
	 printf("\ninput = 101 , 103 \t , output = %d",gcd(101,103));
	 
 return 0 ;
 } 
 // implementation of function
   int gcd (int a , int b){
	   if (b==0){
		   return a ; // a is gcd
	   }
	    else {
			gcd(b , a%b );
		}
	   
   }
