#include<iostream>
using namespace std;
int main()
{    int age;
    cout<<"please enter your age\n";
    cin>>age;
    switch(age)
    {
    case 10:
        cout<<"wow";
        break;
    case 2:
        cout<<"okay";
        break;
    default:
    cout<<"unknown";
    }
    return 0;
}
