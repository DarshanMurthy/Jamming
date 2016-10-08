#include<iostream>
#include<vector>
#define _CRT_SECURE_NO_DEPRECATE
#define TEST 100

using namespace std;



struct node{
	int arr;
	char name[2]={'T','F'};
	struct node * llink;
	struct node * rlink;
};


struct test
{
	int arr[0];
};

int main(){
	cout << TEST << endl;
	vector<int> vtr(100);
	vtr[0] =100;
	cout<< vtr[0] <<endl;
	struct node * Node;

	


	// typedef long long li;
	// typedef vector<int> vi;
	// typedef pair<int,int> ii;
	// typedef vector<ii> vii;
	// typedef set<int> si;

	//typedef set<int> si;



	return 0;

}