//accept a string from user
#include<iostream>
using namespace std;
int main(){
  string name;
  cout<<"enter a string:"<<endl;
  getline(cin,name);
  cout<<"string that you entered:"<<endl;
  cout<<name;
    return 0;
}