#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *insert(struct node *head){
	int data, size, i;
	struct node *new_node, *temp;
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
	}return head;
}void printnode(struct node *head){
	printf("HEAD -> ");
	while(head != NULL){
		printf("%d -> ", head -> data);
		head = head -> next;
	}printf("NULL\n");
}struct node *revs(struct node *curr_ptr){
	struct node *new_node;
	if(curr_ptr == NULL || curr_ptr -> next == NULL){
		return curr_ptr;
	}else{
		new_node = revs(curr_ptr -> next);
		curr_ptr -> next -> next = curr_ptr;
		curr_ptr -> next = NULL;
		return new_node;
	}
}int kth_node(struct node *head, int node){
	int count = 1;
	while(head -> next != NULL){
		if(count == node){
			return head -> data;
		}head = head -> next;
		count++;
	}return 0;
}int main(){
	struct node *head = NULL, *rev = NULL;
	int kth_value = 0, data, node;
	head = insert(head);
	printf("Given linkedlist\n");
	printnode(head);
	printf("Enter a kth value : ");
	scanf("%d", &node);
	rev = revs(head);
	printf("Revresed linked list\n");
	printnode(rev);
	kth_value = kth_node(rev, node);
	if(kth_value){
		printf("Given node data is %d\n", kth_value);
	}else{
		printf("Given node is outof range\n");
	}return 0;
}
