#include <stdio.h>
#include <string.h>

int main(){
	char str[150];
	
	scanf("%[^\n]", &str);
	getchar();
	
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n", str);
	printf("    return 0;\n");
	printf("}\n");
	
	return 0;
}

