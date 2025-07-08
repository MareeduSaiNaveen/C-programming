#include<stdio.h>
#include<string.h>
int main(){
	int i, j, a, len, len1;
	char str[] = "geeksforgeeks";
	char str1[] = "geeks";
	len = strlen(str);
	len1 = strlen(str1);
	printf("len of str : %d\nlen of str1 : %d\n", len, len1);
	for(i = 0; i <= len-len1; i++){
		a = i;
		for(j = 0; j < len1; j++){
			if(str[a] != str1[j]){
				break;
			}a++;
		}if(j == len1){
			printf("%d we found index\n",i);
		}
	}
}
