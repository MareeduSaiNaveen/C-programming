#include<stdio.h>
int x = 10;
//void fun(int *pp){
void fun(int **pp){
	*pp = &x;
	//p = &x;
}
int main(){
	int arr[] = {10, 20, 30};
	int *p = NULL;
	//fun(p);
	fun(&p);
	if(p==NULL){
		printf("Not change\n");
	}else{
		printf("%d\n",*p);
	}
	return 0;
}
