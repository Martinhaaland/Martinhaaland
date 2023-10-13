/*Write a program to ask radius of circle and calculate the area. Formula: Area = pi*r*r where
r is radius of circle.*/
#include <iostream>

using namespace std;
int main(){
    float area;
    float radius;
    cout << "Enter the radius" << endl;
    cin >> radius;
    area = (radius * radius) * 3.14;
    cout << area << endl;
}