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
	}while(temp != NULL){
		next_node = temp -> next;
		prev_node = temp;
		while(next_node != NULL){
			if(next_node -> data == temp -> data){
				prev_node -> next = next_node -> next;
			}prev_node = prev_node -> next;
			next_node = next_node -> next;
		}temp = temp -> next;
	}printf("HEAD -> ");
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
	return 0;
}
