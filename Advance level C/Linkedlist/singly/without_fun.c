#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int i, value, data;
	struct node *head = NULL, *temp = NULL, new_node;
	printf("Enter a number of nodes : ");
	scanf("%d", &value);
	for(i = 0; i < value; i++){
		printf("Enter  a data : ");
		scanf("%d", &data);

		struct node *new_node = (struct node*) malloc(sizeof(struct node));

		new_node -> data = data;
		new_node -> next = head;
		head = new_node;
	}temp = head;
	printf("Head -> ");
	while(temp != NULL){
		printf(" %d -> ", temp -> data);
			temp = temp -> next;
	}printf(" Null\n");
	return 0;
}
