#include<stdio.h>
#include<string.h>
int main(){
	int i = 0, count = 0, j = 0, len, n, found = 0;
	char str1[100];
	char str2[100];
	printf("Enter a string 1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter a string 2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	len = strlen(str2);
	char *cmp = str1;
	while(*cmp != '\n'){
		if(!strcasecmp(cmp, str2)){
			count++;
		}	
		cmp++;
	}printf("Count` : %d\n", count);
	return 0;
}
