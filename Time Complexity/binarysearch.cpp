#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

void insertion(int arr[],int size);
int binarysearch(int arr[],int l,int h,int x);

void insertion(int arr[],int size){
for(int i=1;i<size;i++){
        int temp;
   temp=arr[i];
   int j=i-1;
    while(i>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
   }}

int binarysearch(int arr[],int l,int h,int x){
    if(l<=h){
     int m=l+(h-l)/2;
     if(arr[m]==x){
        return m;
        }
     else if(arr[m]>x){
        return binarysearch(arr,l,m-1,x);
     }
     else
     {
       return binarysearch(arr,m+1,h,x);
     }}
return -1;
}

int main(){

    int n;
    cout<<"Enter the number of elements to be entered in an array: ";
    cin>>n;
    int *arr = new int[n];
    for(int z=0;z<n;z++){
        arr[z]=rand()%1000;
    }

    insertion(arr,n);
    cout<<"The elements of the sorted array: ";
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    int element;
    cout<<"Enter the element to be searched: ";
    cin>>element;
    auto start = high_resolution_clock::now();
    int y=binarysearch(arr,0,n-1,element);
    if(y==-1){ cout<<"Element not found in the given array!";}
    else
    {cout<<"Element found at index: "<<y;}
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by function: " << duration.count() << " microseconds" << endl;
    delete arr;
    return 0;}
