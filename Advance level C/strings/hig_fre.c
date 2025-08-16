#include<stdio.h>
#include<string.h>
int main(){
	char str[50], ch;
	int count[255], i = 0, max = 0;
	memset(count, 0, sizeof(count));
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	while(str[i] != '\0'){
		count[str[i]]++;
		i++;
	}for(i = 0; i < 256; i++){
		if(max < count[i]){
			max = count[i];
			ch = i;
		}
	}printf("max = %c\n", ch);
	return 0;
}
