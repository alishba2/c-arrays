// SELECTION SORT
// DECENDING
#include<iostream>
using namespace std;

int main(){
    int i,j,arr[5],max,temp;

    cout<<"Enter elements of array: ";
    for(i=1;i<=5;i++){
        cin>>arr[i];
    }
    for(i=1;i<=5;i++){
        max =i;
        for(j=i+1;j<=5;j++){
            if(arr[j]>arr[max]){
                max = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    cout<<"sorted array"<<endl;
    for(i=1;i<=5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}