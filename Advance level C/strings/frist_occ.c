#include<stdio.h>
#include<string.h>
int main(){
	char str[50], word[20];
	int i = 0, index, len;
	printf("Entr a string  : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a word  : ");
	fgets(word, sizeof(word), stdin);
	word[strcspn(word, "\n")] = '\0';
	len = strlen(word);
	while(str[i] != '\0'){
		if(!strncmp(&str[i], word, len)){
			index = i;
			break;
		}i++;
	}printf("Index of frist occurrence : %d\n", index);
	return 0;
}
