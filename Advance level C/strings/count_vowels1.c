#include<stdio.h>
#include<string.h>
int check(char ch){
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' ||ch == 'E' || ch == 'I' ||ch == 'O' ||ch == 'U');
}int count(char str[], int i, int *counts){
	if(str[i] != '\0'){
		if(check(str[i])){
			(*counts)++;
		}count(str, ++i, counts);
	}
}int main(){
	char str[50];
	int counts = 0;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	count(str, 0, &counts);
	printf("count = %d\n", counts);
	return 0;
}
