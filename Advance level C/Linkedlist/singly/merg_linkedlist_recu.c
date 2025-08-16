#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *insert(struct node *head){
	int data, size, i;
	struct node *new_node, *temp;
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
	}return head;
}void printnode(struct node *head){
	printf("HEAD -> ");
	while(head != NULL){
		printf("%d -> ", head -> data);
		head = head -> next;
	}printf("NULL\n");
}struct node *merge_sorting(struct node *head1, struct node *head2){
	struct node *head;
	if(head1 == NULL){
		return head2;
	}if(head2 == NULL){
		return head1;
	}
	if(head1 -> data <= head2 -> data){
		head = head1;
		head -> next = merge_sorting(head1 -> next, head2);
	}else{
		head = head2;
		head -> next = merge_sorting(head1, head2 -> next);
	}return head;
}int main(){
	struct node *head1 = NULL, *head2 = NULL, *head = NULL;
	printf("Enter a deitals of linked list 1\n");
	head1 = insert(head1);
	printf("Enter a deitals of linked list 2\n");
	head2  = insert(head2);
	printf("first linkedlist\n");
	printnode(head1);
	printf("seconed linkedlist\n");
	printnode(head2);
	head = merge_sorting(head1, head2);
	printf("Printing linkedlist after merging and sorrting\n");
	printnode(head);
	return 0;
}
