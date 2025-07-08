#include<string.h>
#include<stdio.h>
int vowles(char str){
	return(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' || str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U');
}
int main(){
	int i=0, j=0, len, size;
	printf("Enter a size : ");
	scanf("%d",&size);
	getchar();

	char str[size], str1[size];
	
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);

	len = strlen(str);
	
	for(i = 0; i < len; i++){
		if(!vowles(str[i])){
			str1[j++] = str[i];
		}
	}
	str[j] = '\0';
	printf("After removing vowles : %s",str1);
	return 0;
}
