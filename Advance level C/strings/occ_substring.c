#include<stdio.h>
#include<string.h>
int main(){
	int i = 0, count = 0, j = 0, len, n, found = 0;
	char str1[100];
	char str2[100];
	printf("Enter a string 1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter a string 2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	len = strlen(str2);
	while(str1[i] != '\n'){
		j = 0;
		if(str1[i] == str2[j]){
			n = i;
			j = 0;
			count = 0;
			while(str2[j] != '\0'){
				if(str1[n] == str2[j]){
					count++;
				}j++;
				n++;
			}if(count == len){
				found++;
			}
		}i++;
	}printf("Count : %d\n", found);
	return 0;
}
