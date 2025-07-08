#include<stdio.h>
#include<string.h>
int main(){
	int val, num;
	int* ptr;
	
	printf("Enter number : ");
	scanf("%d",&val);

	ptr = &val;

	printf("printing by using val : \t%d\n", val);
	printf("printing by using *ptr : \t%d\n", *ptr);
	printf("address by using ptr : \t\t%p\n", ptr);
	printf("address by using &val : \t%p\n", &val);
	printf("address of ptr : \t\t%p\n", &ptr);
	printf("size of the *ptr :\t\t%lu\n", sizeof(*ptr)); 
	printf("size of the ptr :\t\t%lu\n", sizeof(ptr)); 
	
	printf("\nOperations using pointers\n");
	
	printf("Enter a numbear to add : ");
	scanf("%d",&num);

	val += num;
	printf("\nOperation val += num values are below\n\n");
	printf("printing by using val : \t%d\n", val);
	printf("printing by using *ptr : \t%d\n", *ptr);
	printf("address by using ptr : \t\t%p\n", ptr);
	printf("address by using &val : \t%p\n", &val);
	printf("address of ptr : \t\t%p\n", &ptr);
	printf("size of the *ptr :\t\t%lu\n", sizeof(*ptr)); 
	printf("size of the ptr :\t\t%lu\n", sizeof(ptr)); 

	*ptr -= num;
	printf("\nOperation *ptr -= num values are below\n\n");
	printf("printing by using val : \t%d\n", val);
	printf("printing by using *ptr : \t%d\n", *ptr);
	printf("address by using ptr : \t\t%p\n", ptr);
	printf("address by using &val : \t%p\n", &val);
	printf("address of ptr : \t\t%p\n", &ptr);
	printf("size of the *ptr :\t\t%lu\n", sizeof(*ptr)); 
	printf("size of the ptr :\t\t%lu\n", sizeof(ptr)); 
	return 0;
}
