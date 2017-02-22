#include<iostream>

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};

using namespace std;

void swap(char * name1, char * name2){
  char temp;
  temp= *name1;
  *name1=*name2;
  *name2=temp;
}


int main(){
  Node * node= (Node *) malloc(sizeof(Node));
  node->data =100;

  char name[] = "darshan";
  char name1[] = "divya";
  cout<< name<<endl;
  

  
  swap(name,name1);
  cout<< name <<endl;



  return 0;
}
