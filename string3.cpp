//count and display the frequency of each character of the string
#include <iostream>
using namespace std;
int main() {
  string str;
  int i=0,alphabet[26]={0},j;
  cout<<"enter the string:"<<endl;
  getline(cin,str);
  while (str[i] != '\0') {
    if(str[i]>='a'&&str[i]<='z') {
      j=str[i]-'a';
      alphabet[j]++;
    }
    i++;
  }
  int count=0;
  cout<<"Frequency of all alphabets in the string is:"<<endl;
  for(i=0;i<26;i++)
{cout<<char(i+'a')<<" : "<<alphabet[i]<<endl;
   count++;}
   cout<<"total count:"<<str.length();
  return 0;
}