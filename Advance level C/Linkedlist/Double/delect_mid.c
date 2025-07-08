#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};void printnode(struct node *ptr){
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}int main(){
	int data, size, i, mid;
	struct node *new_node, *ptr, *head = NULL, *pre_node, *delect_node;
	printf("Enter a size of node : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node %d : ", i);
		scanf("%d", &data);

		new_node = (struct node*) malloc(sizeof(struct node));
		new_node -> data = data;
		new_node -> next = NULL;
		new_node -> prev = NULL;

		if(head == NULL){
			head = new_node;
			pre_node = new_node;
		}else{
			pre_node -> next = new_node;
			new_node -> prev = pre_node;
			pre_node = new_node;
		}
	}
	printf("Before deldect node at mid\n");
	printnode(head);

	ptr = head;
	mid = size/2;
	for(i = 0; i < mid-1; i++){
		ptr = ptr -> next;
	}delect_node = ptr -> next;
	ptr -> next = ptr -> next -> next;
	delect_node -> next -> prev = ptr;
	free(delect_node);

	printf("After delecte node ar mid\n");
	printnode(head);

	ptr = pre_node;
	printf("NULL -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> prev;
	}printf("HEAD\n");
	return 0;
}
