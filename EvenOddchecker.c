#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int MyNumber;

	printf("Please Enter Number you wish to evaluate: ");
	scanf("%d", &MyNumber);

	if (MyNumber%2 == 0){
		printf("%d is an Even Number	", MyNumber);
	}

	else {
		printf("%d is an Odd Number  ",MyNumber);
	}

	return 0;
}
