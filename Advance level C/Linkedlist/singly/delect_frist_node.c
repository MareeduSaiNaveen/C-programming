#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printlist(struct node *head){
	struct node *ptr = head;
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr-> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}int main(){
	int i, data, value;
	struct node *new_node, *ptr, *head = NULL, *delect;
	
	printf("Enter a number of node's : ");
	scanf("%d", &value);
	for(i = 0; i < value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));

		printf("Enter a data to node %d : ",i+1);
		scanf("%d", &data);

		new_node -> data = data;
		new_node -> next = head;
		head = new_node;
	}
	printlist(head);

	delect = head;
	head = head -> next;
	free(delect);
	
	printlist(head);

	return 0;
}
