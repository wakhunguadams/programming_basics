#include<iostream>
using namespace std;
class Ccircle{
int r;
public:
    void set_value(int a){r=a;}
    int area(){return (a*a*3.14);}
}circlea,circleb;
int main()
{
    circlea.set_value(7);
    circleb.set_value(14);
    circlea.area();
    circleb.area();
    return 0;
}
