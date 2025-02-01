/*#include<iostream>
using  namespace std;

int binToDec(int bin){

    int ans=0, pow=1;
    
    while(bin>0){
        int rem=bin%10;
        ans=ans+rem*pow;
        bin=bin/10;
        pow=pow*2;
        
    }
    return ans;
}


int main(){
    int bin;
    cout<<"Enter a binary number: ";
    cin>>bin;
    cout<<"The decimal equivalent is: "<<binToDec(bin)<<endl;

    return 0;
}*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int ans=0;
    int i=0;
    while(n!=0){
        int digit = n%10;

        if(digit==1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}