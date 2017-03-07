#include<iostream>

struct Node{
  int data;
  char * name;
};

using namespace std;

void swap(char **name1, char **name2){
 
 
}

int main(){
  char * name1="darshan";
  char * name2="murthy";

  swap(&name1, &name2);
  cout<< name1 <<endl;


  return 0;
}
