#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insert(int data){
	struct node *ptr = (struct node*) malloc(sizeof(struct node));
	ptr -> data = data;
	ptr -> next = head;
	head = ptr;
}void printnodes(){
	struct node *ptr = head;
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}int main(){
	struct node *new_node, *temp, *ptr;
	int data, size, i;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node at %d : ", i);
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
	}printf("Enter a data to insert at head : ");
	scanf("%d", &data);

	insert(data);

	printnodes();

	return 0;
}
