#include<iostream>
#include<vector>

using namespace std;

struct Node{
	int data;
	struct Node * llink;
	struct Node * rlink;

};

class Queue{
	int value;

public:
	Queue(int i){
		value=i;
	}
	void test(){
		cout<< "Hello" <<endl;
	}


	void namesake(char * name){

	}

};


int main(){


	char * name= "Darshan";
	
	Queue que(10);
	que.test();

	vector<char> vtr(100);

	vtr[0] ='a';
	cout<<vtr[0] <<endl;


	for(char i='a';i<'z';i++){
		cout<< i <<endl;
		vtr[i] = i;
	}

	

	return 0;
}