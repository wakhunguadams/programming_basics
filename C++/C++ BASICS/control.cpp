#include<iostream>
using namespace std;
int main ()
{
int n;
int guess;
/*cout << "Enter the starting number";
//cin >> n;
while (n>0) {
cout << n << ", ";
--n;
}
cout << "FIRE!\n";*/
do{
    cout<<"Guess my age\n";
    cin>>guess;
    if (guess <5)
    {
        cout<<"are you kidding me\t"\
        << "try again\n";
    }
    else if(guess <18){
        cout<<"what!!Under 18 noooo!\n";
    }
    else if (guess > 25)
    {
    cout<<" Am not that old\n";
    }
    else
    {
        cout<<"that was a close one\n";
    }
}while(guess != 22);
cout<<"correct";
return 0;
}
