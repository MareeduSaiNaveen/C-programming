#include<stdio.h>
#include<string.h>
int rem(int k, char *str, char ch){
	while(*(str+k-1) != '\0'){
		if(*(str+k) == ch){
			*(str+k-1) = *(str+k+1);
			k++;
		}else{
			*(str+k-1) = *(str+k);
		}k++;
	}return 0;
}int main(){
	int len, len1, i = 0, j = 0;
	char str[50], str1[20], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter a string : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	while(str[i] != '\0'){
		j = 0;
		while(str1[j] != '\0'){
			if(str[i] == str1[j]){
				ch = str[i];
				rem(i+1, str, ch);
				rem(j+1, str1, ch);
				i--;
				break;
			}else{
				j++;
			}
		}i++;
	}printf("string 1 : %s\n", str);
	printf("string 2 : %s\n", str1);
	return 0;
}
