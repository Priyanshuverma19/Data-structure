#include<iostream>
using namespace std;

int bsearch(int arr[],int low,int high,int x){
    if(low>high)
    return -1;
    int mid = (low +high)/2;
    if(arr[mid]== x)
    return mid;
    else if(arr[mid]>x)
    return bsearch(arr,low,mid-1,x);
    else
    return bsearch(arr,mid+1,high,x);
}
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr);
    int x = 20;
    // int x = 25;
    int low = 0;
    int high = n-1;
    cout<<bsearch( arr, low,high ,x);

    
    return 0;
}