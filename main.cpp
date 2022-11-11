// Osi Rita Chukwunyere J00967039 Nov
//  Program_page_259
//  Created by Rita Osi on 11/4/22.


#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a, b , c;
    double d,y,z;
    
    cout <<" Please enter the coefficient of x^2 ";
    cin >> a ;
    
    cout << "Please enter the coefficient of x ";
    cin >> b ;
    
    cout << " Please enter the constant term";
    cin >> c ;
    
    d = b^2 - (4 * a * c);
    y = -b + (pow(d,0.5) /(2*a));
    z = -b - (pow(d,0.5) /(2*a));
  
  if (a == 0)
  {
    cout << "invalid entry"
    }
    
   else if (d == 0)
    {
        cout << "This equation has a single (repeated) root" << endl;
        cout <<"The root of the equation is" << y << "twice." << endl;
        
    }
    else if (d > 0)
        
    {
        cout << "This equation has two real roots"<< endl;
        cout << "The roots of the equation are" << y << "and" << z << endl;
        
    }
    
    else if (d < 0)
        
    {
        cout << " This equation has two complex roots"<< endl;
        
    }
    
    return 0;
}

