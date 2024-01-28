#include <stdio.h>

int _abs(int num){
	if (num>=0){
		return num;
	}
	else if (num<0){
		return -1*num;
	}

}

int main(){
	int num;

	
	


        printf("Enter Number: ");
	scanf("%d",&num);
	int absVal = _abs(num);
	printf("The Absolute Value of the number is: %d\n", absVal);

	return 0;
}

