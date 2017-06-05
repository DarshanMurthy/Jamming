#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};

void swap(char ** name1, char ** name2){
  cout << *name1 <<endl;
  
  char * temp = *name1;
  

}

int main(){
  char * name1= "Darshan";
  char * name2 ="Murthy";

  swap(&name1, &name2);


  return 0;

}
