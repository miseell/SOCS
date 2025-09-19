#include <stdio.h>
#include <string.h>

int main(){
	char s[4][50];
	
	for(int i = 0; i < 3; i++){
		scanf("%s", &s[i]);
		getchar();
	}
	
	for(int i = 2; i >= 0; i--){
		printf("%s", s[i]);
		
		if(i != 0) printf(" ");
	}	
	printf("\n");

	return 0;
}

