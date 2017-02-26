#include<iostream>
struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};

using namespace std;

int main(){
  Node * first = (Node *) malloc(sizeof(Node));
  first->data=100;
  first->llink='\0';
  
  char * name="darshanmurthy";
  cout<< strlen(name)<<endl;
  cout<< sizeof(name)<<endl;

  char name1[]="darshanmurthy";
  cout<< sizeof(name1) << endl;
  cout<< strlen(name1) <<endl;
}
