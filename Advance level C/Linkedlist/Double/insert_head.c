#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
int main(){
	int data, value, i;
	struct node *new_node, *ptr, *pre_node, *head = NULL;
	printf("Enter a number of node's : ");
	scanf("%d", &value);
	for(i = 0; i < value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));
		printf("Enter a data of node %d : ", i+1);
		scanf("%d", &data);
		new_node -> prev = NULL;
		new_node -> data  = data;
		new_node -> next  = NULL;
		if(head == NULL){
			head = new_node;
			pre_node = new_node;
		}else{
			pre_node -> next = new_node;	//storeing current node address in before node pointr next.
			new_node -> prev = pre_node;	//storeing before node address in current node pointer prev.
			pre_node = new_node;		//updating with current node address in pre_node
		}
	}

	ptr = head;
	printf("Printing data before inserting\n");
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
	
	printf("Enter a data to inseret node at head : ");
	scanf("%d", &data);

	new_node = (struct node*) malloc(sizeof(struct node));

	new_node -> prev = NULL;
	new_node -> next = head;
	head -> prev = new_node;
	new_node -> data = data;
	head = new_node;
		
	ptr = head;
	printf("Printing data after inserting\n");
	printf("HEAD -> ");
	while(ptr -> next != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");

	printf("Printing data frome null to head\n");
	printf("NULL -> ");
	ptr = ptr -> prev;
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> prev;
	}printf("HEAD\n");
	return 0;
}
