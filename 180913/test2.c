#include <stdio.h>
int main(){
	int i;
	char str[6];
	printf("hello world!\n");

	for(i=46; i<51; i++){
		str[i] = i;
	}

	str[5] = '\0';

	printf("%s\n", str);

	return 0;
}

