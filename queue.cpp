#include<iostream>


struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};


using namespace std;


void swap(char ** name1, char **name2){
  cout<< *name1;

}
int main(){
  char * name1="darshan";
  char * name2="diviay";

  swap(&name1, &name2);
 
  return 0;
}
