#include<bits/stdc++.h>
using namespace std;

void subseqKsum(int indx,vector<int>ds,int s,int sum,int arr[],int n){
    if(indx == n){
        if(s == sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[indx]);
    s += arr[indx];
    subseqKsum(indx+1,ds,s,sum,arr,n);

    s -= arr[indx];
    ds.pop_back();

    subseqKsum(indx+1,ds,s,sum,arr,n);
}

int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    subseqKsum(0,ds,0,sum,arr,n);
    
    return 0;
}