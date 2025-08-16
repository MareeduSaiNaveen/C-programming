#include<stdio.h>
#include<string.h>
int longstr(char str[], int st, int end){
	int i, j;
	for(i = st; i <= end; i++){
		for(j = i+1; j <= end; j++){
			if(str[i] == str[j]){
				return 0;
			}
		}
	}return 1;
}int main(){
	int max = 0, i, j, st, end, len;
	char str[50];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	len = strlen(str);
	for(i = 0; i < len; i++){
		for(j = i+1; j < len; j++){
			if((longstr(str, i, j)) && (max < j - i +1)){
				max = j - i + 1;
				st = i;
				end = j;
			}
		}
	}for(i = st; i <= end; i++){
		putchar(str[i]);
	}printf("\n");
	return 0;
}
