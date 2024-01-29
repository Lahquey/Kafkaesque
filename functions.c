#include <stdio.h>
#include <math.h>

int main(){
	srand(time(NULL));
	int num1 = (rand() % 100);
	int num2 = (rand() % 200);
	int jumla =  num1 +  num2;
	printf("The Sum is: %d\n", jumla);

	return jumla;
}

