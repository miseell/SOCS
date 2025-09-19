#include <stdio.h>
#include <string.h>

int main(){
	char name[150];
	
	scanf("%[^\n]", &name);
	getchar();
	
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);
	
	return 0;
}

