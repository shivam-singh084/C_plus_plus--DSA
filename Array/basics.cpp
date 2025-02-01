#include<iostream>
using  namespace std;

void printarray(int arr[], int size){

    //printing the array
    for(int i=0;i<size;i++){
        cout << arr[i]<< " " << endl;

    }

}

int main(){
    // declare
    int number[15];

    //accessing an array
    cout << "value at 14 index : " << number[15] <<endl;

    //initializing an array
    int second[15] = {1,2,4};

    //accessing an array
    cout << "value at 2 index : " << second[2] <<endl;

    int third[15]= {2,7};

     int n=15;

    //printing the array


    // for(int i=0;i<=n;i++){
    //     cout<< third[i] << " " << endl;
    // }

    //printing the array using function

    printarray(third, n);





    cout << "every thing is fine" << endl;



    return 0;
}
