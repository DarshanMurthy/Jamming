#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}

void swapChar(char * a, char *b){
    char temp;
    temp= *a;
    *a = *b;
    *b= temp;
}
swapTemp(char * a, char *b){
    char temp[];
    temp= *a;
    *a = *b;
    *b= temp;

}

int main(){
    int a=10, b=20;
    swap(&a, &b);
    cout << a << endl;
    char c='a', d='n';
    swapChar(&c,&d);
    cout << c << endl;

    char temp1[] ="darshan";
    char temp2[]="murthy";
    swapTemp(&temp1, &temp2);
    cout<< temp1 << endl;







}