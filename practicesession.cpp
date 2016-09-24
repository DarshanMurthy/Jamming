#include<iostream>
#include<vector>

struct node{

	int add;

};

class Node{
	int value;
	Node(int nvalue){

		value = nvalue;

	}

};

using namespace std;

int main(){

	Node node(10);



	vector<int> vtr(10);
	for(int i=0;i <3 ;i++){
		vtr[i] = i+1;

	}

	for(int j=0;j<3;j++){
		cout <<vtr[j] <<endl;
	}
	



}