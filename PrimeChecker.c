#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//rule out base cases by checking if even or equal to 2
	int Num;


	printf("Please Enter the Number you wish to check \n" );
	scanf("%d", &Num);

	if (Num == 2){
		printf("%d is a Prime Number ",Num);
	}

	else if (Num%2 == 0){
		printf("%d is and Even Number, hence not a prime number ", Num);
	}

	else if (Num%2 != 0){
		for (int i =3; i<= sqrt(Num); i +=2){
			if (Num%i == 0){
				printf("%d is not Prime ",Num);
				return 0; 
			}			
		}
		printf("%d is a Legitimate Prime Number", Num);
	}
}
