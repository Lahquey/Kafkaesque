#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int i,j,k;  //Variables for use in function
	long long factory = 1;

	printf("Please Enter a non-negative integer:");   //prompt user to enter variables
	scanf("%d",&i);  //read user input and store it in declared variables

	if(i<0){
		printf("%d is a negative number. Factorial is undefined for negative numbers. ", i); //check for negativity
	}

	else{
		for (j=1; j<=i; ++j){
			factory *=j; //revisit to comment
		}

		printf("factorial of %d = %lld\n ",i, factory);
	}

	return 0;

}


	







