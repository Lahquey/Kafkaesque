//Fibonaaci seqquence calculator

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
        int i,j,k;

        //int k = 0;

        int first = 0, second=1, next;

        for (i=1;i<10;i++){
		next = first + second;
		first = second;
		second = next;  
		printf("Fibonacci %d is %d\n",i,next);
		

	}
}


	
      
