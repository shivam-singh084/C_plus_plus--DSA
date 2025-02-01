/*#include<iostream>
#include<math.h>

using  namespace std;

int binToDecimal(int decNUM){
    int ans=0,  pow =1;
    while(decNUM>0){
        int rem = decNUM%2;
        decNUM=decNUM/2;
        ans = ans + (rem*pow);
        pow = pow*10;

        
    }
    return ans;
}

int main(){
    int decNUM;

    cout<<"Enter a Decimal number: ";
    cin>>decNUM;

    cout<< binToDecimal(decNUM)<<endl;



    return 0;
}
*/



#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n & 1;
        ans=bit*(pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
}