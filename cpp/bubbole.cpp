#include <iostream>
using namespace std;
let arr = {1,0,5,0,0,8} order of nonzeros are same and sort only zeros elements
void bubboleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){ // number of passes
        for(j=0;j<n-1-i;j++){
            if(arr[j]==0){// check zeros
               swap(arr[j],arr[j+1]);
            }
        }
    }
    
    
}

int main()
{
    int i;
    int arr[]= {1,5,0,0,3 };
    int n = sizeof(arr)/sizeof(arr[0]);
     bubboleSort(arr,n);
     cout<<"sorted list is :  ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}