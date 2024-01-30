#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Num;

int main(){
	printf("Enter Thy Number: ");
	scanf("%d", &Num);

	if (Num%2 == 0 && Num%3 == 0){
		printf("%d is Divisible by 6: ", Num);

	}

	else {
		printf("%d is not Divisible by 6, No cookie for Thee", Num);
	}


	return 0;
}
