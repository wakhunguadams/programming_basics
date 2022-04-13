#include<iostream>
using namespace std;
int adding (int,int);
void duplicate (int& a, int& b, int& c)
{
a*=2;
b*=2;
c*=2;
}
int operate (int a, int b)
{
return (a*b);
}
float operate (float a, float b)
{
return (a/b);
}
int main()
{
    int z,h = 5,t=6;
    float g=3.0,j=1.2;
    z = adding (4,10);
    cout<<z<<"\n";
   int x=1, y=3, k=7;
duplicate (x, y, k);
cout << "x=" << x << ", y=" << y << ",\
z=" << k<<"\n";
cout<<operate(h,t)<<"\n";
cout<<operate(g,j)<<"\n";
    return 0;
}
int adding (int a, int b)
{
    int r;
    r=a+b;
    return (r);
}
