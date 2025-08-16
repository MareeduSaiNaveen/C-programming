#include<stdio.h>
#include<string.h>
int main(){
	int i, index = 0;
	char str[50], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a char to check frist occurrences : ");
	scanf("%c", &ch);
	for(i = 0; str[i]; i++){
		if(str[i] == ch){
			index = i;
		}
	}if(index){
		printf("last occurrences of char at index : %d\n", index);
	}else{
		printf("Given char is not found at string\n");
	}return 0;
}
