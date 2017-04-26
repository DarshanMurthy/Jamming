#include<iostream>
#include<vector>

using namespace std;

void vectorTest(vector<int> &vtr){
  vtr[0]= 45;

}


int main(){
  vector<int> vt = {1,23,0};
  vectorTest(vt);
  for(int i=0;i<3;i++){
    cout << vt[i]<<endl;
  }
  


  return 0;
}
