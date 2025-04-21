# ifndef CYLINDER_CPP
# define CYLINDER_CPP
# include "Cylinder.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double Cylinder :: SurfaceArea(){
    
    return     
        1.0*2*radius*radius*M_PI + 2*M_PI*radius*height;
}

double Cylinder :: Volume(){

    return 1.0*M_PI*radius*radius*height;
}

double Cylinder :: Circumference(){

    return 1.0*2*M_PI*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >>  cldr.radius >> cldr.height; 
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    cout << fixed<<std::setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    cout << fixed<<std::setprecision(3) << "SurfaceArea: "   <<  cldr.SurfaceArea() << endl;
    cout << fixed<<std::setprecision(3) << "Volume: "        <<  cldr.Volume() << endl;
    return out;
}

# endif
