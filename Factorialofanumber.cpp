#include<iostream>
using namespace std;

long long Factorial(int n){
    if(n==0||n==1)
    return 1;
    else
    long long result = n * Factorial(n-1);

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    long long result = Factorial(n);
    cout<<"The factorial of "<<n<<" is "<<result;
    return 0;
}