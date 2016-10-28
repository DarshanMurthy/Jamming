#include<iostream>
#include<vector>

using namespace std;

struct Node{
	int add;
	struct Node * llink;
	struct Node * rlink;

};

void test_env(struct Node * node){
	node->add=12;
	cout<< node->add;

}

void test_just(struct Node * node){

}

int main(){




	Node * node;
	node->add=10;
	cout<< node->add;
	test_env(node);

	vector<int> vtr(10);
	









	return 0;
}