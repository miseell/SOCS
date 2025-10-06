#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	for(int p=0; p<t; p++){
		int n;
		scanf("%d",&n);
		
		for(int i=0; i<n; i++){
			for(int m = 0; m < n-i-1; m++){
				printf(" ");
			}
			for(int j=0;j<2*i +1;j++){
			printf ("*");
			}
			printf ("\n");
		}
	}
	return 0;
}
