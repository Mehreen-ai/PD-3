#include<iostream>
using namespace std;
main()
{
int squareMeter,width,height,totalWalls=0;
cout<<"Number of squares meters you can paint: ";
cin>>squareMeter;
cout<<"Width of the single Wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
totalWalls=squareMeter/(width*height);
cout<<"Number of walls you can paint: "<<totalWalls;







}