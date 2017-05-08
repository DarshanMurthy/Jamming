#include<iostream>

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};

using namespace std;

int main(){
  struct Node * node = (Node *) malloc(sizeof(Node));
  node->data=10;
  int one;
  for (int i=0;i< 10;i++){
     one = 1 << i ;
     cout << one << endl;
     
  }
 

  int data=10;
  int val = data << 2 ;
  cout << val <<endl;
  

  return 0;
}
