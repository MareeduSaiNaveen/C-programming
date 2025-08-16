#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *new_node;
	int size = (char*)(new_node+1) - (char*)(new_node);
	printf("size : %d\n", size);
	return 0;
}
