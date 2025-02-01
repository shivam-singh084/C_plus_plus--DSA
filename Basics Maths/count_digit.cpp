#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter a no: "<<endl;
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        count=count+1;
        n=n/10;
    }
    cout<<"no of digit :" <<count<<endl;
    return 0;
}
