#include<iostream>
using namespace std;
main()
{
int initialVelocity,finalVelocity,time,Acceleration=0;
cout<<"Enter Intial Velocity (m/s): ";
cin>>initialVelocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>Acceleration;
cout<<"Enter Time (s): ";
cin>>time;
finalVelocity=Acceleration*time+initialVelocity;
cout<<"Final Velocity (m/s): "<<finalVelocity;




}