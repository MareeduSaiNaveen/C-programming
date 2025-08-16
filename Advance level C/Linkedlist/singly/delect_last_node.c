#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int i, value, data;
	struct node *new_node, *head = NULL, *ptr, *delect, *temp;

	printf("Enter a number of node : ");
	scanf("%d",&value);

	for(i = 0; i < value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));

		printf("Enter a data of %d node : ",i+1);
		scanf("%d", &data);
		
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
	}
	ptr = head;
	while(ptr -> next -> next != NULL){
		ptr = ptr -> next;
	}
	delect = ptr -> next;
	free(delect);
	ptr -> next = NULL;

	ptr = head;
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf(" NULL\n");
	return 0;
}
