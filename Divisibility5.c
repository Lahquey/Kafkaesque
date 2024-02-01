#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int Num;
	printf("Enter Thy Number mate ");
	scanf("%f",&Num);

	if (Num%5 == 0){
		printf("%f is divible by 5 \n", Num);
	}

	return 0;
}

