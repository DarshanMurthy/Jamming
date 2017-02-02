#include<iostream>
using namespace std;

struct Node{
	int add;
};

int main(){
	int array[10][10]={{10,24,12},{10,29,34}};
	cout<< sizeof(array[0]);

	cout<< sizeof(array)<<endl;

	int len;
	len = sizeof(array)/sizeof(array[0]);
	cout<<len;

	struct Node * llink;
	stuct Node * rrlink;










	return 0;
}