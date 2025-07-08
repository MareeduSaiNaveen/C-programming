#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *heard = NULL;

void printlist(struct node *ptr){
	if(ptr !=  NULL){
		printf(" %d -> ", ptr -> data);
	}else{
		printf("Null\n");
		return;
	}
	printlist(ptr -> next);
}
int insert(int data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node -> data = data;
	new_node -> next = heard;
	heard = new_node;
}
int main(){
	int i, num;
	for(i = 1; i < 6; i++){
		num = insert(i);
	}printf("heard -> ");
	printlist(heard);
	return 0;
}
