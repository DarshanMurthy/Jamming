#include<iostream>
#include<vector>

using namespace std;

struct Node{
	int add;
	struct Node * llink;
	struct Node * rlink;

};

void test_env(struct Node * node){
	node->add=10;
	int sum =0;
	for(int i=0;i<node->add;i++){
		sum = sum + i;

	}
	cout<< sum<<endl ;
	cout<< node->add;

}

void source(int i){
	
}

int main(){




	Node * node;
	node->add=10;

	test_env(node);

	vector<int> vtr(10);

	for(int i=0;i<100;i++){
		source(i);
	}










	return 0;
}