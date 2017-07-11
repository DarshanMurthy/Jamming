#include<iostream>
#include<vector>
#include<map>

using namespace std;
vector<int> twoSum(vector<int> &numbers, int target) {
    map<int, int> summap;
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        summap[numbers[i]] = i;
    }
    for (int i = 0; i < numbers.size(); i++) {
        int searched = target - numbers[i];
        if (summap.find(searched) != summap.end()) {
            result.push_back(i + 1);
            result.push_back(summap[searched] + 1);
            break;
        }
    }
    return result;
}


int main(){
    vector<int> value = {1,2,3,4,5};
    vector<int>  temp =twoSum(value,3);
    cout << temp[0] <<endl;
    cout << temp[1] << endl;


    return 0;
    
    


    
  

}
