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
  
      swap(matrix[0][0], matrix[1][1]);

    
  }


void initializeMatrix(int matrix[N][N]){
   for(int i=0;i<N;i++){
    for(int j=0;j< N;j++){
      cout << matrix[i][j]<<' ';
    }
    cout << endl;
  }
}

void printMatrix(int matrix[N][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j< N;j++){
      cout << matrix[i][j]<<' ';
    }
    cout << endl;
  }
}


int main(){
  int matrix[N][N]={{1,2},{11,4}};
  
 

  initializeMatrix(matrix);
  rotateMatrix(matrix);
  printMatrix(matrix);


  return 0;
}
