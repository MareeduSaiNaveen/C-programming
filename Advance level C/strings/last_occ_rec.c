#include<stdio.h>
#include<string.h>
int find(char str[], char ch, int i){
	int c;
	if(str[i] == '\0'){
		return -1;
	}if(str[i] == ch){
		return i;
	}c = find(str, ch, --i);
	return c;
}int main(){
	char ch, str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a char : ");
	scanf("%c", &ch);
	int len = strlen(str);
	int index = find(str, ch, len-1);
	printf("index value : %d\n", index);
	return 0;
}
