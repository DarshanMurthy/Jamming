#include<iostream>
#include<vector>

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};


using namespace std;


void swap(char * name1, char * name2){
  char * temp;
  temp= name1;
  name1=name2;
  name2=temp; 
}

void temp(char * name, int start,int end){
  for(int i=0;i<end;i++){
    swap(name+i,name+ start);
  }
  
}


int main(){
  char * name="darshamurthy";
  int end = strlen(name);
  temp(name,0,end);
  
  vector<int> vtr(10);
  struct Node * node;
  int arr[] = {102,23};
  int len = sizeof(arr);
  cout<<len <<endl;
  return 0;
}
