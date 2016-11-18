#include<iostream>
#include<vector>
#include<stdlib.h>



using namespace std;
struct Node{
	int data;
	struct Node * llink;
	struct Node * rrlink;

};

struct NodeTest{
	int data;

};





int main(){

	vector<int> vtr(100);
	int  add[] ={1,2,3,4};
	int matrix[][3]= {{1,29,12},{1,9,2}};
	int sum =0;

	NodeTest * node = (NodeTest *) malloc(sizeof(NodeTest));
	Node * left = (Node *) malloc(sizeof(Node));
	node->data=100;
	left->data=100;

	cout << node->data + left->data;
	









	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){

			sum = add[i]+add[j];
			cout<< sum <<endl;
			
		}
	}

	cout<< sizeof(add);








	return 0;
}