//A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.
#include<iostream>
#include<cmath>

using namespace std;

int perfectnumber(int n){
    int sum = 0;
    for(int i = 1; i < sqrt(n); i++){

        //Check for divisor
        if ( n % i == 0){

            //Check divisor is 1 or not 
            if ( i ==1 )
            sum = sum + i;

            else if(i == n/i)
            sum = sum + i;

           else
           sum = sum + i + n/i;

        }
    }

    return sum;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    int result = perfectnumber(n);
    //Condition check
    if (n == result)
    cout<<"it is a perfect number "<<endl;
    else
    cout<<"It is not a perfect number"<<endl;
}