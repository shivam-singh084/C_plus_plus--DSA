#include<iostream>
#include<vector>
using  namespace std;

int main(){

    vector<int>vac;
    vac.push_back(25);
    vac.push_back(35);
    vac.push_back(45);

    vac.pop_back();  // last element delete
    
    cout << "after push back size="<<vac.size()<<endl; // print size  of vector

    cout<<vac.front()<<endl; // print first value
    cout<<vac.back()<<endl; // print last value


    
    // for(int val:vac){
    //     cout<<val<<endl;
    // }




    return 0;
}