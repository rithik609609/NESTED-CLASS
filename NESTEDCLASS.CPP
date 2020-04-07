#include<iostream.h>
#include<conio.h>
class student
{
int roll;
char name[40];
public:
void input()
{
cout<<"Enter the roll no:";
cin>>roll;
cout<<"Entert the Name:";
cin>>name;
}
void show()
{
cout<<"Roll No:"<<roll<<endl;
cout<<"Name:"<<name<<endl;
}
class address
{
char state[30],city[40];
public:
void address_input()
{
cout<<"Enter the State:";
cin>>state;
cout<<"Enter the City:";
cin>>city;
}
void address_output()
{
cout<<"City:"<<city<<endl;
cout<<"State:"<<state<<endl;
}
};
class result
{
int m1,m2,m3,total;
public:
void marks_input()
{
cout<<"Enter the First Marks:";
cin>>m1;
cout<<"Enter the Second Marks:";
cin>>m2;
cout<<"Enter the Third Marks:";
cin>>m3;
total=m1+m2+m3;
}
void marks_output()
{
cout<<"Result:"<<total<<endl;
}
};
};

void main()
{
clrscr();
student ob1;
student::address ob2;
student::result ob3;
ob1.input();

ob2.address_input();

ob3.marks_input();
ob1.show();
ob2.address_output();
ob3.marks_output();
getch();
}
 
