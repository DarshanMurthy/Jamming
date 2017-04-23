#include<iostream>
#define N 2
using namespace std;


void swap(int & i, int & j){
  int temp;
  temp=i;
  i=j;
  j =temp;

}


void rotateMatrix(int matrix[N][N]){
  for(int i=0;i< N/2;i++){
    for(int j=0;j<2;j++){
      swap(matrix[i][j], matrix[i][j]);

    }
  }


}


int main(){
  int matrix[N][N]={{1,2},{11,4}};
  rotateMatrix(matrix);


  return 0;
}
