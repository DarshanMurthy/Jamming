#include<iostream>

struct Node{
  int data;
  struct Node * llink;
  struct Node * rllink;
};


using namespace std;

int main(){
  char * name="darshan";
  cout<< name<<endl;
  cout<< *name<<endl;
  cout<< *name+1<<endl;
  cout<< &name<<endl;

  return 0;
}
