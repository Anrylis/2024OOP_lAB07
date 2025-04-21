# ifndef CYLINDER_CPP
# define CYLINDER_CPP
# include "Cylinder.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double Cylinder :: SurfaceArea(){
    
    return     
        2*M_PI*radius*radius + 2*M_PI*radius*height;
}

double Cylinder :: Volume(){

    return M_PI*radius*radius*height;
}

double Cylinder :: Circumference(){

    return 2*M_PI*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >>  cldr.radius >> cldr.height; 
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed<<std::setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    out << fixed<<std::setprecision(3) << "SurfaceArea: "   <<  cldr.SurfaceArea() << endl;
    out << fixed<<std::setprecision(3) << "Volume: "        <<  cldr.Volume() << endl;
    return out;
}

# endif
