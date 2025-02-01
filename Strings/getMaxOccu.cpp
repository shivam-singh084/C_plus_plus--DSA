#include<iostream>
using namespace std;

char getMaxOccuringChar(string s){
    int arr[26] = {0};


  //  create a array of count of characters 
    for( int i = 0; i< s.length(); i++){
        char ch = s[i];

        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occuring character
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            ans = i;
        }
    }
    return ans + 'a';
}

int main(){

    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Maximum occuring character is: " << getMaxOccuringChar(s) << endl;


    return 0;
}