#include<bits/stdc++.h>
using namespace std;

int subseqKsum(int indx,int s,int sum,int arr[],int n){
    if(s > sum) return 0;
    
    if(indx == n){
        if(s == sum){
            return 1;
        }
        else return 0;
    }
    s += arr[indx];
    int l = subseqKsum(indx+1,s,sum,arr,n);

    s -= arr[indx];

    int r = subseqKsum(indx+1,s,sum,arr,n);

    return l+r;
}

int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    cout<< subseqKsum(0,0,sum,arr,n)<<endl;
    
    return 0;
}