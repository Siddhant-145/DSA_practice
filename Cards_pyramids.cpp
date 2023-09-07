
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0) cout<<"0"<<endl;
    else if(n == 1) cout<<"2"<<endl;
    else{
        int arr[n+1];
        arr[0] =0;
        arr[1] =2;
        for(int i=2;i <=n;i++){
            arr[i] = ((2 * i) + i-1 + arr[i-1]) %1000007;
        }
        cout<<arr[n];
        
    }
    return 0;
}
