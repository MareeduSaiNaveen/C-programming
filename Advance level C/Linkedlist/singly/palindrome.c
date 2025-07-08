#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printlist(struct node *ptr){
	printf("HEAD -> ");
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}printf("NULL\n");
}struct node *revs(struct node *curr_ptr){
	struct node *next_ptr, *prev_ptr = NULL;
	while(curr_ptr != NULL){
		next_ptr = curr_ptr -> next;
		curr_ptr -> next = prev_ptr;
		prev_ptr = curr_ptr;
		curr_ptr = next_ptr;
	}return prev_ptr;
}void check(struct node *head, struct node *rev){
	while(head != NULL && rev != NULL){
		if(head -> data != rev -> data){
			printf("\nGiven linkedlist is not palndoram\n");
			return;
		}head = head -> next;
		rev = rev -> next;
	}printf("\nLinkedlist is palandoram\n");
}int main(){
	int data, size, i;
	struct node *new_node, *ptr, *rev, *temp, *head = NULL;
	printf("Enter a number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data at node : ");
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
	}printf("\n\tOrginal linked list\n");
	printlist(head);
	rev = revs(head);
	printf("\n\tReversed linked list\n");
	printlist(rev);
	check(head, rev);
	return 0;
}
