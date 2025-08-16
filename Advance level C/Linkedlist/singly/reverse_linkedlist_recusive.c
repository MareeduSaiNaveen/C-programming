#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *reverese(struct node *curr_ptr, struct node *prev_ptr){
	if(curr_ptr == NULL){
		return prev_ptr;
	}struct node *head;
	head = curr_ptr -> next;
	curr_ptr -> next = prev_ptr;
	return reverese(head, curr_ptr);
}void printnode(struct node *head){
	printf("HEAD -> ");
	while(head != NULL){
		printf("%d -> ", head -> data);
		head = head -> next;
	}printf("NULL\n");
}int main(){
	int data, value, i;
	struct node *new_node, *ptr, *head = NULL, *revs_ptr = NULL, *temp = NULL;
	printf("Enter a number of node's : ");
	scanf("%d",&value);
	for(i = 0 ; i < value; i++){
		printf("Enter a data in node %d : ",i+1);
		scanf("%d",&data);
		new_node = (struct node*) malloc(sizeof(struct node));
		new_node -> data = data;
		new_node -> next = NULL;
		if(head == NULL){
			head = new_node;
			temp = new_node;
		}else{
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;
		}
	}printnode(head);
	revs_ptr = reverese(head, NULL);
	printnode(revs_ptr);
	return 0;
}
