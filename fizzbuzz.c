#include <stdlib.h>
#include <stdio.h>

int main(void){
	int i;
	for (i = 0; i < 1000; i++){
		printf("%d.", i);
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		printf("\n");
	}

	return 0;
}
