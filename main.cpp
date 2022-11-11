// Osi Rita Chukwunyere J00967039 Nov
//  Program_page_259
//  Created by Rita Osi on 11/4/22.


#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double a, b , c;
    double d,y,z;
    
    
    cin >> a ;
    
    cin >> b ;
    
    cin >> c ;
    
    d = pow(b,2) - (4.0 * a * c);
    y = (-b + (sqrt(d))) /(2*a);
    z = (-b - (sqrt(d))) /(2*a);
  
  if (a == 0)
  {
    cout << "Invalid entry";
    }
    
   else if (d == 0)
    {
        
        cout <<"The single root is " << y <<  endl;
        
    }
    else if (d > 0)
        
    {
        cout << "Two real roots"<< endl;
        cout << "- First root " << y <<  endl;
        cout << "- Second root " << z << endl;
    }
    
    else if (d < 0)
        
    {
        cout << "Complex roots"<< endl;
        
    }
    
    return 0;
}
     
