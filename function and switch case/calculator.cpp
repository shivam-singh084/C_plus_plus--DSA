#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"enter the operator"<<endl;
    char op;
    cin>>op;
    switch(op){
        case '+':cout<< a+b<<endl;
                break;
        case '-': cout<< a-b<<endl;
                break;
        case '*':cout<< a*b <<endl;
                break;
        case '/': cout<< a/b <<endl;
                break;
        default:cout<<"invalid operator"<<endl;
                break;
        
    }
    cout<<endl;
    return 0;
}