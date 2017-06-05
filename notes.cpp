#include<iostream>
#include<vector>

using namespace std;


struct Node{
  int data;
  struct Node * rlink;
  struct Node * llink;
};


int main(){
  struct Node * node = (Node *) malloc(sizeof(Node));
  node-> data;
  cout << node-> data;

  vector<int> vtr ={10,2,3};
  
  for(int i=0;i<3;i++){
    cout << vtr[i] <<endl;
  }

  return 0;
}

