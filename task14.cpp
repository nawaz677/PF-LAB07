#include<iostream>
using namespace std;

float calculate_money(int,int,int);

int main()
{
    int age;
    int w_machine;
    int toy_price;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of Washing Machine: ";
    cin>>w_machine;

    calculate_money(age,w_machine,toy_price);

}

float calculate_money(int age,int w_machine,int toy_price)
{   
    int sum_1=0;
    int sum_2=0;
    int deduction=0;
    int total_money_saved=0;
    int remaining_money=0;
    int add_money=0;

    for(int i=1;i<=age;i=i+2)
    {
        cout<<"Enter the price of toy: ";
        cin>>toy_price;
        sum_1=sum_1+toy_price;
    }

    for(int j=2;j<=age;j=j+2)
    {
        sum_2=sum_2+10;
        deduction=deduction+1;
        sum_2=sum_2-1;
    }

    total_money_saved=sum_1+sum_2;
    remaining_money=total_money_saved-w_machine;

    if(total_money_saved>w_machine)
    {
        cout<<"Yes!"<<endl<<remaining_money;
    }

    else if(total_money_saved<w_machine)
    {
        add_money=w_machine-total_money_saved;
        cout<<"No!"<<endl<<add_money;
    }


}

