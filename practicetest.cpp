#include<iostream>
#include<vector>


using namespace std;
double get(const vector<double>& vec, int index){
	cout<< vec.size();
}

void get_vector(vector<int>& vec){
	int size = vec.size();
	for(int i =0;i< size;i++){
		cout<< vec[i];
	}

}



int main(){

	vector<int> vtr(10);
	vector<double> vtr1(10);
	get(vtr1,10);

	for(int i=0;i<10;i++){
		vtr.push_back(i);
	}

	get_vector(vtr);











	return 0;
 }