#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
int print_node(struct node *head){
	struct node *temp = head;
	printf("HEAD -> ");
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
	return 0;
}struct node *check(struct node *head){
	int kth, i;
	struct node *prev = NULL, *curr = head, *next, *bef;
	printf("Enter a kth postion : ");
	scanf("%d", &kth);
	if(kth == 1){
		bef = curr;
		curr = curr -> next;
	}else{
		for(i = 0; i < kth-1; i++){
			prev = curr;
			curr = curr -> next;
		}bef = prev;
		prev = NULL;
	}while(curr != NULL){
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}bef -> next = prev;
	return head;
}int main(){
	int i, size, loop, data;
	struct node *new_node, *temp, *head = NULL, *rev;
	printf("Enter number of nodes : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data : ");
		scanf("%d", &data);

		struct node *new_node = (struct node*) malloc(sizeof(struct node));

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
	}print_node(head);
	head = check(head);
	print_node(head);
	return 0;
}
