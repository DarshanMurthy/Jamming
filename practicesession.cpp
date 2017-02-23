#include<iostream>

using namespace std;

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};


int main(){


  char * nametest="darshanmurthy";

  char *p = "D";
  char temp;
  temp= *p;
  cout<<temp<<endl;
  Node * first;
  first= (Node *) malloc(sizeof(Node));
  first->data=100;

  char * name="darshanmurthy";
  cout<< *name<<endl;
  cout<< &name<<endl;
  cout<< name<<endl;
  

  

}
