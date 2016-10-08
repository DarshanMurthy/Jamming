#include<iostream>
#include<vector>


using namespace std;




int main(){
	




	vector<int> vtr(100);
	for(int i=0;i<10;i++){
		vtr[i] = (i+2)*(i+2);
	}


	cout<< vtr.empty() <<endl;
	if(vtr.empty()){
		cout << "in" <<endl;
	}
	cout << "out" <<endl;

	vector<string> vtrtest;
	



	return 0;
}