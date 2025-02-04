//second largest and second smallest element of an array
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
  int max,min=arr[0];
  max=arr[0];
  for(i=0;i<size;i++){
    if(max<arr[i]){
        max=arr[i];
    }
  }
 int max2,min2;

  max2=arr[0];
  for(i=0;i<size;i++)
  {
   if(arr[i]>max2&&arr[i]<max){
          max2=arr[i];
    }
  }
 cout<<endl<<"second largest"<<endl<<max2;
  min=arr[0];
 for(i=0;i<size;i++){
    if(min>arr[i]){
    min=arr[i];
    }
 }
  min2=max;
for(i=0;i<size;i++){
    if(arr[i]<min2&&arr[i]>min){
        min2=arr[i];
    }
}
 cout<<endl<<"second smallest"<<endl<<min2;


    return 0;
}