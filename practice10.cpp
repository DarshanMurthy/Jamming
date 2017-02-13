#include<iostream>
#include<vector>



using namespace std;
struct Node{
	int data;
	struct Node * llink;
	struct Node * rrlink;

};


struct Nodetest{
  int data;
  struct Nodetest * llink;
  struct Nodetest * rllink;
  
};

int main(){
	int sum =0;
	Node * first= (Node *)malloc(sizeof(Node));
	first->data=100;
	cout<< first->data;
	Node * cur = (Node *) malloc(sizeof(Node));

	int arrayInput[] = {1,2,3};
	cout<< sizeof(int);
	vector<int> value(100);
	int len = sizeof(value);

	cout<< sizeof(value);

	for(int i=0;i<len;i++){

		value[i]=i;
		sum =sum + value[i];
			}

	cout<< sum;

	vector<int> test(100);




	return 0;
}
