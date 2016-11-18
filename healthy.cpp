#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;
struct Node{
	int data;
	struct Node * llink ;
	struct Node * rlink;
};


int main(){
	double value=10;

	cout<< sizeof(Node)<<endl;



	struct Node * ptr;
	ptr = (Node *) malloc(sizeof(Node));
	ptr-> data=100;
	cout<< ptr->data;

	vector<int> vtr(100);
	cout<< vtr.size();
	for(int i=0;i<100;i++){
		vtr.push_back(i);
		}


	for(char i='a';i<'z';i++){
		cout<< i <<endl;
	}



	

}