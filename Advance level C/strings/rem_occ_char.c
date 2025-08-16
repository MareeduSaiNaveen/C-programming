#include<stdio.h>
#include<string.h>
int main(){
	int i, j = 0, index[50], n = 0, m = 0;
	char str[100], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a char : ");
	scanf("%c", &ch);
	for(i = 0; str[i]; i++){
		if(str[i] == ch){
			index[j] = i-j;
			j++;
		}
	}for(i = index[0]; str[i]; i++){
		if(index[n] == i){
			for(m = i; str[m]; m++){
				str[m] = str[m+1];
			}if(j <= n){
				break;
			}n++;
		}
	}printf("string : %s\n", str);
	return 0;
}
