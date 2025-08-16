#include<stdio.h>
#include<string.h>
int find(char str[], char ch, int i){
	if(str[i] == '\0'){
		return -1;
	}if(str[i] != ch){
		int c = find(str, ch, ++i);
		return c;
	}if(str[i] == ch){
		return i;
	}
}int main(){
	char ch, str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a char : ");
	scanf("%c", &ch);
	int index = find(str, ch, 0);
	printf("index value : %d\n", index);
	return 0;
}
