#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> vtr[10];
	vector<int> vtr1(10);
	

	int size =  vtr1.size();
	for(int i =0; i<size;i++){
		vtr1.push_back(i);
	}
	for(int j=0;j<size;j++){
		vtr1[j]=j;	
	}

	for(int z=0;z<size;z++){
		cout<< vtr1[z];
	}

	






}