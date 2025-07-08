#include<stdio.h>
int main(){
	int data = 0x12345678, size, i;
	size = sizeof(data);
	unsigned char *p = (unsigned char*) &data;
	printf("Given data is big ending\n");
	for(i = size-1; i >= 0; i--){
		printf("MSB %d : 0x%x\n", i, p[i]);
	}printf("Given data is littel ending\n");
	for(i = 0; i < size; i++){
		printf("MSB %d : 0x%x\n", i, p[i]);
	}printf("system automatically store in littel ending\n");
	return 0;
}
