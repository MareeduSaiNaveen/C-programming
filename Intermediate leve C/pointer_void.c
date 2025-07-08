#include<stdio.h>
int main(){
	int val = 1;	//int data type val assing 1
	void *p1 = &val;//assing val address to void pointer
	
	//printf("%d\n",*p1); // this statement cant complile, it cant perfomcse dereferece
	printf("Type casting to int : %d\n",*(int *)p1);//using type casting to print void pointer
	
	int *p2 = p1;	//assing void poniter to  int pointer
	printf("Converting to int pointer : %d\n",*p2);

	char val2  = 'c';//char data type cal2 assing c
	void *p3 = &val2;//assing val2 address to void pointer
	
	//printf("%c\n",*p3); // this statement cant complile, it cant perfomcse dereferece
	printf("Type casting to char : %c\n",*(char *)p3);//using type casting to print void pointer
	
	char *p4 = p3;//assing void pointer to char pointer
	printf("Converting to char pointer : %c\n",*p4);
	
	return 0;
}
