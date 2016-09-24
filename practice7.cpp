#include<iostream>

using namespace std;
struct node{
	int name[10];
	struct node * llink;
	struct node * rlink;

};


int memoryallocation(char ** arr){
	cout<< arr[0]<<endl;

	cout<< sizeof(arr[0]) <<endl;
	


	return 0;
}


struct Node{
	int name;
	struct Node * llink;
	struct Node * rlink;

};



int main(){
	char * name= "darshan";
	memoryallocation(&name);
	int  number = 10;
	cout << number <<endl;
	int * len = & number;
	cout<<len <<endl;





}