#include<iostream>


using namespace std;
int main(){
	FILE *fin;
	fin = fopen("input.txt","r");
	cout<< fin<<endl;
	return 0;
}