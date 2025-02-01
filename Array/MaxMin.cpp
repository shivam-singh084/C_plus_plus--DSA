#include<bits/stdc++.h>
using  namespace std;

int getmax(int num[], int n){

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){

        maxi= max(maxi, num[i]);

        // if(num[i] > max){

        //     max = num[i];
        // }  
    }
    return maxi;
}

int getmin(int num[], int n){

    int mini= INT_MAX;

    for(int i=0; i<n; i++){

        mini = min(mini, num[i]);

        // if(num[i] < min){

        //     min = num[i];
        // }
    }
    return mini;
}

int main(){

    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"The maximum value in the array is: "<< getmax( num, size)<<endl;
    cout<<"The minimum value in the array is: "<< getmin( num, size)<<endl;



    return 0;
}

   
   


