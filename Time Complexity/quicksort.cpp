#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;

void swap(int *a,int *b);
void quicksort(int arr[],int l,int h);

int partition(int arr[],int l,int h){
int piv=arr[l];
int i=l;
int j=h;
while(i<j){
    while(arr[i]<=piv){
          i++;
    }
    while(arr[j]>piv){
            j--;
    }
    if(i<j){
        swap(&arr[i],&arr[j]);
        }}
swap(&arr[l],&arr[j]);
return j;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void quicksort(int arr[],int l,int h){
if(l<h){
    int loc;
    loc=partition(arr,l,h);
    quicksort(arr,l,loc-1);
    quicksort(arr,loc+1,h);
}}

int main(){
    int n;
    cout<<"Enter the number of elements to be entered in an array: ";
    cin>>n;
     int arr[n];

    for(int z=0;z<n;z++){
arr[z]=rand()%10000;
}
cout<<"The elements of the array: ";
  for(int l=0;l<n;l++){
cout<<arr[l]<<" ";
}
cout<<endl;
auto start = high_resolution_clock::now();
quicksort(arr,0,n-1);
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
   cout<<"\n The elements of the array after sorting: ";
  for(int l=0;l<n;l++){
cout<<arr[l]<<" ";
}
   cout << "\nTime taken by function: " << duration.count() << " microseconds" << endl;
return 0;}

