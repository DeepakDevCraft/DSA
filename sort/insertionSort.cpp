#include<bits/stdc++.h>
using namespace std;

// void insertionSort(int arr[],int n){

//     // int flag = 0;

//     for (int i =1; i<n;i++){

//         int j = i-1;
//         int ele = arr[i];

//         while (j>=0 &&  arr[j]>ele)
//         {
//             /* code */

//             arr[j+1] = arr[j];
//             j--;
//         }

//         arr[j+1] = ele;
        
//     }
// }



void insertionSort(int arr[],int n){

    int flag = 0;

    for (int i = 1; i<n; i++){

        int ele = arr[i];

        for (int j = i-1; j>=0;j--){

            if(arr[j]>ele){
                swap(arr[j],arr[j+1]);

                flag=1;
            }

           
        }

        if (flag ==0){
            cout<<"adaptive"<<endl;break;
        }

        
    }
}


/*
8 9 5 4 3

Ist pass: 
   ele = 9, j = 0
    8 9 5 4 3


2nd pass:
    i ==2 j ==1
     ele==5 

    8 5 9 4 3    j ==0
    5 8 9 4 3

3rd pass:
    i ==3 j==2
    ele ==4  
   








*/

int main(){

    int n ;
    cin >>n;

    int arr[n];

    for(int i = 0; i<n; i++){

        cin>>arr[i];
    }

    insertionSort(arr,n);

    for(int i = 0; i<n; i++){

        cout<<arr[i]<<' ';
    }
}