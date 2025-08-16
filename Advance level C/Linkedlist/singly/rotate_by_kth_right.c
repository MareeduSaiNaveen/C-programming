#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *rotate(struct node *head, int size){
	struct node *left, *prev, *right = head;
	int kth, i;
	printf("Enter kth element : ");
	scanf("%d", &kth);
	if(kth == 0){
		return head;
	}for(i = 1; i <=size - kth; i++){
		prev = right;
		right = right -> next;
	}prev -> next = NULL;
	left = right;
	while(left -> next!= NULL){
		left = left -> next;
	}left -> next = head;
	return right;
}void print_node(struct node *head){
	printf("HEAD -> ");
	while(head != NULL){
		printf("%d -> ", head -> data);
		head = head -> next;
	}printf("NULL\n");
}struct node *insert(struct node *head, int *size){
	struct node *new_node, *temp;
	int i, data;
	printf("Enter a number of node : ");
	scanf("%d", size);
	for(i = 1; i <= *size; i++){
		printf("Enter a data : ");
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
}int main(){
	int size;
	struct node *head = NULL;
	head = insert(head, &size);
	print_node(head);
	head = rotate(head, size);
	print_node(head);
	return  0;
}
