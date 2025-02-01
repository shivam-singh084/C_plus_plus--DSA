#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is not prime"<<endl;
    }
    return 0;
}