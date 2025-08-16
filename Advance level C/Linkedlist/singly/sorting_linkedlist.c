#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printnode(struct node *temp){
	printf("HEAD -> ");
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}printf("NULL\n");
}struct node *sortedInsert(struct node *head, struct node *newNode) {
    if (head == NULL || newNode->data <= head->data) {
        newNode->next = head;
        return newNode;
    }
    struct node *current = head;
    while (current->next != NULL && current->next->data < newNode->data) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}void insertionSort(struct node **headRef) {
    struct node *sorted = NULL;
    struct node *current = *headRef;

    while (current != NULL) {
        struct node *next = current->next;
        sorted = sortedInsert(sorted, current);
        current = next;
    }

    *headRef = sorted;
}int main(){
	int data, i, size;
	struct node *new_node, *temp, *head = NULL;
	printf("Enter a size of node's : ");
	scanf("%d", &size);
	for(i = 1; i <= size; i++){
		printf("Enter a data of node %d  : ", i);
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
	}printnode(head);
	insertionSort(&head);
	printnode(head);
	return 0;
}
