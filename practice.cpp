#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

#define _CRT_SECURE_NO_DEPRECATE

struct Node{
	int data;
	struct Node * llink;

};
using namespace std;

int main(){

	FILE * fin;



	int arr[3][3] ={{1,12,3},{9,8,2},{89,87,12}};


	for(int i=0;i<3;i++){

		for(int j=0;j<3;j++){

			cout<< arr[i][j] ;
			cout<< " ";
			


		}

		cout<<endl;
	}



}