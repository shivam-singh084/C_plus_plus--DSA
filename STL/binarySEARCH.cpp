#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << "finding 6 : " <<binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound : " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "upper bound : " << upper_bound(v.begin(), v.end(), 4)-v.begin() << endl;

    int a = 5;
    int b = 6;

   // swapping 

    swap(a,b);
    cout << "a = " << a << endl;

    // reverse 

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string : " << abcd << endl;

    // rotating 

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "after rotate : " << endl;
    for(auto i : v){
        cout << i << " " ;
    }

    // sorting based on intro sort
    
    cout << " after sorting : " << endl;
    sort(v.begin(), v.end());

     for(auto i : v){
        cout << i << " " ;
    }



}