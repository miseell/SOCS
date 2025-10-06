#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf ("%d", &t);
	
	for (int i = 1; i <= t; i++){
		int a[6];
		char words[]= "ashiap";
		scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
		printf ("Case #%d: ", i);
		
		for (int j = 0; j < 6; j++){
			for (int k = 0; k < a[j]; k++){
				printf("%c", words[j]);
			}
		}
		printf("\n");
	}
	return 0;
}

