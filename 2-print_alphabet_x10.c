//2-print_alphabet_x10.c
#include <stdio.h>

void _putchar(char c){
	putchar(c);
}
void print_alphabet_x10(void){
	int i;
	for (i=0; i<10; i++){
		char c;
		for (c='a';c<='z';c++){
			_putchar(c);
		}
		_putchar(c);
	}
	_putchar('\n');
}
int main(){
	print_alphabet_x10();
	return 0;
}

