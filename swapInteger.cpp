#include<iostream>

void swap(int * value1, int * value2){
    int temp = * value1;
    * value1 = * value2;
    * value2 = temp; 

}

int main(){
    int value1=10,value2=20;
    swap(&value1, &value2);

    int value[]={10,2,3};


    return 0;
}