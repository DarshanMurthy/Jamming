#include<iostream>
#include<vector>

using namespace std;

struct Node{
  int data;
  enum {day, night};
  struct Node * llink;
  struct Node * rlink;
};

using namespace std;
void swap(char ** name1, char ** name2){
  char * temp = *name1;
  *name1 = *name2;
  *name2 = temp;
}

void nector(vector<int> & dat){
  dat[1]=9;
  for(int i=0;i<3;i++){
    cout << dat[i]<<endl;
  }
  
}

void swap1(int & name1, int & name2){


}
int main(){
  vector <int> data = {10,2,4};

  for(int i=0;i<3;i++){
    cout << data[i]<<endl;
  }

  nector(data);
  
  char * name1 = "darshan1990";
  char * name2 = "1986";
  struct Node * node = (Node *) malloc(sizeof(Node));
  node-> data=100;
  cout << node->data;
  swap(&name1, &name2);

  return 0;
}
