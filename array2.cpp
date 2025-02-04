//reverse array
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
   cout<<"reversed array is:"<<endl;
   for(i=size-1;i>=0;i--){
    cout<<arr[i]<<" ";
   }

    return 0;
}