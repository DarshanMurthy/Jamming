#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
   map<int, int> summap;
   map<int,string> sum;
   map<string, int> mapvalue;

   for(int i=0;i<10;i++){
       summap[i]=i;
       cout<<summap[i] <<endl;
   }
   summap[4]=1990;
   cout<<summap[4]<<endl;


   vector<int> vtr={10,2,3,4,5};
   cout<< vtr[3] << endl;


    return 0;
}

// g++ -g -std=c++11 -o simplemap.exe simplemap.cpp