#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char str[1000];
	int freq[256] = {0};
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	for(i =0; str[i] != '\0'; i++){
		freq[str[i]]++;
	}

	printf("count of char \n");
	for(i = 0; i < 256; i++){
		if(freq[i] != 0){
			printf("%c = %d\n", i, freq[i]);
		}
	}
	return 0;
}
