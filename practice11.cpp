#include<iostream>
#include<stdlib.h>
#include<vector>
struct Node{
	int data;
	struct Node * next;

};




Node * creator(){
	Node * node = (Node *)malloc(sizeof(Node));
	return node;
}
void insert(Node * head, int data){
	Node * head = creator();
	head->data= data;
	Node * cur = head;
	while(cur->next==null){
		cur = cur->next;
	}
	cur->data= data;
}

void sum(int value){
  cout<< value;
}


int main(){
  sum(10);
	Node * head;
	insert(head,10);

	return 0;
}
