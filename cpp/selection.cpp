#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
       int i,j;
       // find minimum element of given array
       for(i=0;i<n-1;i++){
           int minIdx = i;
         for(j=i+1;j<n;j++){
             if(arr[j]<arr[minIdx]){
                 minIdx=j;
             }
             // swap if found minimum element is not at i index
             if(minIdx !=i){
                 swap(arr[i],arr[minIdx]);
             }
         }
       }
 
}

int main()
{
    int n,i;
    int arr[]={1,8,6,7,3,-2};
    n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"sorted value is : ";
    for( i =0 ;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}