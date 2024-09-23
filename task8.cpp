#include<iostream>
using namespace std;
main()
{
float  sum,totalEarning,vegPrice,fruitPrice=0.0;
int totalKgVeg,totalKgFruit=0;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegPrice;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruitPrice;
cout<<"Enter total kilograms of vegetables: ";
cin>>totalKgVeg;
cout<<"Enter total kilograms of fruits: ";
cin>>totalKgFruit;
sum=totalKgVeg*vegPrice+totalKgFruit*fruitPrice;
totalEarning=sum/1.94;
cout<<"Total earning in Rupees (Rps): "<<totalEarning;









}