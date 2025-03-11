//Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.

//Method 1 : By storing factorial of 1-9 in extra array
#include<iostream>
using namespace std;

int main(){
 
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int actual = n;
    int arr[]={1,1,2,6,24,120,720,5040,40320,362880};
    int last;
    int sum=0;
    while(n>0){
        last = n%10;
        sum = sum + arr[last];
        n=n/10;
    }
    if(sum==actual){
        cout<<"Given number was Strong Number";
    }
    else{
        cout<<"Given Number wasn't a strong number";
    }

}