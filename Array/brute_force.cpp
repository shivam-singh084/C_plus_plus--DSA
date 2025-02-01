#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};

    int maxsum= INT_MIN ;

    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st+1;end<n;end++){
            currsum=currsum+arr[end];
            maxsum=max(currsum,maxsum);

        }

    }
    cout<< "max subarray are "<<maxsum<<endl;
    return 0;
}