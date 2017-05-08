#include<iostream>

using namespace std;


void swap(char ** name1, char ** name2){
  char * name = *name1;
  *name1 = *name2;
  *name2 = name;

}

int main(){
  char * nameTest="darshan";
  char * nameList="darshan1990";
  swap(&nameTest,&nameList);

  cout << nameList << endl;
  return 0;

}
