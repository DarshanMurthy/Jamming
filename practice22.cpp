#include<iostream>
#include<vector>
#include<set>
#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++) 


using namespace std;

struct Node{
	int data;
	struct Node * llink;
	struct Node * rllink;
};
void vect_test(vector<int> &vtr){
	cout<< vtr.size()<<endl;

}

// void testvalue(pair<int,int> &val){

// }

int main(){



	Node * node;
	node = (Node *) malloc(sizeof(Node));
	cout<< node;
	int data = node-> data;
	cout<< data<<endl;

	vector<int> vect(100);
	vect_test(vect);
	//pair<int,int> pr(100,100);
	typedef set<int> st;
	



}