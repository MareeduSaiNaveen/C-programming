#include<stdio.h>
int main(){
	int i, data = 0x12345678;
	unsigned char *point = (unsigned char*)&data;
	for(i = sizeof(int)-1; i >= 0; i--){
		printf("Byte %d : 0x%x\n", i, point[i]);
	}return 0;
}
