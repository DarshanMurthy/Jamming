#include<iostream>
#include<vector>
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


void swapTest(char ** name1, char ** name2 ){
  char *temp = *name1 ;
  cout << temp <<endl;
  *name1 = * name2;
  *name2 = temp;

}
int main(){
  
  struct Node * node = (Node *) malloc(sizeof(Node));
  node->data=100;
  cout<< node->data <<endl;


  char * life="life";
  char * tough ="tough";

  swapTest(&life,&tough);


  

  int node1=10;
  int node2=100;

  swap(node1, node2);
  cout << node1 <<endl;

  char node3='a';
  char node4 ='b';

  swap1(node3, node4);
    cout << node4<<endl;

    vector<int> vtr = {10,2,3,4};
  

  return 0;
}


