#include<string.h>
#include<stdio.h>
int main(){
	char str1[20] = "Hello ";
	char str2[] = "World";
	strcat(str1, str2);
	printf("%s\n",str1);
	printf("Size - %ld\n", sizeof(str1));
	printf("len - %ld\n", strlen(str1));

	printf("Method 2\n");

	char str3[20] = "Hello ";
	char str4[] = "World";

	int j, i = strlen(str3);
	j = 0;
	while(str4[j] != '\0'){
		str3[i] = str4[j];
		i++;
		j++;
	}
	printf("%s\n",str3);
	printf("Size - %ld\n", sizeof(str3));
	printf("len - %ld\n", strlen(str3));
	return 0;
}
