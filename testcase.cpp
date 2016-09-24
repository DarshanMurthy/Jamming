#include<iostream>
#include<vector>

#define TEN 100


using namespace std;


struct node{
	int value;
	char idea[2] = {'a','b'};

};

void pt(char * value){
	cout<< value[0] << endl;


}



int main(){

	char * testA = "Darshan";
	
	char * testB = "Workharder";

	pt(testA, testB);




	int * ptr;
	int ar=1000;
	//struct node Node;
	int arr[] = {10,19,67};
	cout<< &arr <<endl;

	int size= sizeof(arr)/ sizeof(arr[0]);
	vector <int> vtr(10);
	for(int i=0;i<10;i++){
		vtr[i]= i+9;
	}

	for(int i=0;i<10;i++){
		cout<< vtr[i]<<endl;
	}

	vector <char> vtrc(129);












return 0;



}