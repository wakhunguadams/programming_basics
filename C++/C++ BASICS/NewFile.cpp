#include<iostream>
using namespace std;
class Ccircle{
int r;
public:
    void set_value(int a){r=a;}
    int area(){return (r*r*3.14);}
    friend Ccircle duplicate(Ccircle);
}circlea,circleb,circress;
Ccircle duplicate(Ccircle circleaparam)
{
	
	circress.r=circleaparam.r*3;
	return (circress);
}
int main()
{
    circlea.set_value(7);
    circleb=duplicate(circlea);
    cout<<circlea.area();
    cout<<circleb.area();
    return 0;
}