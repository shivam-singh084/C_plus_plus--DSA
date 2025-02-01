#include<iostream>
using  namespace std;
int main(){
    int n,oddsum=0;
    cout<<"enter a no :";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            oddsum=oddsum+i;  // oddsum+=i; is also same
        }
         
        
    }
    cout<<"sum of odd numbers =" <<oddsum <<" ";


    return 0;
}
