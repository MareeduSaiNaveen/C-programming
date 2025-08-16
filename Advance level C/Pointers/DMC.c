#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr = malloc(sizeof(int)*3);
	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;
	int size = ptr[2] - ptr[0];
	printf("size = %d", size);
	ptr = realloc(ptr, sizeof(int)*4);
	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;
	ptr[4] = 40;
	free(ptr);
	ptr = calloc(5, sizeof(int));
	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;
	ptr[4] = 40;
	ptr[5] = 50;
	free(ptr);
	return 0;
}
