#include <stdio.h>
#include <string.h>

int main(){
	char name[150];
	
	scanf("%[^\n]", &name);
	getchar();
	
	printf("Halo %s\n", name);
	
	return 0;
}

