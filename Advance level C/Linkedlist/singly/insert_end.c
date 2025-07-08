#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insert(int data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	if(new_node == NULL){
		printf("Memory alloction is failed\n");
	}
	new_node -> data= data;
	new_node -> next = head;
	head = new_node;
}
void adding_end(int new_data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node -> data = new_data;
	new_node -> next = NULL;

	struct node *ptr = head;
	while(ptr -> next != NULL){
		ptr = ptr -> next;
	}ptr -> next = new_node;
}void printlist(){
	struct node *ptr = head;
	printf("Head -> ");
	while(ptr != NULL){
		printf(" %d -> ",ptr->data);
		ptr = ptr -> next;
	}printf(" NULL\n");
}int main(){
	int i, new_data;
	for(i = 1; i < 6; i++){
		insert(i);
	}printf("Enter a data to add at end : ");
	scanf("%d",&new_data);
	printf("Before adding node at end\n");
	printlist();

	adding_end(new_data);

	printf("After adding node at end\n");
	printlist();

	return 0;
}
