#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
int main(){
	int data, value, i;
	struct node *new_node, *ptr, *pre_node, *head = NULL;
	printf("Enter a number of nodes : ");
	scanf("%d", &value);
	for(i = 0; i < value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));
		printf("Enter a data in node %d : ", i+1);
		scanf("%d", &data);
		new_node -> prev = NULL;
		new_node -> data = data;
		new_node -> next = NULL;
		if(head == NULL){
			head = new_node;
			pre_node = new_node;
		}else{
			pre_node -> next = new_node;
			new_node -> prev = pre_node;
			pre_node = new_node;
		}
	}printf("Printing node from head to end\n");
	printf("HEAD -> ");
	ptr = head;
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("END\n");
	ptr = pre_node;
	printf("printing node from end to head\n");
	printf("END -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> prev;
	}printf("HEAD\n");
	return 0;
}

