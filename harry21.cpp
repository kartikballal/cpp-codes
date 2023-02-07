#include <iostream>
using namespace std;

class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b, int c);
    void getData();

};


void employee::setData(int a, int b, int c)
{
    a=a1;
    b=b1;
    c=c1;

}

int main()
{
    employee harry;
    harry.d=34;
    harry.e=89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
    
}