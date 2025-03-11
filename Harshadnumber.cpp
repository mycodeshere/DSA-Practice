// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.
#include<iostream>
using namespace std;

bool Harshadnum(int n){
    int sum=0;
    int last;
    int actual=n;
    while(n>0){
        last = n%10;
        sum = sum + last;
        n = n/10;
    }
    if(actual%sum==0)
    return 1;
    else
    return 0;
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl;

   int result= Harshadnum(n);
   if(result ==1)
   cout<<"Given number is a Harshad number.";
   else
   cout<<"Given number is not a Harshad Number.";
}