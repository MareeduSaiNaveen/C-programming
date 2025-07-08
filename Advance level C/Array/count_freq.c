#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char str[1000];
	int freq[256] = {0};
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);

	for(i =0; str[i] != '\0'; i++){
		freq[(unsigned char)str[i]]++;
	}

	printf("count of char \n");
	for(i = 0; i < 256; i++){
		if(freq[i] != 0 && i != '\n'){
			printf("%c = %d\n", i, freq[i]);
		}
	}
	return 0;
}
