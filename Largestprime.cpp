
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  bool Isprime(int n){
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

    int largestPrimeFactor(int n) {
        int x; int y=0;
    //Get all factor
    for ( int i=1; i<=n;i++){
        if(i)
        if(n%i==0){
            //Check karo prime hai ya nahi
            x =Isprime(i);
        //Agar prime hai to i ki value store kar do;
        if (x==1){
            y = i;
        }
        
        }
    }
    return y;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends