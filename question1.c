#include<stdio.h>
#include<stdlib.h>

int factorial (int n); //prototype of function
 
 int main (){
	  int t_case1,t_case2;
	  
	  //calling of function
	  t_case1 = factorial(5); //input=5
	  printf("t_case1=%i\n", t_case1); //output = 5*4*3*2*1
	  t_case2 = factorial(0); //input=0
	  printf("t_case2=%i\n", t_case2); //output= 0!=1 costant rule
	  
	 return 0;
 }
 // implementation of function
        
		int factorial (int n){
		 
		 if (n<=1){
			 return 1;
		 }
			else{
				return n*factorial(n-1) ;
			}
			
			
			
			
			
		}
