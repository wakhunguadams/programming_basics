#include <iostream>
#include <windows.h>
using namespace std;

void showMenu()
{
	cout<<"**********MENU**********\n";
	cout<<"1. Check balance\n";
	cout<<"2. Deposit\n";
	cout<<"3. Withdraw\n";
	cout<<"4. Exit\n";
	cout<<"************************\n";
}
void loginacc()
{
	cout<<"enter account number";
	
}

int main()
{  int pass1;
	int option;
	double balance =500;
	cout<<"Enter your account PIN:";
	cin>>pass1;
	if(pass1==1234){
	do{
	showMenu();
	cout<<"option:";
	cin>>option;
	switch(option)
	{
		case 1:
			cout<<"Balance is:"<<balance<<endl;
			break;
		case 2:
			cout<<"Deposite amount:";
			double depositAmount;
			cin>>depositAmount;
			balance+=depositAmount;
			cout<<"you successifuly deposited"<<depositAmount<<"\n";
			cout<<"new account balance is:"<<balance<<"\n";
			break;
		case 3:
			cout<<"withdraw amount:\n";
			double withdrawAmount;
			cin>>withdrawAmount;
			if(withdrawAmount<=balance)
			{
				balance-=withdrawAmount;
				cout<<"successfully withdrew"<<withdrawAmount<<"\n";
				cout<<"new account balance is:"<<balance<<"\n";
			}
			else
			{
				cout<<"not enough money\n";
			}
			break;
	}
	}while(option!=4);
	 system ("pause>0");
	}
	else
	{
		cout<<"wrong password";
	}
	system("cls");
}