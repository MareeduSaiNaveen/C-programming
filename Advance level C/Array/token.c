#include<stdio.h>
#include<string.h>
int main(){
	int i, j, a, len, len1;
	char str[] = "geeks_for_geeks,c coures";
	const char *sep = "_, ";
	char *token = strtok(str, sep);
	while(token != NULL){
		printf("%s\n", token);
		token = strtok(NULL, sep);
	}return 0;
}
