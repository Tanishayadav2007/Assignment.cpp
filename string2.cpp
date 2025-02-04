//chech whether the string is pallindrone or not
#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char name[20];
  cout<<"enter the string:"<<endl;
  cin>>name;
  char x[20];
  strcpy(x,name);
  strrev(x);
if(strcmp(name,x)==0){
cout<<"yes the string is pallindrone";
}
else
cout<<"no";
    return 0;
}