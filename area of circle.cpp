#include<iostream>
using namespace std;
class areaofcircle
{
    float r,area;

public:

    void getdata()
    {
        cin>>r;

    }
    void calculate()
    {
        area=3.14*r*r;
    }
    void putdata()
                 {
                     cout<<area;
                 }
};

int main()
{
    areaofcircle c1;
    c1.getdata();
    c1.calculate();
    c1.putdata();
}
