#include<iostream>
#include<vector>


using namespace std;


int main(){


	vector <int> vtr(10);


	for(int i=0;i<10;i++){
		//vtr(i) += 9;
		vtr[i]= i*i;
	}


	cout << vtr.size()<<endl;


	return 0;
}