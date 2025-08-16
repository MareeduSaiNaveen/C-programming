#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int *ptr = (int*)calloc(5, sizeof(int));
	for(i = 0; i < 5; i++){
		printf("%d ", *(ptr+i));
	}printf("\n");
	*(ptr+0) = 10;
	*(ptr+1) = 20;
	ptr = realloc(ptr, sizeof(int)* 10);
	for(i = 0; i < 10; i++){
		printf("%d ", *(ptr+i));
	}printf("\n");
	*(ptr+6) = ;
	*(ptr+7) = 70;
	free(ptr);
	return 0;
}
