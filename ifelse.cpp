#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age :"<<endl;
    cin>>age;
    
    if(age<18)
    {
        cout<<"you can not come to my party"<<endl;


    }

    else if(age==18)
    {
        cout<<"you are a kid and you will need a pass to go to the party "<<endl;  
    }
    
    else
    {
        cout<<"you can come to the party"<<endl;

    }
}