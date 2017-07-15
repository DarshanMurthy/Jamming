#include<iostream>
using namespace std;


void swap(char ** temp1, char **temp2){
cout << temp1 << endl;
}

int main(){
   char temp[]="darshan";
   swap(&temp+1, &temp+2);

   return 0;
}