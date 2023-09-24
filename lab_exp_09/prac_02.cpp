/* Write a C++ program to find the diameter, circumference, and area 
of a circle using functions. */
#include <iostream>
#include <math.h>
using namespace std;
double getDiameter(double radius)
{
    return (2 * radius);
}
double getCircumference(double radius)
{
    return (2 * M_PI * radius); 
}
 
double getArea(double radius)
{
    return (M_PI * radius * radius); 
}
 
 
int main()
{
    float radius, diameter, circle, area;
    cout<<"Enter radius of circle: ";
    cin>>radius;
 
    diameter  = getDiameter(radius);      
    circle = getCircumference(radius);  
    area = getArea(radius);          
 
    cout<<"Diameter of the circle: "<<diameter <<" units"<<endl;
    cout<<"Circumference of the circle: "<< circle<<" units"<<endl;
    cout<<"Area of the circle:"<< area<<" sq. units"<<endl;
 
    return 0;
}
 
