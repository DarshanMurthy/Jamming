#include<iostream>

using namespace std;

struct Node{

	int * data;
	char * name;

};

int value(char * name){
	cout<< name;
	cout<<endl;




}


int main(){
	char * name = "Darshan";
	cout<< name <<endl;
	value(name);

	return 0;
}