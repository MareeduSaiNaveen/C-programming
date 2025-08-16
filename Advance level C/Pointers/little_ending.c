#include<stdio.h>
int main(){
	int i, data = 0x12345678;
	unsigned char *point = (unsigned char*)&data;
	for(i = 0; i < sizeof(int); i++){
		printf("Byte %d : 0x%x\n", i, point[i]);
	}return 0;
}
