#include<iostream>
using namespace std;
int main(){
    int l=10;
    int r=20;
    int sum = 0;
    
    //Sum of natural number from l to R 
    
    for ( int i=l; i<=r; i++){
        sum=sum+i;
    }
    
    cout<<"THe sum is: "<<sum;
}