#include<iostream>
#include<vector>


using namespace std;


struct node{
	int data;
	struct node * Link;
};


struct temp{
	int data;
	struct temp * Link;

};

int main(){
	vector <int> vtr (10);
	cout<< vtr.size();
	cout<< " Hello " <<endl;

	




	for(int i=0;i<10;i++){
		vtr[i] = i * i;
	}



}