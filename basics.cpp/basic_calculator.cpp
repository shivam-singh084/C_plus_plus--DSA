#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter a :";
    cin >> a;
    cout << "enter b :";
    cin >> b;
    int sum=a+b;
    int multiply = a*b;
    float divide=a/b;
    int modulus=a%b;
    cout << "sum of a and b is : "<< sum << endl;
    cout <<"multi of  a and b is : "<< multiply << endl;
    cout <<"division of  a and b is : "<< divide << endl;
    cout <<"modulus of  a and b is : "<< modulus << endl;


     return 0;
}