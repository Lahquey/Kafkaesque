#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c,d,e,f;

	printf("Enter Physics: ");
	scanf("%d", &a);

	printf("Enter Agriculture: ");
        scanf("%d", &b);

	printf("Enter Biology: ");
        scanf("%d",  &c);

	printf("Enter Chemistry: ");
        scanf("%d", &d);

	printf("Enter Gographein: ");
        scanf("%d", &f);

	printf("Enter History: ");
        scanf("%d", &e);

	double Avg = (a+b+c+d+e+f)/6;

	printf("The average of the 6 subjects is: %f\n ", Avg);

	return 0;

}

