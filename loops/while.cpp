#include<iostream>
using  namespace std;
int main(){
    // int n, count=1;
    // cout <<"enter a number :";
    // cin >> n;
    // while(count<=n){
    //     cout << count << " ";
    //     count++;
    // }
     

     int i=0,n,oddsum=0;
     cout <<"enter a number :";
     cin >> n;
     while(i<=n){
        if(i%2!=0){
            oddsum=oddsum+i;
        }
        i++;
     }
     cout << " sum of odd numbers :" <<oddsum <<" ";


    return 0;
}
