#include <stdio.h>
#include <stdlib.h>

int main(){
	srand(time(NULL)); //seed with current time for generation of random number
	int MyNumber = rand() % 89;
	unsigned long long Result = factorial(MyNumber);

	printf("Our random Number is: %d\n", MyNumber);
	printf("Our calculated factorial is: %llu\n", Result);
	
	return 0;
}
