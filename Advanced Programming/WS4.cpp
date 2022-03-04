#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdlib>
#include<fstream>
using namespace std;

char empfile[30]   = "Employee.txt";
char ITfile[20]    = "IT.txt";
char Adminfile[25] = "Admin.txt";
char Prodfile[30]  = "Production.txt";
char Salesfile[30] = "Sales.txt";

class emp
{

     int empid;
     char name[30];
     char address[60];
     int age;

     public:
          char dept[15];
		  void get();
		  char *getdept()
		  {
          return dept;
		  }
};

void emp::get()
{
     cout<<"Enter Employee Id     :  ";

     cin>>empid;
	 cout<<endl;

     cout<<"Enter Name            :  ";

     cin>>name;
	cout<<endl;

     cout<<"Enter Address         :  ";

     cin>>address;
	cout<<endl;

     cout<<"Enter Department Name:(Admin/Sales/IT/Production)  :  ";

     cin>>dept;
	cout<<endl;

     cout<<"Enter Age   :  ";

     cin>>age;
	cout<<endl;

}

void insert()
{
     emp e;
     ofstream fout; //ofstream is a class, fout is its object. It can be used only to write into the file.
    //file is open in the binary, append and nocreate mode.
     fout.open("Employee.txt",ios::in | ios::out | ios::binary | ios::app | ios::ate);

     if (fout.fail())
     {
          cout<<"\n Unable to Open the File!!!";
          goto err;
     }

     e.get(); // accepting the details from the user.
     fout.write((char *)&e,sizeof(e)); //writing into the file with fout object.

     if(fout.tellp()%sizeof(e)==0)
     {
          cout<<"\n Record Inserted !!!"<<endl;
     }
     else
     {
          cout<<"\n Insertion Failed !!!";
          goto err;
     }
     err:
          fout.close();
}

void sort() // This function will insert the record according to department in respective file.
{
     emp e;
     ofstream adm,sal,pro,it; //all files have been created for writing mode.
     ifstream fin; // fin object belongs to the ifstream class, it is used to read the file contents only.

     adm.open(Adminfile, ios::out | ios::binary | ios::app);
     sal.open(Salesfile, ios::out | ios::binary | ios::app);
     pro.open(Prodfile, ios::out | ios::binary | ios::app);
     it.open(ITfile, ios::out | ios::binary | ios::app);
     fin.open(empfile, ios::in | ios::binary);

     while(fin.read((char *)&e,sizeof(e))) //reading the file contents till it reaches end of file.
     {
          if(strcmp(e.getdept(),"Admin")==0)
          {
               adm.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into ADMIN File!!!";
          }
          else if(strcmp(e.getdept(),"Sales")==0)
          {
               sal.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into SALES File!!!";
          }
          else if(strcmp(e.getdept(),"IT")==0)
          {
               it.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into IT File!!!";
          }
          else if(strcmp(e.getdept(),"Production")==0)
          {
               pro.write((char *)&e,sizeof(e));
               cout<<"\n Record Inserted into Production File!!!";
          }
          else
               cout<<"\n Insert Correct Record!!!";
     }
     fin.close();
     adm.close();
     sal.close();
     it.close();
     pro.close();
}

int main()
{
     int n;
     cout<<"\n Enter No. of Records You Want? : ";
     cin>>n;
     for(int i=0; i<n; i++)
     {
          insert();
     }
     sort();
     return 0;
}

