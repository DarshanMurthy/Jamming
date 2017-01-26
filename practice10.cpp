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

	




	return 0;
}