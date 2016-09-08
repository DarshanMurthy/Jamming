#include<iostream>

struct node{
	int name;
	char natrur[2] ={'T','F'};
};


int main(){

	node Node;
	cout<<Node.natrur[1]<<endl;


	int value[12][12];

	for(int i=0 ;i<12;i++){
		for(int j=0;j<12;j++){
			value[i][j] =i*j;
		}
	}

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cout<< value[i][j]<<endl;
		}
	}



	return 0;
}