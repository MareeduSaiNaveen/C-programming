#include<stdio.h>
#include<stdlib.h>
int *get_array(int n){
	int i;
	int *ptr = malloc(sizeof(int)*n);//creating and asssing dynamically memory size with int(4)*n
	for(i = 0; i < n; i++){
		ptr[i] = i+1;
	}return ptr;
}int main(){
	int n, i;
	printf("Enter a size of array : ");
	scanf("%d",&n);
	int *ptr;//ponier name as ptr
	ptr = get_array(n);//assing a string number to ptr 
	for(i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}printf("\n");
	free(ptr);
	return 0;
}
