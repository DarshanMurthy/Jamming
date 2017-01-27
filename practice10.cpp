#include<iostream>


using namespace std;
struct Node{
	int data;
	struct Node * llink;
	struct Node * rrlink;

};

int main(){
	Node * first= (Node *)malloc(sizeof(Node));
	first->data=100;
	cout<< first->data;
	Node * cur = (Node *) malloc(sizeof(Node));

	int arrayInput[] = {1,2,3};



	




	return 0;
}