#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ones=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)ones++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        arr[i]=1;
        }else{
            arr[i]=-1;
        }
    }
    //maximum subarray
    int ans=arr[0];
    int sum=arr[0];
    for(int i=1;i<n;i++){
        sum=max(sum+arr[i],arr[i]);
        ans=max(ans,sum);
    }
    cout<<ones+ans;
}