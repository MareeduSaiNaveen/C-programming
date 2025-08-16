#include<stdio.h>
#include<string.h>
int main(){
	int i, j, temp, len;
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for(i = 0; i < len - 2; i++){
		for(j = 0; j < len - i - 2; j++){
			if(str[j] > str[j+1]){
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	}i = 0;
	while(str[i] != '\n'){
		printf("%c ", str[i]);
		i++;
	}printf("\n");
	return 0;
}
