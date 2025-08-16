#include<string.h>
#include<stdio.h>
int main(){
	int i, q, j;
	char str[100], ch;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for(i = 0; str[i]; i++){
		for(q = i+1; str[q]; q++){
			if(str[i] == str[q]){
				for(j = q; str[j]; j++){
					str[j] = str[j+1];
				}i--;
			}
		}
	}printf("string : %s\n", str);
	return 0;
}
