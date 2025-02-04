//if number is prime ,find its next prime number
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
            }
        
        else{
        cout<<"number is prime"<<endl;
      int nextPrime = n + 1;
    while (true) {
        int primeCheck = 0; 
        for (int i = 2; i * i <= nextPrime; i++) {
            if (nextPrime % i == 0) {
                primeCheck = 1;
                break;
            }
        }
        if (primeCheck == 0) {  
            cout << "Next prime: " << nextPrime << endl;
            break;
        }
        nextPrime++;
    }}}

    return 0;
    }