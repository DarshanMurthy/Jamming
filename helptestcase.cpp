#include<iostream>

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};
void swap(char * name1, char * name2){
  char temp;
  temp = *name1;
  *name1= *name2;
  *name2= temp;
}

void nameTest(char * name,int start, int end){
  for(int i=0;i<end;i++){
    swap(name+start, name+end);
  }

}

using namespace std;

int main(){
  struct Node * node= (Node *) malloc(sizeof(Node));
  node->data=100;
  char  name[] ="darshan";
  int len= strlen(name);
  nameTest(name,0,len-1);
  


  return 0;
}
