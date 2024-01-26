#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;
	/* your code goes there */
	int LastDigit = number % 10;
	 //print the last digit 
	 printf("Digit ya mwisho ni :%d %d\n",number,LastDigit);

	return (0);
}
