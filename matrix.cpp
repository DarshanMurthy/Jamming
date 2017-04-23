#include<iostream>
using namespace std;

void matix(int mat[N][N]){
  for(int i=0;i< N;i++){
    for(int j=0;j<N;j++){

      cout << mat[i][j]<<endl;
    }

  }

}

int main(){
  int mat[N][N]={{2,3},{4,5}};

  matrix(mat);


  return 0;
}
