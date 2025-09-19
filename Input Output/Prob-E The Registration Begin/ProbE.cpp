#include <stdio.h>
#include <string.h>

int main(){
	char n[20], m[150], c;
	int o;
	
	scanf("%[^\n]", &n);
	getchar();
	scanf("%[^\n]", &m);
	getchar();
	scanf("%c %d", &c, &o);
	
	printf("Id    : %s\n", n);
	printf("Name  : %s\n", m);
	printf("Class : %c\n", c);
	printf("Num   : %d\n", o);
	return 0;
}

