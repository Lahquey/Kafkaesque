#include <stdio.h>
#include <stdlib.h>

int main(){
	char Letters;
	for(char c='A'; c<='Z';c++){
		Letters = c;
		printf("The alphabet in all caps is: %c\n", Letters);
	}
	return 0;
}

