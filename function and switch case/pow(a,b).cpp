#include<iostream>
using namespace std;

int power(int a, int b){

    int ans=1;

    for(int i = 1; i <= b; i++){
        ans=ans*a;
    }

    return ans;
}

int main() {
    int a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
     cout << "The result is: "<< power(a,b)<<endl;
    return 0;
}