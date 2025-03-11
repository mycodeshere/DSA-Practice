//We are given with an integer number and need to print “True” if it is, otherwise “False”.
#include<iostream>
using namespace std;

bool Perfectsquare(int n){

    //Agar i*i == n hogya toh perfect square otherwise not 
    //Method 1 : sqrt(n) tak hi iterate karengy
    //Method 2 : sqrt(n) find karo, Square kro, then agar wo n ke equal hai to perfect square
    //Method 3 : sqrt(n) ceiling value aur floor value agar same hai toh perfect square hai.

    for ( int i = 1; i<= n; i++){
        if(i*i==n)
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    int result = Perfectsquare(n);
    if(result == 1)
    cout<<"Given number is a perfect square";
    else
    cout<<"Given number isn't a perfect square";
}