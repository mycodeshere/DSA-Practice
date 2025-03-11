//bundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

//Method 1 : By traversal from 1 to n-1;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;
    int sum=0; //Variable to find the sum of divisors

    //Finding all factors of number 
    for ( int i = 1; i<n; i++){
        if ( n % i ==0){
            sum = sum + i;
        }
    }
    if ( sum > n){
        cout<<"It's an abundant number";
    }
    else{
        cout<<"It's not an abundant number.";
    }
}


//Method 2

#include<iostream>
#include<cmath>

using namespace std;

int Abundantnum(int n){
    //Iterate of root n only
     int sum=0;
    for ( int i=1; i<sqrt(n); i++){

        //Checking divisor
        if ( n % i == 0){

        //1 is factor of all so needed to be added
        if (i==1)
        sum= sum+i;
        
        else if(i==n/i)
        sum = sum + i;

        else{
            sum = sum +  i + n/i;
        }
    }
    }
    return sum;
}
int main(){
    while(1){
        int n;
        cout<<"Enter the number : ";
        cin>>n;
        cout<<endl;

        int sum = Abundantnum(n);

        if ( sum > n){
                    cout<<"It's an abundant number"<<endl;
                }
                else{
                    cout<<"It's not an abundant number."<<endl;
                }
}
    }
