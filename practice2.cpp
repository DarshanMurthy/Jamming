#include<iostream>
#include<vector>

using namespace std;

class Queue{
	int data;
public:
	Queue(int data){
		this->data = data;
	}
	void createArray(int arr[]){
		for(int i=0;i<3 ;i++){

			cout<< arr[i] <<endl ;
		}
	}
	void pointer(char * name){

	}



	void display(){
		cout << this -> data;
	}
};
struct node{
	int name;
	struct node * llink;
	struct node * rlink;

};

typedef struct node Node;

int main(){
	Node test;
	vector<int> vtr(100);
	int arr[] = {12,23,23};
	Queue que(100);
	que.createArray(arr);
	for(int i=0;i<10;i++){

		vtr[i] = i * i;

	}

	test.name = 1;
	cout<< test.name <<endl;

	return 0;
}