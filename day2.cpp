//day-2----problem number one------------------
#include <iostream>
using namespace std;

int main(){

  int m=1;
  int i=10;
  while( i >= 1){
    int a = m*i;
    cout << a << endl;
    i--;
  }
}
// here the main confusion for is using >=,=< symbols . first try*-----> for loop in multiple table  --> reverse --> while loop
// ---------------------------------------------------
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        a = a + 1;
        b = b + 2;
        return {a, b};  // Return a vector of two integers
    }
};
/* pass by value ----> not change the value
   pass by reference which also change the true vale using the syntax (int &b)
   <vector>A vector in C++ is a dynamic array from the Standard Template Library (<vector>), 
   which can store a list of values */