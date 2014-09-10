//factory managment*********************
//header files
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
class factory                //class
{
private:
	  int num1,num2,num3,num4,num5,num6;        //variable decleareation
	  int a_coast,p_coast,salary,ad_coast,sec_coast,m_coast;
	  int dd,mm,yy,dd1,mm1,yy1,dd2,mm2,yy2;
	  char g_name[20],d_name[20],ad_name[20],sec_name[20];
	  char r_name[20],w_name[20];
	  char m_name[20];
	  int flag;
public:
     void removef();
     void sales();
     void purchase();
     void worker();
     void maintenance();
     void ad();                 //fuctions
     void secure();
     void display();
     void modify();
    // void total coast();
};
	void factory:: removef()
	{
	int x=1;
	cout<<"\n\n\n\n\n                   File is removing\n\n\n";
		while(x<20)
		{
		cout<<"!   " ;
		delay(750);
		x++;
		}
	remove("fact.txt");
	cout<<"\n\n\n\n\n\n\n\t\tFile Deleted";
	}
	void factory::sales()             //fuction coding
	{
	clrscr();
	cout<<"\nEnter No.= ";
	cin>>num1;
	cout<<"\nName of the garment  ";
	gets(g_name);
	cout<<"\nName of delear  ";
	gets(d_name);
	cout<<"\nDate of selling  ";
	cout<<"\nDay=   ";
	cin>>dd;
	cout<<"\nMonth= ";
	cin>>mm;
	cout<<"\nEnter year=  ";
	cin>>yy;
	cout<<"\nTotal coast of selling  ";
	cin>>a_coast;
	flag=1;
	fstream file;
	file.open("fact.txt",ios::out|ios::app|ios::binary) ;
	file.write((char*)this,sizeof(factory));
	file.close();
	cout<<"\n Record is saved";
       }

	void factory::purchase()
	{
	clrscr();
	cout<<"\nEnter No.= ";
	cin>>num2;
	cout<<"\n Name of the row material";
	gets(r_name);
	cout<<"\n Date of Purchasing\n";
	cout<<"Day=";
	cin>>dd1;
	cout<<"Month=";
	cin>>mm1;
	cout<<"Enter year=";
	cin>>yy1;
	cout<<"Total coast of purchasing";
	cin>>p_coast;
	flag=1;
	fstream file;
	file.open("fact.txt",ios::out|ios::app|ios::binary) ;
	file.write((char*)this,sizeof(factory));
	file.close();
	cout<<"\n Record is saved";
	}
	void factory::worker()
	{
	clrscr();
	cout<<"\nEnter Batch No.=   ";
	cin>>num3;
	cout<<"\n Name of the worker=  ";
	gets(w_name);
	cout<<"Salary of the worker per month";
	cin>>salary;
	fstream file;
	file.open("fact.txt",ios::out|ios::app|ios::binary) ;
	file.write((char*)this,sizeof(factory));
	file.close();
	cout<<"\n Record is saved";
	}
	void factory::maintenance()
	{
	clrscr();
	cout<<"\nEntry No.= ";
	cin>>num4;
	cout<<"\n Name of maintenance work";
	gets(m_name);
	cout<<"\n Date of maintenance work\n";
	cout<<"Day=";
	cin>>dd2;
	cout<<"Month=";
	cin>>mm2;
	cout<<"Enter year=";
	cin>>yy2;
	cout<<"Total coast of maintenance";
	cin>>m_coast;
	fstream file;
	file.open("fact.txt",ios::out|ios::app|ios::binary) ;
	file.write((char*)this,sizeof(factory));
	file.close();
	cout<<"\n Record is saved";
	}
	void factory::ad()
	{
	clrscr();
	cout<<"\nEntry No.= ";
	cin>>num5;
	cout<<"\n Name of ad company";
	gets(ad_name);
	cout<<"Total coast of ad per month";
	cin>>ad_coast;
	fstream file;
	file.open("fact.txt",ios::out|ios::app|ios::binary) ;
	file.write((char*)this,sizeof(factory));
	file.close();
	cout<<"\n Record is saved";
	}
	void factory::secure()
	{
		clrscr();
		cout<<"\nEntry No.= ";
		cin>>num6;
		cout<<"\n Name of security agency ";
		gets(sec_name);
		cout<<"Total coast of ad per month";
		cin>>sec_coast;
		fstream file;
		file.open("fact.txt",ios::out|ios::app|ios::binary) ;
		file.write((char*)this,sizeof(factory));
		file.close();
		cout<<"\n Record is saved";
	}
	void factory::display()
	{
	clrscr();
	int ch;
		do
		{
		clrscr();
		cout<<"  \n\n\n  -------------#####MENU######------------\n\n";
		cout<<"        1.Selling\n\n";
		cout<<"        2.purchase\n\n";
		cout<<"        3.Worker\n\n ";
		cout<<"       4.maintenance\n\n ";
		cout<<"       5.advertisment\n\n";
		cout<<"        6.security\n\n";
		cout<<"        7.exit ";
		cout<<"\n\n\n Enter your choice   " ;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
			clrscr();
			int i=4;
			cout<<"***************************************************************************\n";
			cout<<"   Entry No.";
			cout<<"   Garment Name";
			cout<<"   Delear Name";
			cout<<"   Date of Selling";
			cout<<"   Selling cost";
			cout<<"\n************************************************************************";
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
				while(file.read((char*)this,sizeof(factory)))
				{
				    if(flag==1)
				    {
					gotoxy(3,i);
					cout<<num1;
					gotoxy(14,i);
					puts(g_name);
					gotoxy(36,i) ;
					puts(d_name);
					gotoxy(45,i);
					cout<<dd<<"/"<<mm<<"/"<<yy;
					gotoxy(65,i);
					cout<<a_coast;
				    }
				    i++;
				}
				file.close();
			}

			break;
			case 2:
			{
				clrscr();
				 int i=4;
				  cout<<"*******************************************************************************\n";
				  cout<<"   Entry No.";
				  cout<<"     Roaw Material Name";
				  cout<<"     Date of purchasing";
				  cout<<"     Purchesed  cost";
				  cout<<"\n*******************************************************************************";
				fstream file;
				file.open("fact.txt",ios::in|ios::binary);
					while(file.read((char*)this,sizeof(factory)))
					{
						if(flag==1)
						{
						gotoxy(3,i);
						cout<<num2;
						gotoxy(14,i);
						puts(r_name);
						gotoxy(40,i) ;
						cout<<dd1<<"/"<<mm1<<"/"<<yy1;
						gotoxy(65,i);
						cout<<p_coast ;
						}
						i++;
					}
					file.close();
					}
					break;
			case 3:
			{
			clrscr();
			int i=4;
			cout<<"****************************************************************************\n";
			cout<<"   Entry No.";
			cout<<"     Worker Name";
			cout<<"     salary per month";
			cout<<"\n****************************************************************************";
			fstream file;
			file.open("fact.txt",ios::in|ios::out|ios::binary);
				while(file.read((char*)this,sizeof(factory)))
				{
				  if(flag==1)
				  {
					gotoxy(3,i);
					cout<<num3;
					gotoxy(14,i);
					puts(w_name);
					gotoxy(36,i) ;
					cout<<salary;
				  }
				  i++;
			      }
			      file.close();
			}
			break;
			case 4:
			{
			clrscr();
			int i=4;
			cout<<"******************************************************************************\n";
			cout<<"   Entry No.";
			cout<<"      maintenance work";
			cout<<"      Date ";
			cout<<"      coast ";
			cout<<"\n*****************************************************************************";
			fstream file;
			file.open("fact.txt",ios::in|ios::out|ios::binary);
				while(file.read((char*)this,sizeof(factory)))
				{
				    if(flag==1)
				    {
					gotoxy(3,i);
					cout<<num4;
					gotoxy(14,i);
					puts(m_name);
					gotoxy(36,i) ;
					cout<<dd1<<"/"<<mm1<<"/"<<yy;
					gotoxy(50,i);
					cout<<m_coast;
				    }
				i++;
			}
			file.close();
			}
			break;
			case 5:
			{
			clrscr();
			int i=4;
			cout<<"*********************************************************************************\n";
			cout<<"   Entry No.";
			cout<<"     Ad Company";
			cout<<"     Ad cost per Month";
			cout<<"\n*********************************************************************************";
			fstream file;
			file.open("fact.txt",ios::in|ios::out|ios::binary);
				while(file.read((char*)this,sizeof(factory)))
				{
				   if(flag==1)
				   {
					gotoxy(3,i);
					cout<<num5;
					gotoxy(14,i);
					puts(ad_name);
					gotoxy(36,i) ;
					cout<<ad_coast;
				   }
				i++;
				}
				file.close();
			}
			break;
			case 6:
			{
			clrscr();
			int i=4;
			cout<<"*********************************************************************\n";
			cout<<"   Entry No.";
			cout<<"     Name of security agency";
			cout<<"     Payment of agency per month";
			cout<<"\n***************************************************************************";
			fstream file;
			file.open("fact.txt",ios::in|ios::out|ios::binary);
				while(file.read((char*)this,sizeof(factory)))
				{
					if(flag==1)
					{
					gotoxy(3,i);
					cout<<num6;
					gotoxy(14,i);
					puts(sec_name);
					gotoxy(36,i) ;
					cout<<sec_coast;
					}
					i++;
				}
				file.close();
			}
			break;
			case 7:
			{
			return;
			break;
			}
			default:
			{
			cout<<"wrong choice???????";
			break;
			}
		}
       }     while(getch()!=7);
	getch();
}
      void factory::modify()
      {
	clrscr();
	int choice;
	int no;

	do
		{
		clrscr();
		cout<<"  \n\n\n  -------------#####Select Department######------------\n\n";
		cout<<"        1.Selling\n\n";
		cout<<"        2.purchase\n\n";
		cout<<"        3.Worker\n\n ";
		cout<<"       4.maintenance\n\n ";
		cout<<"       5.advertisment\n\n";
		cout<<"        6.security\n\n";
		cout<<"        7.exit ";
		cout<<"\n\n\n Enter your choice   " ;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
			clrscr();
			cout<<"Plz give entry no.";
			cin>>no;
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
			while(file.read((char*)this,sizeof(factory)))
			{
			   if(num1==no)
			   {
				cout<<"********************************************************************************\n";
				cout<<"\n   Entry No."<<num1;
				cout<<"\n   Garment Name"<<g_name;
				cout<<"\n   Delear Name\n"<<d_name;
				cout<<"\n   Date of Selling\n"<<dd<<"/"<<mm<<"/"<<yy;
				cout<<" \n  Selling cost\n"<<a_coast;
				cout<<"\n********************************************************************************\n";
			   }
			}
			file.close();
			file.open("fact.txt",ios::in|ios::out|ios::ate|ios::binary);
				int location=(no-1)*sizeof(factory);
				if(file.eof())
				file.clear();
				file.seekp(location);
				{
				cout<<"Modified Entry No ";
				cin>>num1;
				cout<<"\n Garment Name ";
				gets(g_name);
				cout<<"\n Delear Name ";
				gets(d_name);
				cout<<"Date";
				cout<<"dd= ";
				cin>> dd;
				cout<<"mm= ";
				cin>>mm;
				cout<<"yy= ";
				cin>>yy;
				cout<<"coast of purchaising" ;
				cin>>a_coast;
				file.write((char*)this,sizeof(factory));
				file.close();
				}
			}
			break;
			case 2:
			{
			clrscr();
			cout<<"Plz give entry no.";
			cin>>no;
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
			while(file.read((char*)this,sizeof(factory)))
			{
			   if(num2==no)
			    {
				cout<<"*******************************************************************************\n";
				cout<<"   Entry No."<<num2;
				cout<<"     Roaw Material Name"<<r_name;
				cout<<"     Date of purchasing"<<dd<<"\n"<<mm<<"\n"<<yy;
				cout<<"     Purchesed  cost"<<p_coast;
				cout<<"\n*******************************************************************************";
			    }
		       }
			file.close();
			file.open("fact.txt",ios::in|ios::out|ios::ate|ios::binary);
				int location=(no-1)*sizeof(factory);
				if(file.eof())
				file.clear();
				file.seekp(location);
				{
				cout<<"Modified Entry No";
				cin>>num2;
				cout<<"\n Material Name";
				gets(m_name);
				cout<<"Date"<<"dd/mm/yy";
				cin>> dd>>"/">>mm>>"/">>yy;
				cout<<"coast of purchaising";
				cin>>p_coast;
				file.write((char*)this,sizeof(factory));
				file.close();
				}
			}

			break;
			case 3:
			{
			clrscr();
			cout<<"Plz give entry no.";
			cin>>no;
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
				while(file.read((char*)this,sizeof(factory)))
				{
				   if(num3==no)
				   {
				    clrscr();
				    cout<<"****************************************************************************\n";
				    cout<<"   Entry No."<<num3;
				    cout<<"     Worker Name"<<w_name;
				    cout<<"     salary per month"<<salary;
				    cout<<"\n****************************************************************************";
				    }
				}
			file.close();
			file.open("fact.txt",ios::in|ios::out|ios::ate|ios::binary);
				int location=(no-1)*sizeof(factory);
				if(file.eof())
				file.clear();
				file.seekp(location);
				{
				cout<<"Modified Entry No";
				cin>>num3;
				cout<<"\n Worker Name";
				gets(w_name);
				cout<<"salary per month";
				cin>>salary;
				file.write((char*)this,sizeof(factory));
				file.close();
				}
			    }
			break;
			case 4:
			{
			clrscr();
			cout<<"Plz give entry no.";
			cin>>no;
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
				while(file.read((char*)this,sizeof(factory)))
				{
				   if(num4==no)
				   {

					clrscr();
					cout<<"******************************************************************************\n";
					cout<<"   Entry No."<<num4;
					cout<<"      maintenance work"<<w_name;
					cout<<"      Date "<<dd1<<"/"<<mm1<<"/"<<yy1;
					cout<<"      coast "<<m_coast;
					cout<<"\n*****************************************************************************";
				  }
				}
			file.close();
			file.open("fact.txt",ios::in|ios::out|ios::ate|ios::binary);
				int location=(no-1)*sizeof(factory);
				if(file.eof())
				file.clear();
				file.seekp(location);
				{
				cout<<"Modified Entry No";
				cin>>num3;
				cout<<"\n Maintenance Name";
				gets(w_name);
				cout<<"Date ";
				cin>>dd1>>"/">>mm1>>"/">>yy1;
				cout<<"\nMaintenance cost";
				cin>>m_coast;
				file.write((char*)this,sizeof(factory));
				file.close();
				}
			 }
			break;
			case 5:
			{
			clrscr();
			cout<<"Plz give entry no.";
			cin>>no;
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
				while(file.read((char*)this,sizeof(factory)))
				{
					if(num1==no)
					{
					clrscr();
					cout<<"*********************************************************************************\n";
					cout<<"   Entry No."<<num4;
					cout<<"     Ad Company"<<ad_name;
					cout<<"     Ad cost per Month"<<ad_coast;
					cout<<"\n*********************************************************************************";
					}
				}
				file.close();
				file.open("fact.txt",ios::in|ios::out|ios::ate|ios::binary);
				int location=(no-1)*sizeof(factory);
				if(file.eof())
				file.clear();
				file.seekp(location);
				{
				cout<<"Modified Entry No";
				cin>>num4;
				cout<<"\n Ad company ";
				gets(ad_name);
				cout<<"\nAdvertisment cost";
				cin>>ad_coast;
				file.write((char*)this,sizeof(factory));
				file.close();
				}
			  }
			  break;
			case 6:
			{
			clrscr();
			cout<<"Plz give entry no.";
			cin>>no;
			fstream file;
			file.open("fact.txt",ios::in|ios::binary);
			file.seekg(0,ios::beg);
				while(file.read((char*)this,sizeof(factory)))
				{
				   if(num6==no)
				   {

				clrscr();
				cout<<"*********************************************************************\n";
				cout<<"   Entry No."<<num6;
				cout<<"     Name of security agency"<<sec_name;
				cout<<"     Payment of agency per month"<<sec_coast;
				cout<<"\n***************************************************************************";
				   }

			      }
			       file.close();
				file.open("fact.txt",ios::in|ios::out|ios::ate|ios::binary);
				int location=(no-1)*sizeof(factory);
				if(file.eof())
				file.clear();
				file.seekp(location);
				{
				cout<<"Modified Entry No";
				cin>>num6;
				cout<<"\n security agency ";
				gets(sec_name);
				cout<<"\nAdvertisment cost";
				cin>>sec_coast;
				file.write((char*)this,sizeof(factory));
				file.close();
				}
			  }

			break;
			case 7:
			{
			return;
			break;
			}
			default:
			{
			cout<<"wrong choice???????";
			break;
			}
		}
       }     while(getch()!=7);
	getch();
}




