#include <stdio.h>
#include <string.h>

int main(){
 int t;
 scanf ("%d", &t);
 
 for (int i= 1; i<=t; i++){
 	int a, b, c, cash;
 	scanf("%d %d %d", &a, &b, &c);
 	
 	cash= (a*b)/100;
 	if(cash > c){
 		cash = c;
	}
 	
 	printf("Case #%d: %d\n", i, cash);
 }
	return 0;
}

