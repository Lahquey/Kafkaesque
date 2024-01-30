#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int Num1;
	printf("Please Key in the number you would like to check if positive or negative ");
	scanf("%d", &Num1);
	
	//if statemetns to check if positive or negative
	
	if(Num1>=0){
		printf("%d is Positive ",Num1);
	}
		else {
			printf("%d is Negative ",Num1);
		}
	return 0;

}
