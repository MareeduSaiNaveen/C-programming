#include<stdio.h>
#include<string.h>
int angram(char str1[], char str2[]){
	int i, size = 255;
	int check[size];
	memset(check, 0, sizeof(check));
	if(strlen(str1) != strlen(str2)){
		return 0;
	}for(i = 0; str1[i] && str2[i]; i++){
		check[str1[i]]++;
		check[str2[i]]--;
	}for(i = 0; i < size; i++){
		if(check[i] != 0){
			return 0;
		}
	}return 1;
}int main(){
	int check;
	char str1[50], str2[50];
	printf("Enter a string one : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter a string two : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	check = angram(str1, str2);
	if(check){
		printf("Given strings are angram\n");
	}else{
		printf("Given strings are not angram\n");
	}return 0;
}
