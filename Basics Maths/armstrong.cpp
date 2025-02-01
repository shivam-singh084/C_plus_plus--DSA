#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    int sum=0;
    int dup=n;
    int rev;
    cout<<"enter a no: "<<endl;
    cin>>n;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
        rev=(rev*10)+ld;
        
    }
    if(rev==dup){
        cout<<"armstrong no"<<endl;
    }else{
        cout<<"not armstrong no"<<endl;
    }
    return 0;
}
