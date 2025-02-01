#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int*ptr=&a;
    int**parptr=&ptr;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<*(&parptr)<<endl;
    cout<<&ptr<<endl;

    return 0;
}
