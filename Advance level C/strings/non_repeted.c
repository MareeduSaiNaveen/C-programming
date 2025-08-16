#include<stdio.h>
#include<string.h>
int long_str(int st, int end, char str[]){
	for(int i = st; i <= end ; i++){
		for(int j = i+1; j <= end; j++)
			if(str[i] == str[j]){
				return 0;
			}
	}return 1;
}int main(){
	char str[30];
	int i, j;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] ='\0';
	int st = 1, end = 1, long_sub = 1;
	int len = strlen(str);
	for(i = 0; i < len-1; i++){
		for(j = i+1; j < len; j++){
			if(long_str(i, j ,str) && long_sub < j-i+1){
				long_sub = j-i+1;
				st = i;
				end = j;
			}
		}
	}for(i = st; i <= end; i++){
		putchar(str[i]);
	}printf("\n");
	return 0;
}

