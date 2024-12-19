#include<bits/stdc++.h>
using namespace std;

bool subseqKsum(int indx,vector<int>ds,int s,int sum,int arr[],int n){
    if(indx == n){
        //condition satisfied
        if(s == sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        //condition not satisfied
       else return false;
    }
    ds.push_back(arr[indx]);
    s += arr[indx];
    if(subseqKsum(indx+1,ds,s,sum,arr,n) == true){
        return true;
    }

    s -= arr[indx];
    ds.pop_back();

    if(subseqKsum(indx+1,ds,s,sum,arr,n) == true){
        return true;
    }
    else{
        return false;
    }
}


int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    subseqKsum(0,ds,0,sum,arr,n);
    
    return 0;
}