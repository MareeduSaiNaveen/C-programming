#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int fre[255], i = 0, j = 0;
	memset(fre, 0, sizeof(fre));
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while(str[i]){
		fre[str[i]]++;
		if(fre[str[i]] <= 1){
			str[j++] = str[i];
		}i++;
	}str[j] = '\0';
	i = 0;
	while(str[i]){
		printf("%c", str[i++]);
	}printf("\n");
	return 0;
}
