#include<iostream>
using namespace std;

int sumOFarray(int arr[], int n, int sum){
    int sum =0;
    for( int i=0; i<n; i++){
        
        sum = sum +arr[i];

    }
    return sum;
}

int main(){
    int arr[]={2,4,5,6,7};
    int sum;
    cout << "sum is : " << sumOFarray(sum)<<endl;

    return 0;
}