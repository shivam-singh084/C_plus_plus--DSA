#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin >> marks;
    if(marks>=90){
        cout<<"Grade: A";
    } else if(marks>=80 &&  marks<90){
        cout<<"Grade: B";
    }else if(marks>=70 &&  marks<80){
        cout<<"Grade: C";
    } else{
        cout<<"Grade: D";
    }




    return 0;
}