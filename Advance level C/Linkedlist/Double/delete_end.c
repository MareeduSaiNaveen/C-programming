#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};void printnode(struct node *ptr){
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}int main(){
	int data, i, size;
	struct node *new_node, *ptr, *head = NULL, *pre_node, *delete_node;
	printf("Enter a number nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node %d : ", i);
		scanf("%d", &data);
		new_node = (struct node*) malloc(sizeof(struct node));
		new_node -> data = data;
		new_node -> next = NULL;
		new_node -> prev = NULL;

		if(head == NULL){
			head = new_node;
			pre_node = new_node;
		}else{
			new_node -> prev = pre_node;
			pre_node -> next = new_node;
			pre_node = new_node;
		}
	}printf("Before delete node at end\n");
	printnode(head);

	ptr = head;
	while(ptr -> next -> next != NULL){
		ptr = ptr -> next;
	}delete_node = ptr -> next;
	ptr -> next = NULL;
	free(delete_node);

	printnode(head);
	return 0;
}
