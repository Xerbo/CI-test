#include <stdio.h>

// A function that should return, but never does
int warning_function(){
	for(int i = 0; i < 10; i++){
		printf("Hello %d\n", i);
	}
}

int main(){
	printf("Hello World!\n");

	warning_function()

	return 0;
}
