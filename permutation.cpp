#include<iostream>
#include<vector>

struct Node{
  int data;
  struct Node * llink;
  struct Node * rllink;
};


using namespace std;

int main(){
  vector<int> vtr(100);
  int len = vtr.size();
  for(int i=0;i< len-1;i++){
    vtr[i]=i;
  }

  for(int j=0;j< len-1;j++){
    cout<< vtr[j]<<endl;
  }


  
  char * name="darshan";
  cout<< name<<endl;
  cout<< *name<<endl;
  cout<< *name<<endl;
  cout<< &name<<endl;

  return 0;
}
