#include<iostream>
using namespace std;
void permute(char * str, int first, int last);

struct Node{
  int data;
  struct Node * llink;
  struct Node * rrlink;
};

void swap(char * str1, char * str2)
{
  char  * temp;
  temp = str1;
  str1 = str2;
  str2 = temp;
}


void permute(char * str, int first, int last){

  if(first == last){
    cout<< str;

  }
  else {
  for(int first=0;first<last-1;first++){

    swap(str+first, str+last);
    permute(str, str+first, str+last);
  

  }
  }
}


int main(){
  char name[] = "darshan";
  cout<< name;

  int len = strlen(name);
  permute(name,0,len-1);


  return 0;

}

