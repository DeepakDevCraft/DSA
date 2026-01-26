#include<bits/stdc++.h>
using namespace std;

 void selectionSort(int arr[],int n) {
        // code here
      
        int i,j,k;
        
        for( i = 0; i<n;i++){
            for( j=k=i; j<n; j++){
                
                if(arr[j]<arr[k]){
                    
                    k = j;
                }
            }
            
            swap(arr[i],arr[k]);
        }
    }

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){

        cin>>arr[i];
    }

selectionSort(arr,n);

    for (int i=0; i<n; i++){

        cout<<arr[i]<<' ';
    }
} // namespace std;
