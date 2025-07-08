#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *reverese(struct node *curr_ptr){
	if(curr_ptr == NULL || curr_ptr -> next == NULL){
		return curr_ptr;
	}
	struct node *new_head = reverese(curr_ptr -> next);
	curr_ptr -> next -> next = curr_ptr;
	curr_ptr -> next = NULL;

	return new_head;
}int main(){
	int data, value, i;
	struct node *new_node, *ptr, *head = NULL;
	printf("Enter a number of node's : ");
	scanf("%d",&value);
	for(i = 0 ; i < value; i++){
		printf("Enter a data in node %d : ",i+1);
		scanf("%d",&data);
		new_node = (struct node*) malloc(sizeof(struct node));

		new_node -> data = data;
		new_node -> next = head;
		head = new_node;
	}
	printf("HEAD -> ");
	ptr = head;
	while(ptr != NULL){
		printf("%d -> ",ptr->data);
		ptr = ptr -> next;
	}printf("NULL");
	printf("\n");

	head = reverese(head);

	printf("HEAD -> ");
	ptr = head;
	while(ptr != NULL){
		printf("%d -> ",ptr->data);
		ptr = ptr -> next;
	}printf("NULL");
	printf("\n");
	return 0;
}
