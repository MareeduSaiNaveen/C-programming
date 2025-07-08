#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int data, i, value;
	struct node *new_node, *head = NULL, *ptr, *ptr_next;
	printf("Enter a number of nodes : ");
	scanf("%d",&value);
	for(i = 1; i <= value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));
		printf("Enter a data to place at node %d : ", i);
		scanf("%d", &data);

		new_node -> data = data;
		new_node -> next = head;
		head = new_node;
	}
	printf("Enter a data to inseret : ");
	scanf("%d", &data);

	struct node *add_on = (struct node*) malloc(sizeof(struct node));
	add_on -> data = data;
	add_on -> next = NULL;

	ptr = head;
	ptr_next = head -> next;

	while(ptr != NULL){
		if(data > ptr -> data){
			add_on -> next = ptr;
			head = add_on;
			break;
		}else if((ptr -> data > data) && (ptr_next -> data < data)){
			add_on -> next = ptr -> next;
			ptr -> next = add_on;
			break;
		}if((ptr_next -> next == NULL) && (ptr_next -> data > data)){//ptr_next shoud not be NULL becasue comaplier will be error segmentation fault.
			ptr_next -> next = add_on;
			break;
		}ptr = ptr -> next;
		ptr_next = ptr_next -> next;
	}ptr = head;
	printf("HEAD ");
	while(ptr != NULL){
		printf("%d -> ",ptr->data);
		ptr = ptr -> next;
	}printf("NULL\n");
	return 0;
}
