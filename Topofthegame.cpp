#include<iostream>
#include<vector>
using namespace std;

struct Node{
  int data;
  struct Node * rlink;
  struct Node * llink;
};

int main(){
  struct Node * node = (Node *) malloc(sizeof(Node));
  vector<int> li = {10,2,3};
  //node-> data =10;

  for(int i=0;i<3;i++){
    //cout << li[i] << endl;
  }



  int matrix[2][2] ={{10,2},{9,2}};

  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

      cout << matrix[i][j]<<' ';
    }
    cout <<'\n' <<endl;
  }

  


  

}
