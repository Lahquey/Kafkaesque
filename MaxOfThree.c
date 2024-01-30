#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int Num1;
	int Num2;
	int Num3;

	printf("Enter first number: ");
	scanf("%d", &Num1);
	printf("The first number you entered is: %d\n ", Num1);

	printf("Enter second Number: ");
	scanf("%d", &Num2);
	printf("The Second Number you entered is: %d\n ", Num2);

	printf("Enter the Third number: ");
	scanf("%d", &Num3);
	printf("The Third Number you entered is: %d\n ", Num3);

	//if stateemts to sort out the maximum of the 3 numbers entered above 
	
	if (Num1>Num2 && Num1>Num3){
		printf("The First Number ie %d  is Greatest, give it a Cookie ", Num1);
	} 
	else if (Num2>Num1 && Num2>Num3){
		printf("The Second  Number ie. %d  is Greatest, give it that Biscuit ", Num2);
	}
	else if (Num3>Num1 && Num3>Num2){
		printf("The Third  Number %d  is Greatest, pass me the Beer ", Num3);
	}

	return 0;
}
