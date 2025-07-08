#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};int main(){
	int data, i, size;
	struct node *new_node, *head = NULL, *pre_node = NULL, *ptr;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data to inseret in node %d : ", i);
		scanf("%d", &data);
		new_node = (struct node*) malloc(sizeof(struct node));
		
		new_node -> next = NULL;
		new_node -> prev = NULL;
		new_node -> data = data;

		if(head == NULL){
			head = new_node;
			pre_node = new_node;
		}else{
			pre_node -> next = new_node;
			new_node -> prev = pre_node;
			pre_node = new_node;
		}
	}
	ptr = head;
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");

	ptr = head;
	while(ptr -> next != NULL){
		ptr = ptr -> next;
	}
	printf("Enter a data to insret at end : ");
	scanf("%d", &data);
	
	new_node = (struct node*) malloc(sizeof(struct node));
	new_node -> data = data;
	ptr -> next = new_node;
	new_node -> prev = ptr;
	new_node -> next = NULL;
	pre_node = new_node;
	
	ptr = head;
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
	
	ptr = pre_node;
	printf("NULL -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> prev;
	}printf("HEAD\n");
	
	return 0;
}
			
