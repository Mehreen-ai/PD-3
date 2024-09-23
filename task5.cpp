#include<iostream>
using namespace std;
main()
{
string name=" ";
float days=0;
float targetWeight=0;
cout<<"Enter the name of Person: ";
cin>>name;
cout<<"Enter the target weight loss in kilogram: ";
cin>>targetWeight;
days=targetWeight*15.0;
cout<<name<<" will need "<<days<<" days to lose "<<targetWeight<<" kg of weight by following the doctor's suggestions";



}