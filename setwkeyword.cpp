#include <iostream>
using namespace std;

int main()
{
    int a=3,b=78,c=1233;
    


    cout<<"the value of a without setw is :"<<a<<endl;
    cout<<"the value of b without setw is :"<<b<<endl;
    cout<<"the value of c without setw is :"<<c<<endl;


    cout<<"outthe value of a is:"<<setw(4)<<a<<end;  //setw keyword ensures spaces .
    cout<<"outthe value of b is:"<<setw(4)<<b<<end;
    cout<<"outthe value of c is:"<<setw(4)<<c<<end;
    return 0;
    
}