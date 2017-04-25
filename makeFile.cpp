#include<iostream>
using namespace std;

struct Node{
  int data;
  enum day {Monday, Tuesday};
  struct Node * llink;
  struct Node * rlink;
};

void swap(int &node1, int &node2){
  int temp;
  temp= node1;
  node1 = node2;
  node2 = temp;
}
void swap1(char & i, char & j){
  char m;
  m=i;
  i=j;
  j=m;
}
int main(){
  struct Node * node = (Node *) malloc(sizeof(Node));
  node->data=100;
  cout<< node->data <<endl;

  int node1=10;
  int node2=100;

  swap(node1, node2);
  cout << node1 <<endl;

  char node3='a';
  char node4 ='b';

  swap1(node3, node4);
    cout << node4<<endl;
  

  return 0;
}


