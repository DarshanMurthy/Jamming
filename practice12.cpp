#include<iostream>
#include<vector>



using namespace std;


void vectertest(& vt){
	
}

int main(){
	pair<int, int> tem;
	vector< int>  vt(100);
	vt[0]=100;


	vectertest(&vt);




	int sum =0;
	for(int i=0;i<10;i++){
		sum+=i;
	}
	cout<< sum ;


	return 0;
}