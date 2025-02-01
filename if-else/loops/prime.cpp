#include<iostream>
using  namespace std;
int main(){
    int n;
    bool isprime = true;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=2;i<=n-1;i++){   // we can also write   for(int i=2;  i*i<=n;   i++)

        if(n%i==0){
            isprime = false;
            break;
        }
    }
        if(isprime==true){
            cout << n << " is a prime number";
        }else{
            cout << n << " is not a prime number";
        }
    
    return 0;
}


