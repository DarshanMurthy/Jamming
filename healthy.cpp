#include<iostream>

using namespace std;

struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};

void swap(char * t1, char * t2){
  char * temp;
  temp = t1;
  t1= t2;
  t2 = temp;
  

}

void permute(char * a, int start, int end){
  for(int i=start;i<end;i++){
    cout<< a+start<<endl;
    cout<< a+i<<endl;
    
    swap(a+start,a+i);

  }
}

int main(){
  Node * node;
  char name [] = "darshan";
  int len = strlen(name);
  permute(name, 0, len-1);
  return 0;
}
