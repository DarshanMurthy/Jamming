#include<iostream>
using namespace std;


void swap(char ** name1, char ** name2){
  char * temp = *name1;
  *name1 = *name2;
  *name2 = temp;
}





int main(){
  char * name="Darshan";
  char * nameTemp="dars";
  swap(&name, &nameTemp);

  cout <<name << endl;

  return 0;
}

