#include<iostream>
using namespace std;
int main()
{
    float temp;
    string temp_status;
    cout<<"enter temperature\n";
    cin>>temp;
    temp_status=(temp > 37.5) ? "normal":"abnormal";
    cout<<temp_status;
    return 0;
}
