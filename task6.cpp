#include<iostream>
using namespace std;
main()
{
float size,costOFbag,costOFfertilizer,area,costPerPound,costPerArea=0;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of bag: $";
cin>>costOFbag;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
costPerPound=costOFbag/size;
costPerArea=costPerPound*area;
cout<<"Cost of fertilizer per pound: $"<<costPerPound<<endl;
cout<<"Cost of fertilizer per square foot: $"<<costPerArea;





}