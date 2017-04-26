#include<iostream>

using namespace std;

int test(int value){
  int lo = 0, hi = 3;
  int arr[]={1,2,3,4};
  
  for(int mid = (lo + hi)/2; hi - lo > 1; mid = (lo + hi)/2)
    (arr[mid] > value ? hi : lo) = mid;
return lo;

}


int main(){
  cout << test(4);
 

  return 0;
}
