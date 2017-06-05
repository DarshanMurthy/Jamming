#include<iostream>

using namespace std;

void swap(int * value1, int * value2){
  int * temp= value1;
  *value1 = *value2;

  *value2= *temp;


}


int main(){
  int value1=10;
  int value2=2;

  char * name1="darshan";
  char * name2="murthy";

 

  swap(&value1, &value2);

  cout << value1 <<endl;


  


  return 0;

}
