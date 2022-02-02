#include <iostream>
using namespace std;
void merge(int a[],int l,int r,int m);

void mergesort(int arr[],int l,int r){
    if(l<r){
int m=l+(r-l)/2;
mergesort(arr,l,m);
mergesort(arr,m+1,r);
merge(arr,l,r,m);
    }
}

void merge(int arr[],int l,int r,int m){
int s1=m-l+1;
int s2=r-m;
int a[s1];
int b[s2];
  for(int i=0;i<s1;i++){
a[i]=arr[l+i];
}
 for(int j=0;j<s1;j++){
b[j]=arr[m+1+j];
}
int x=0;
int y=0;
int z=l;

while(x<s1 && y<s2){
        if(a[x]<=b[y]){
            arr[z]=a[x];
            x++;
        }
        else{
            arr[z]=b[y];
            y++;
        }
    z++;
}
while(x<s1){
arr[z]=a[x];
x++;
z++;
}
while(y<s2){
arr[z]=b[y];
y++;
z++;
}
}

int main()
{
    int n;
        cout<<"Enter the number of elements to be entered in an array: ";
    cin>>n;
     int arr[n];

    for(int z=0;z<n;z++){
arr[z]=rand()%100;
}

cout<<"The elements of the array: ";
  for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;

    int l=0;
    int r=n-1;
    mergesort(arr,l,r);
cout<<"The elements of the array after merge sort are: ";
  for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;

//time complexity is O(nlogn)
}
