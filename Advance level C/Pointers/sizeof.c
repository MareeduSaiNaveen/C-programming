#include<stdio.h>
struct data{
	char ch;
	int data;
	char ch1;
};
/*struct data{
	char ch;
	char ch1;
	int data;
};*/
int main(){
	int *val;
        int size;
	struct data *ptr;
	size = (char*)(ptr+1) - (char*)ptr;
	printf("struct node size : %d\n", size);
	
	size = (char*)(val+1) - (char*)val;
	printf("int size : %d\n", size);
	return 0;
}
