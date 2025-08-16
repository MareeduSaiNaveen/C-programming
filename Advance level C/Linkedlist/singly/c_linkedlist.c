#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int size, i, data, count = 0, nodes;
	struct node *new_node, *head = NULL, *temp;
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
	}new_node -> next = head;
	printf("Enter a numner of node to print : ");
	scanf("%d", &nodes);
	printf("HEAD -> ");
	temp = head;
	while(count != nodes){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
		count++;
	}printf("NULL\n");
	return 0;
}
