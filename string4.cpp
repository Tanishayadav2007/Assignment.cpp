//replace all vowels of the string with specific character(*)
#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string str;
   int i;
   cout<<"enter the string:"<<endl;
   getline(cin,str);
   for(i=0;i<str.length();i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        str[i]='*';
        
    }
   }
  cout<<str;
}