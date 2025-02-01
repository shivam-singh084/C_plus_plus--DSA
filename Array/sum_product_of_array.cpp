#include<bits/stdc++.h>
using namespace std;

int sumANDproduct(int arr[],int size,int sum){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int sumANDproduct(int arr[],int size,int product){
    int product = 1;

    for(int i = 0;i<size;i++){
        product=product*arr[i];
    
    }
    return product;
     
    

}
int main(){
    int arr[]= {3,4,5,6,1,2,1};
    int size=7;
    int sum;
    int product;
    cout<<sumANDproduct(sum)<<endl;
     cout<<sumANDproduct(product)<<endl;



    return 0;
}