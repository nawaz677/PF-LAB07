#include<iostream>
using namespace std;

void print_table(int);

main()
{
    int num;
    cout<<"Enter the number for table: ";
    cin>>num;

    print_table(num);

}

void print_table(int num)
{

    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }

}