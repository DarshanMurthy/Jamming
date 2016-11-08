#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;
struct Node{
    double value;	
	struct Node * llink;
	struct Node * rlink;
	struct Node * mlink;

	
};

Node * creator(){
	Node * ptr= (Node *)malloc(sizeof(Node));
	return ptr;

}

double get(vector<double>& vec){
	

}

int main(){
	cout<< sizeof(Node);
	vector<int> vtr(10);
	double val = get(vtr);


	// Node * next;
	// next-> data=100;
	// cout<< next->data;

	// Node * ptr = creator();
	// ptr->data=100;
	// cout<< ptr->data;



	return 0;
}