#include<bits/stdc++.h>
using namespace std;

// void getSum(int arr[][3], int i , int j){

//     cout << "Printing the Sum -> " << endl;
//     for(int i = 0; i<3; i++){
//         int sum = 0;
//         for(int j = 0; j<3; j++){
//             sum = sum + arr[i][j];
            
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

int largestRowSum(int arr[][3], int i, int j){
    int maxi = INT_MIN;
    int rowindex = -1;
    
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum = sum + arr[i][j];
            
        }
        if(sum > maxi){
            maxi = sum;
            rowindex = i;
        }
    }
    cout <<  " the maximunm sum is  " << maxi << endl;
    return rowindex;
}

int main(){

    int arr[3][3];

    cout << " Enter the Elements : " << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j< 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j< 3; j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

    int ansIndex = largestRowSum(arr,3,3);
    cout << " Max row is at index " << ansIndex << endl;


    return 0;

}