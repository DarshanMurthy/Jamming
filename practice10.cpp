#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node * llink;
	struct Node * rrink;
};


int test(struct Node * node){
	node->data =100;
	return node->data;

}

int main(){

	Node * node;
	node->data =100;

	cout<< node->data ;
	int data = test(node);

	cout<< data;





	return 0;
}