#include<string.h>
#include<stdio.h>
int main(){
	int len, i, temp, j;
	char x[] = "Naveen";
	char *y = x;
	len = strlen(x);

	for(i = 0; i <= len/2; i++){
		temp = x[i];
		x[i] = x[len -i -1];
		x[len -i -1] = temp;
	}
	printf("Reversed str : ");
	for(j = 0; j <= len; j++){
		printf("%c",x[j]);
	}
	printf("\nStats : ");

	if(*x == *y)
		printf("Reversed successfuly\n");
	else
		printf("Not reversed\n");
	return 0;
}
