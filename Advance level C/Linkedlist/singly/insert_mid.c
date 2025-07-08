#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insertmid(int size){
	struct node *ptr, *temp, *before;
	int i, mid, data;
	printf("Enter a data to insert at mid : ");
	scanf("%d", &data);
	ptr = (struct node*) malloc(sizeof(struct node));
	ptr -> data = data;
	ptr -> next = NULL;

	temp = head;
	mid = size/2;
	for(i = 0; i < mid; i++){
		temp = temp -> next;
	}before = temp -> next;
	temp -> next = ptr;
	ptr -> next = before;
}void printnode(){
	printf("HEAD -> ");
	struct node *temp = head;
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
}int main(){
	struct node *new_node, *temp;
	int data, i, size;
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
	}insertmid(size);
	printnode();
	return 0;
}
