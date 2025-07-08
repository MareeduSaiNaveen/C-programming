#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void postionDelete(){
	int postion, i;
	struct node *ptr = head, *after, *delete_node;
	printf("Enter a postion of node : ");
	scanf("%d", &postion);
	if(0 == postion-1){
		after = head -> next;
		free(head);
		head = after;
	}else{
		for(i = 1; i < postion-1; i++){
			if(ptr == NULL){
				printf("given node number is outof range");
				return;
			}ptr = ptr -> next;
		}after = ptr -> next -> next;
		delete_node = ptr -> next;
		ptr -> next = after;
		free(delete_node);
	}
}
void printnode(){
	printf("HEAD -> ");
	struct node *temp = head;
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
}void main(){
	int data, i, size;
	struct node *new_node, *ptr, *temp;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node %d : ", i);
		scanf("%d", &data);
		new_node = (struct node*) malloc(sizeof(struct node));
		new_node -> data = data;
		new_node -> next = NULL;

		if(head == NULL){
			head = new_node;
		}else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;
		}
	}printf("Before inserting node\n");
	printnode();
	postionDelete();
	printf("After inserting node\n");
	printnode();
}
