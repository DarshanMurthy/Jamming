#include<iostream>
#include<vector>


using namespace std;


void ptr( int & drive){

}




int main(){


	int * ptr;





	int ar=1000;
	int arr[] = {10,19,67};

	
	cout<< &arr <<endl;
	ptr(&arr);




	int size= sizeof(arr)/ sizeof(arr[0]);
	vector <int> vtr(10);
	for(int i=0;i<10;i++){
		vtr[i]= i+9;
	}

	for(int i=0;i<10;i++){
		cout<< vtr[i]<<endl;
	}







return 0;



}