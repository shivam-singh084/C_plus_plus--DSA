#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n,rev;
    int dup=n;
    cout<<"enter a no: "<<endl;
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        rev=(rev*10)+lastdigit;
        n=n/10;
    }

    if(dup==rev){

        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
