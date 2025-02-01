#include<iostream>
using  namespace std;

int sumofN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    return  sum;

}

int main(){
    cout<< sumofN(5)<< endl;
    cout<< sumofN(10)<< endl;
    cout<< sumofN(15)<< endl;
    cout<< sumofN(20)<< endl;
    
    return 0;
}
