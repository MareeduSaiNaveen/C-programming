#include<stdio.h>
#include<string.h>
int main(){
	int i, index = -1;
	char str[100], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a char : ");
	scanf("%c", &ch);
	for(i = 0; str[i]; i++){
		if(str[i] == ch){
			index = i;
		}
	}if(index == -1){
		printf("Not pressedted in string\n");
		return 0;
	}for(i = index; str[i]; i++){
		str[i] = str[i+1];
	}printf("string %s\n", str);
	return 0;
}
