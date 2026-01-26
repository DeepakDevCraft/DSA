#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] , int n){

    int flag=0;

    for(int i = 0; i<n; i++){

        for(int j =0; j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag= flag+1;
            }
        }

        if(flag==0){
            cout<<"array sorted"<<endl;
            break;
        } 
    }
}
int main(){

    int n ;

    cin>>n;

   
    int arr[n];

for(int i = 0;i <n;i++){

    cin>>arr[i];
}

bubbleSort(arr,n);

for(int i = 0;i <n;i++){

    cout<<arr[i]<<" ";
}




}
