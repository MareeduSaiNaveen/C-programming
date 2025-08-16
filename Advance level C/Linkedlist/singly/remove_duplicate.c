#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int data, size, i, k;
	struct node *head = NULL, *temp, *new_node, *rev, *next_ptr, *prev_ptr = NULL, *curr_ptr;
	printf("Enter a size of arrayy :");
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
	}printf("Enter a kth postion to revrese : ");
	scanf("%d", &k);
	temp = head;
	for(i = 1; i < k; i++){
		temp = temp -> next;
	}curr_ptr = temp -> next;
	while(curr_ptr != NULL){
		next_ptr = curr_ptr -> next;
		curr_ptr ->  next = prev_ptr;
		prev_ptr = curr_ptr;
		curr_ptr = next_ptr;
	}temp -> next = prev_ptr;
	temp = head;
	printf("HEAD -> ");
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
	return 0;
}
