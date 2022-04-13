#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#define PI 3.14;
int main(){
    string nolangs;
    string name;
    int a,b,c,d,e,langs;
cout<<"hello what's your name?";
getline (cin,name);
cout<<"hello\t"<<name<<".\n";
cout<<"How many programming languages have you used?:";
getline (cin,nolangs);
stringstream(nolangs)>>langs;
if (langs<1)
    cout<<"kindly read the preface you may prefer\n"
    <<"a more elementary book by the same author.\n";
else if(langs<5)
    cout<<"Welcome to c++ enjoy the book.\n";
else
    cout<<"wow that's awesome let's keep the programming spirit\n";
cout<<"now lets do some maths.\n";
cout<<"enter a number\n";
cin>>a;
cout<<"enter another number\n";
cin>>b;
c=a*b;
//conditional operater(?)
d=(a>b) ? a:b;
cout<<"when multiplied the answer is:\n"
    <<c<<"\tso cool\n";
cout<<d<<":is the larger value\n";
/*double radius,circumcircle;
cout<<"Now enter the radius of a circle to find its circumference\n";
cin>>radius;
circumcircle=PI * radius * 2;*/
cout<<"Enter the starting number:\n";
cin>>e;
while(e>0){
    cout<<e<<",";
    --e;
}
cout<<"FIRE!!"<<"\n";
return 0;
}
