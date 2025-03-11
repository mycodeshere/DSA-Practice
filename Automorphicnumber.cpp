//An Automorphic number is a special number, whose’s square ends with the same digits as the number itself
#include<iostream>
using namespace std;
int main(){
    while(1){
        int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    int last1 = n%10;
    int last2 =(n*n)%10;
    if(last1 == last2)
    cout<<"It is an Automorphic Number.";
    else{
        cout<<"It's not an automorphic Number.";
    }
    
    }
    
}