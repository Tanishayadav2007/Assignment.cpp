//if number is not prime find all its factor
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number to check whether it is prime or not:"<<endl;
    cin>>n;
    int i;
    if(n<=1){
        cout<<"number is not prime";
    }
    else{
        for(i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count>2){
            cout<<"number is not prime"<<endl;
            for(int i=1;i<=n;i++){
                int ans=n%i;
                if(ans==0)
                cout<<i<<",";
            }
        }
        else
        cout<<"number is prime";
    }

    return 0;
}