#include<iostream>
using namespace std;

void validate_choice(char);

main()
{
    char choice;
    char result;
    cout<<"Enter your choice: ";
    cin>>choice;

    validate_choice(choice);

}

void validate_choice(char choice)
{
    
    while(choice=='y')
    {
        cout<<"I am happy!"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
    }


}

