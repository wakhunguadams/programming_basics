#include <iostream>
#include <canio.h>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>
void menu();
void pascode();
void cpascode();

using namespace std;

class one
{
	public;
	virtual void get()=0;
	virtual void show()=0;
}

class info:public one
{
	public;
	char name[50], time[50];
	int num, age;
	void get()
	{
		system("cls");
		cin.sync();
		cout<<"\n Enter the patient name =";
		cin.getline(name,50);
		cout<<"\nEnter Age =";
		cin>>age;
		cout<<"\nEnter Appointment No=";
		cin>>num;
	}
	void show()
	{
		cout<<"\nName ="<<name;
		cout<<"\nAge ="<<age;
		cout<<"\nNo ="<<num;
		cout<<"\nTime"<<time;
	}
};
class rana:public info
{
	public;
	info a1;
	void get()
	{
		system("cls")
		ofstream out("Rana.txt", ios:: app|iso::binary);
		a1.get();
		out.write((char*)&a1,sizeof(info));
		out.close();
		cout<<"Your Entry Has Been Saved";
		getch();
		menu();
		
	}
};
