#include<iostream>
#include<stdlib.h>
#include<vector>
struct Node{
	int add;
	struct Node * next;

};

Node * creator(){
	Node * node = (Node *)malloc(sizeof(Node));
	return node;
}


int main(){
	Node * ptr = creator();
	char * name = "Darshan Tumkur";

	vector<int> vtr(100);


	





	return 0;
}