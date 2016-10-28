#include<iostream>
#include<vector>
#define _CRT_SECURE_NO_DEPRECATE

/*struct node{

	int data;
	struct node * llink;
	struct node * rlink;

};*/

using namespace std ;

class Node{
	int data;
	int value;
public: 
Node(int data, int value){
		this->data = data ;
		this->value = value;

	}
void display(){
	cout << data <<endl ;

	cout << value <<endl;
}


};



struct Vector{
	int ele;
	int * ptr ;

};

/*void init_vector(Vector& vtr, int ele){
	vtr.ptr = new Vector[10];

}*/


int main(){

	Node * node = new Node(10,12);
	node->display();




	//Node node = new Node(10,12);




	//Vector vtr;
	//init_vector(vtr,10);



	



	return 0;

}