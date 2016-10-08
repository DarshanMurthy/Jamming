#include<iostream>

using namespace std;

struct node{

	int data;
	char * name;

};

class Student{
	int number_of_student,data;
public:
	Student(int data){
		this->number_of_student = data;
	}

	void test(){
		cout<< number_of_student <<endl;
	}

};


int main(){

	Student(100).test();
	node Node;

	int value;
	char * name;
	cout<< sizeof(name);

	cout<< sizeof(Node) ;
	









	return 0;
}