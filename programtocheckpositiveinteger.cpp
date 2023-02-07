//Program to print positive number entered by the user 
//if the user enters a negative number , it is skipped
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<" Enter an integer :";
    cin>>number;

    //checks if number is positive 
    if(number> 0 ){
        cout<<"you entered a positive integer:"<<number<<endl;

    }
    cout<<"this statement is always executed";

    return 0;
    
}