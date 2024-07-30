#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int n;
    int arr[n];
    cout<<"enter the number of elements";
    cin>>n;
    cin>>k;
    for (int i =0;i<n;i++){
        cout<<"enter the  "<<i<<" element";
        cin>>arr[i];
    }
    
    for (int i=0;i+2<n;i++)
    {
        if((arr[i]+arr[i+1]+arr[i+2])>k){
            int *ptr=&arr[i];
            cout<<ptr<<endl;
        }

    }
}