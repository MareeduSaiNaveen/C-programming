#include<stdio.h>
#include<string.h>
int main(){
	char array[1000];
	printf("Enter a String : ");
	scanf("%s",array);

	int i = 0;

	while(array[i] != '\0')
	{
		i++;
	}
	printf("the string of %s are have length is %d\n",array,i);

	int len;
	len = strlen(array);

	if(i == len){
		printf("code works good!\n");
	}else{
		printf("code not works not good\n");
	}
	return 0;
}
