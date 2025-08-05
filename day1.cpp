// This is my first problem solved in gfg and day one:) 

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int multiplication(int a,int b){
        int c = a * b ;
        return c ;
    }; 
};

int main(){
    solution a;
    int ans = a.multiplication(2,2);
    cout << ans;
    return 0;
}

// ----------------------------------------------------------if else--------
class Solution {
  public:
    string compareNM(int n, int m) {
        if(n==m){
            return "equal";
        }else if(n<m){
            return "lesser";
        }else if(n>m){
            return "greater";
        }
        
    }
};

// ------------------------------------------switch------------

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        switch(choice){
            case 1:{
                double r = arr[0];
                return M_PI*r*r;
            }
            case 2:{
                double l = arr[0];
                double b = arr[1];
                return l*b;
            }
        }
        
    }
};
// ----------------------------for loop in Nth Fibonacci Number ----------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1 || n == 2) {
        cout << 1 << endl; 
        return 0;
    }

    int a = 1;
    int b = 1;
    int fib;

    for (int i = 3; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << b << endl;
    return 0;
}

