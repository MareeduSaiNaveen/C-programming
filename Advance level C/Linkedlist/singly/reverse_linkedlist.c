#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int data, value, i;
	struct node *ptr, *temp, *new_node, *head = NULL, *prev_ptr, *curr_ptr, *next_ptr;
	printf("Enter a number of nodes's : ");
	scanf("%d",&value);
	for(i = 0; i < value; i++){
		new_node = (struct node*) malloc(sizeof(struct node));
		
		printf("Enter a data of node %d : ", i+1);
		scanf("%d", &data);

		new_node -> data = data;
		new_node -> next = NULL;
		if(head == NULL){
			head = new_node;
			temp = new_node;
		}else{
			while(temp -> next != NULL){
				temp = temp -> next;
			}temp -> next = new_node;
		}
	}prev_ptr = NULL;
	curr_ptr = head;
	while(curr_ptr  != NULL){
		next_ptr = curr_ptr -> next;
		curr_ptr -> next = prev_ptr;
		prev_ptr = curr_ptr;
		curr_ptr = next_ptr;
	}head = prev_ptr;
	printf("HEAD -> "); 
	ptr = head;
	while(ptr != NULL){
		printf("%d -> ",ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
	return 0;
}
