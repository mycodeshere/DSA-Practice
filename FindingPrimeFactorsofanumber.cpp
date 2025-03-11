// // Prime factors are factors of a number that are, themselves, prime numbers. There are many methods to find the 
// prime factors of a number, but one of the most common is to use a prime factor tree.

// For example, if the Input number is 12, then the Output should be [2, 2, 3]. 
// And if the input number is 315, then the output should be [3, 3, 5, 7].

#include<iostream>
using namespace std;

bool Isprime(int n){
    if(n==2 || n ==3)
    return true;
    for(int i = 2; i*i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
void primefactors(int n){

    
    for ( int i = 2; i<=n;i++){
        if(Isprime(i)){
            while(n % i == 0){
                cout<<i<<" ";
                n = n / i;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<endl;
    primefactors(n);
}