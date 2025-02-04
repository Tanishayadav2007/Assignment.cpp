//enter array
#include<iostream>
using namespace std;
int main(){
   int size,i;
   cout<<"enter size of array:"<<endl;
   cin>>size;
   cout<<"enter an array with size "<<size<<endl;
   int arr[size];
   for(i=0;i<size;i++){
    cin>>arr[i];
   }
   cout<<"array you entered is:"<<endl;
   for(i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}