#include<bits/stdc++.h>
using namespace std::chrono;

using namespace std;
 int passes=0,comparisons=0,swaps=0;

void bubblesort(int arr[],int m){
     int flag=0;

       for(int i=0;i<m-1;i++){
        for(int j=0;j<m-1-i;j++){
                if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swaps++;
            flag=1;
                }
                comparisons++;
        }
        passes++;
        if(flag==0){
            break;
        }
    }
}

int main()
{
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

auto start=high_resolution_clock::now();
bubblesort(arr,n);
auto stop=high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
   cout<<"\n The elements of the array after sorting: ";
for(int z=0;z<n;z++){
    cout<<arr[z]<<" ";
    }
    cout<<"\nPasses:"<<passes<<"\n";
    cout<<"Comparisons:"<<comparisons<<"\n";
    cout<<"Swaps:"<<swaps<<"\n";
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

