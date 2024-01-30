#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i;
	int j;
	
	printf("Enter Base Number: ");
	scanf("%d", &i);

	printf("Enter power you wanna raise it to: ");
	scanf("%d", &j);

	double k = pow(i,j);
	printf("%d raised to %d is %f ", i,j,k);

}
