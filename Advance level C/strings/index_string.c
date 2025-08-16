#include<stdio.h>
#include<string.h>
int main(){
	int i, st, end, len;
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	len = strlen(str)-1;
	printf("Enter a starting index and ending index 0 - %d: ", len);
	scanf("%d%d", &st, &end);
	if(st < 0 || end < len){
		printf("Invalid index\n");
	}for(i = st; i <= end; i++){
		putchar(str[i]);
	}printf("\n");
	return 0;
}
