#include <stdio.h>
#include <string.h>

int main() {
    	char str[100];
    	int len, count;

    	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	len = len - 1;
	count = len * (len + 1) / 2;
	
	printf("Total number of substrings: %d\n", count);
    	return 0;
}

