// vectors are dynamic arrays that can grow and shrink in size
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout << "capacity : " << v.capacity() << endl; 

    v.push_back(1);
    cout << " capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity : " << v.capacity() << endl;
    cout << " size : " << v.size() << endl;

    cout << "element at 2nd index is : " << v.at(2) << endl;

    cout << " empty or not : " << v.empty() << endl;

    cout << " first element is : " << v.front() << endl;
    cout << " last element is : " << v.back() << endl;

    cout << " before pop : " << endl;
    for( int i: v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << " after pop : " << endl;
    for( int i: v){
        cout << i << " ";
    }
    cout << endl;
}