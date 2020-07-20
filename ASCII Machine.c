#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	unsigned char input[256];

	fgets(input,256,stdin);

	const short length = strlen(input);

	if(length == 1) {
		if(isascii(input[0]))
			printf("signed char");
		else
			printf("unsigned char");
	}
	else {
		short i;

		for(i=0;i<length;i++) {
			if(isascii(input[i]))
				;
			else {
				printf("unsigned char");
				exit(0);
			}
		}
		printf("signed char");
	}
}
