#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int *ptr = &i;
    int **ptr1 = &ptr;

    cout << " printing p " << ptr << endl;
    cout << " printing p1 " << ptr1 << endl;
    cout << " printing p " << *ptr1 << endl;

    // printing value of i
    cout << " printing p " << i << endl;
    cout << " printing p " << *ptr << endl;
    cout << " printing p " << **ptr1 << endl;

    return 0;

}


