#include <iostream>
using namespace std;
//whitespace package
#include <iomanip>
using std::setw;
 
int main () {


   // n is an array of 100 integers
   double n[ 100 ]; 
 
   // initialize elements of array n to 0    
   for ( int i = 1; i < 100; i++ ) {
      n[ i ] =  0; 
   }

   //what is input 1?
    cout << "Enter x_1" << endl;
    cin >> n[1];
   
   //jam ni's into function and loop
   for ( int i = 1; i < 100; i++ ) {
      n[ i + 1 ] =  ((n[ i ]) + 2)^2; // set element at location i+1 to f(x)= (x+2)^2
   }
   
   //header
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value                      
   for ( int j = 1; j < 100; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}
