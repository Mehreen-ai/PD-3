#include<iostream>
using namespace std;
 main()
{
string movieName="";
int childTicket,adultTicket,soldAdultTicket,soldChildTicket,totalAmount,percentageAmount,donation,remainingAmount=0;
cout<<"Enter the movie name: ";
cin>>movieName;
cout<<"Enter the adult ticket price: $";
cin>>adultTicket;
cout<<"Enter the child ticket price: $";
cin>>childTicket;
cout<<"Enter the number of adult tickets sold: ";
cin>>soldAdultTicket;
cout<<"Enter the number of child tickets sold: ";
cin>>soldChildTicket;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>percentageAmount;
cout<<"Movie: "<<movieName<<endl;
totalAmount=childTicket*soldChildTicket+adultTicket*soldAdultTicket;
cout<<"Total amount generated from ticket sales: $"<<totalAmount<<endl;
donation=totalAmount/percentageAmount;
cout<<"Donation to charity ("<<percentageAmount<<"%): $"<<donation<<endl;
remainingAmount=totalAmount-donation;
cout<<"Remaining amount after donation: $"<<remainingAmount;





}