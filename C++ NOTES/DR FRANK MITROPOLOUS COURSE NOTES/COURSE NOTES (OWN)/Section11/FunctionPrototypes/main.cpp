// Section 11
// Function Prototypes
//Area of Circle and Volume of Cylinder 

#include <iostream>
using namespace std;
//Those are function protoypes 
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void area_circle();
void volume_cylinder();

const double pi = 3.14159;


int main(){
    area_circle();
    volume_cylinder();
    
    return 0;
}


double calc_volume_cylinder(double radius, double height){
//    return pi * radius * radius;
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius){
    return pi * radius * radius;
}



void area_circle(){
    double radius {};
    cout << "\nEnter the radius of circle: ";
    cin >> radius;
    cout << "\nThe Area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder(){
    double radius {};
    double height {};
    
    cout << "\nEnter the radius of cylinder: " ;
    cin >> radius;
    
    cout << "\nEnter the height of cylinder: ";
    cin >> height;
    
    cout << "\nThe Volume of a cylinder with radius " << radius << " is " << 
    calc_volume_cylinder(radius, height) << endl;
}
