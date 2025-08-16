#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char str[50], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a char to check frist occurrences : ");
	scanf("%c", &ch);
	for(i = 0; str[i]; i++){
		if(str[i] == ch){
			printf("Fisrt occurrences of char at index : %d\n", i);
			return 0;
		}
	}printf("Given char is not found at string\n");
	return 0;
}
