#include<iostream>
#include<vector>
using namespace std;

struct Node{
	int data;
	Node * llink;
	Node * rlink;

};

struct NodeTest{
	int data;
	NodeTest * node;
	NodeTest * node_test;

};




int main(){
	vector<int> vtr(100);
	vector<int> vtr1(10);
	pair<int,int> ints(10,10);

	NodeTest * test;
	test = (NodeTest * ) malloc(sizeof(NodeTest));
	cout<< test->data;
	// test->data=100;
	// cout<< test->data;


	// for(int i=0;i<10 ;i++ ){
	// 	vtr[i] = i*i;
	// 	cout<< vtr[i];
	// }

	// for(int j=0;j<10;j++){
	// 	//vtr1[j] = j*j;
	// 	//vtr1.push_back(i);
	// 	//vtr1.push_back[i];
	// }







	return 0;
	


}
