#include<bits/stdc++.h>
using namespace std;

void getSum(int arr[][3], int i , int j){

    cout << "Printing the Sum -> " << endl;
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum = sum + arr[i][j];
            
        }
        cout << sum << " ";
    }
    cout << endl;
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

    getSum(arr, 3, 3);


    return 0;

}