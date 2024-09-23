#include<iostream>
using namespace std;
main()
{
int sum,num1,num2,num3,num4,digit4num=0;
cout<<"Enter a 4-digit number: ";
cin>>digit4num;
num1=digit4num%10;
digit4num=digit4num/10;
num2=digit4num%10;
digit4num=digit4num/10;
num3=digit4num%10;
digit4num=digit4num/10;
num4=digit4num;
sum=num1+num2+num3+num4;
cout<<endl<<"Sum of the individual digits: "<<sum;












}