#include<iostream>
using namespace std;

struct node{
	int data;
	struct node * llink;
	struct node * rrlink;

};

struct Vector{
	int ele;
	


};

void test(char * name){

	for(int i=0;i< sizeof(name);i++){
		cout<<name[i] <<endl;
	}


}


int main(){

	char * name = "Darshan";
	string test[] ={"test"};

	test(name);


	FILE * fin=fopen("input.txt","r");
	if(fin){
		
	}
	/*while(fin!= eol){
		cout<< fin.readline();
	}*/

	return 0;
}