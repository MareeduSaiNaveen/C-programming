#include<stdio.h>
#include<string.h>
int main(){
	int i = 0, count = 0, j = 0, len, n;
	char str1[100];
	char str2[100];
	printf("Enter a string 1 : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter a string 2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	len = strlen(str2);
	while(str1[i]){
		if(str1[i] == str2[0]){
			n = i;
			j = 0;
			while(str2[j] && str1[n] == str2[j]){
				j++;
				n++;
			}if(j == len){
				printf("Found\n");
				return 0;
			}
		}i++;
	}printf("Not Found\n");
	return 0;
}