void main()
{
clrscr();
factory f;
int ch;
{
textbackground(8);
cout<<"\n\n\n\n\n";
cout<<"\t~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
cout<<"\t\t\t********JK Pvt. Ltd.*********";
cout<<"\n\n";
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tA GARMENT CORPORATION..........\n\n";
cout<<"\t~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
getch();
}
clrscr();
{
textbackground(6);
cout<<"\n\n\n\n\n";
cout<<"     ~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
cout<<"\n\n\n                     WELCOME TO GARMENT INDUSTRY      \n\n\n";
cout<<"     ~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
getch();
}
clrscr();
	do
	{
		clrscr();
		cout<<"\n\n\n             ###################  MENU ###################\n\n\n";
		cout<<"\n          		1.Sales Department\n\n";
		cout<<"\n          		2.Purchasing Department\n\n";
		cout<<"\n          		3.workers Department\n\n";
		cout<<"\n         	        4.Maintenance Department\n\n";
		cout<<"\n         	        5.Advertisment Department\n\n";
		cout<<"\n         	        6.Security Department\n\n";
		cout<<"\n          		7.Display\n\n";
		cout<<"\n          		8.modification\n\n";
		cout<<"\n          		9.Delete all records\n\n";
		cout<<"\n          		10.exit\n\n";
		cout<<"\n\n\n\n    		Enter your choice==";
		cin>>ch;
				switch(ch)
				{
				case 1:
				clrscr();
				f.sales();
				break;
				case 2:
				clrscr();
				f.purchase();
				break;
				case 3:
				clrscr();
				f.worker();
				break;
				case 4:
				clrscr();
				f.maintenance();
				break;
				case 5:
				clrscr();
				f.ad();
				break;
				case 6:
				clrscr();
				f.secure();
				break;
				case 7:
				clrscr();
				textbackground(2);
				f.display();
				break;
				case 8:
				clrscr();
				textbackground(5);
				f.modify();
				break;
				case 9:
				clrscr();
				f.removef();
				break;
				case 10:
				textbackground(CYAN);
				textcolor(1);
				clrscr();
				cout<<"\n\n\n\n\n*************ConCept & Developed By*****"   ;
				cout<<"\n\n\n\n **************    JITENDRA KUMAR KHASDEV";
				cout<<"\n\n\n\n\n\n\n";
				cout<<"****************Specially Thanks to";
				cout<<"\n**********************Miss Smriti Jain ";
				cout<<"\n******Also supported by";
				cout<<"\n******************1.Jai sharma";
				cout<<"\n***************** 2.Joel varghese";
				cout<<"\n******************3.Nalin kumar";
				getch();
				exit(0);
				default:
				cout<<"                                   Wrong choice????????";
				}
	  }
	while(getch()!=7);
getch()  ;
}
