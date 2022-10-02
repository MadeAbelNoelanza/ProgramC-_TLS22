#include <iostream>
using namespace std;
int main()
{
cout<<"Calculate the Surface Area and Volume of sphere"<<endl;
 cout<<"-----------------------------------------------"<<endl;
 
 float phi=3.14,volume,surface_area,radius;
 cout<<"Input radius of sphere :"; cin>>radius;cout<<endl;
 
 volume=phi*radius*radius*radius*4/3;
 surface_area=4*phi*radius*radius;
 
 cout<<"Volume And Surface Area of sphere with radius :"<<radius<<endl;
 cout<<"Volume :"<<volume<<endl;
 cout<<"Surface Area  :"<<surface_area<<endl;
}