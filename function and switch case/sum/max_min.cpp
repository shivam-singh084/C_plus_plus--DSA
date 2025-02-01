#include<iostream>
using  namespace std;
/*
double sum(double a,double b){
    double s = a+b;
    return s;
}
int main(){
    cout<< sum(10.123,90.99) << endl;
    return 0;
}
*/

double min(double a,double b){ // parameters - copy of  actual values

    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<< min(200,90) << endl; // arguments - actual  values

    return 0;
}