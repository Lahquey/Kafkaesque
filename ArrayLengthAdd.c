#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	printf("Please Enter the Number of Array Elements to consider ");
	int n;
	scanf("%d", &n);
	int MyArray[8] = {23,52,85,65};
	for (int i=0; i<n; i++){
		printf("Array Element %d is %d\n ",i, MyArray[i]+12);
	}

	for (int i =0; i<n/2 ;i++){
		int Tempo = MyArray[i];
		MyArray[i] = MyArray[n-i-1];
		MyArray[n-i-1] = Tempo;
	}

	printf("Reverses Array is : \n");
	for (int i = 0; i<n ;i++){
		printf("RevArray %d is %d\n ", i, MyArray[i]+12);
	}

	return 0;


	//printf("%p\n", MyArray);
}
