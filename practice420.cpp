#include<iostream>


struct Node{
  int data;
  struct Node * llink;
  struct Node * rlink;
};


using namespace std;


int main() {
  int arr[3][3] ={{10,2,3},
		  {12,3,4},
		  {1,2,3}};
  
 
  for(int i=0;i<3;i++){
    cout << arr[i][i]<<endl;
  }

  


  return 0;
}
