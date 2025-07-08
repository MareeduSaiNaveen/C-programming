#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *new_node, *ptr, *head = NULL, *next, *pre, *delect_node;
	int NoOfNodes, data, mid, i;
	printf("Enter a number of node's : ");
	scanf("%d", &NoOfNodes);
	for(i = 0; i < NoOfNodes; i++){
		new_node = (struct node*) malloc(sizeof(struct node));
		printf("Enter a data of node %d : ", i);
		scanf("%d", &data);
		 new_node -> data = data;
		 new_node -> next = head;
		 head = new_node;
	}
	mid = NoOfNodes / 2;
	ptr = head;
	for(i = 0; i < mid-1; i++){
		ptr = ptr -> next;
	}delect_node = ptr -> next;
	ptr -> next = ptr -> next -> next;
	free(delect_node);
	ptr = head;
	printf("HEAD -> ");
	while(ptr != 0){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}
