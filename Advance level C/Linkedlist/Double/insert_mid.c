#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
void printnode(struct node *ptr){
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}int main(){
	int data, i, size, mid;
	struct node *new_node, *ptr, *pre_node, *head = NULL, *old;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data to inserent in node %d : ", i);
		scanf("%d", &data);
		new_node = (struct node*) malloc(sizeof(struct node));
		new_node -> data = data;
		new_node -> next = NULL;
		new_node -> prev = NULL;
		if(head == NULL){
			head = new_node;
			pre_node = new_node;
		}else{
			new_node -> prev = pre_node;
			pre_node -> next = new_node;
			pre_node = new_node;
		}
	}
	printf("Before add node at mid\n");
	printnode(head);	
	ptr = head;
	mid = size/2;
	for(i = 0; i < mid; i++){
		ptr = ptr -> next;
	}
	printf("Enter a data to inseret at mid : ");
	scanf("%d", &data);
	new_node = (struct node*) malloc(sizeof(struct node));
	new_node -> data = data;
	new_node -> next = NULL;
	new_node -> prev = NULL;

	new_node -> next = ptr -> next;
	new_node -> prev = ptr;
	ptr -> next -> prev= new_node;
	ptr -> next = new_node;
	
	printf("After add node at mid\n");
	printnode(head);
	
	ptr = pre_node;
	printf("After add node at mid\nNULL -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> prev;
	}printf("HEAD\n");
	return 0;
}
