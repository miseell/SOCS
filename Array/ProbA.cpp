#include <stdio.h>
#include <string.h>

int main(){
	int arr;
	scanf("%d", &arr);
	getchar();
	int a[arr], b[arr];
	
	for (int i=0; i<arr;i++){
		scanf("%d", &a[i]);
	}
	for (int i=0; i<arr; i++){
		scanf("%d", &b[a[i]]);
	}	
	
	for (int i= 0; i<arr;i++){
		printf("%d", b[i]);
		if(i<arr-1){
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}

