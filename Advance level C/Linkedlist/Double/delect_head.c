#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};int main(){
	int data, i, size;
	struct node *new_node, *ptr, *head = NULL, *delect_node, *pre_node;
	printf("Enter a number of node's : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data nude %d : ", i);
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
	printf("Before delecting head node\nHEAD -> ");
	ptr = head;
	while(ptr -> next != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
	
	delect_node = head;
	head = head -> next;
	head -> prev = NULL;
	free(delect_node);
	
	printf("After delecting head node\nHEAD -> ");
	ptr = head;
	while(ptr -> next != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");

	printf("After delecting head node printing frome null to head\nHEAD -> ");
	ptr = pre_node;
	while(ptr -> prev != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> prev;
	}printf("NULL\n");
	return 0;
}
