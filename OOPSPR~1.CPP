//PAYROLL MANAGEMENT SYSTEM - GROUP 4
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

//MULTIPLE INHERITANCE CONCEPT
class Employee                 //base class
{
   public:
   char e_name[70];
   long e_id;
   void employeeinput()  //member function
   {
     cout<<"Please enter Employee's Name :";
     cin>>e_name;
     cout<<"Please enter Employee ID :";
     cin>>e_id;
     cout<<"\n";
   }
   void display()   //member function
   {
     employeeinput();
     cout<<"--------------------------------------------------------------------------------";
     cout<<"\t\t\t\t-:EMPLOYEE DETAILS:-"<<endl;
     cout<<"\n";
     int i=1;
     while(i)
     {
     if(e_id==15510)         //security purpose
     {
       cout<<"PERSONAL DETAILS"<<endl;
       cout<<"Street : Flat no.22, Rose Villa Apartment, Sion(East)"<<endl;
       cout<<"City : Mumbai Suburban"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400071"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 10.04.1989"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Male"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 9988770657"<<endl;
       cout<<"Email ID : riyansh.malhotra@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 15.01.2021"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 6:00 p.m. "<<endl;
       cout<<"\n";
       cout<<"Account Number : 97652148310"<<endl;
       break;
     }
      else if(e_id==15511)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street : Flat no.89, Swastik Park, Chembur"<<endl;
       cout<<"City : Mumbai Suburban"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400071"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 07.09.1970"<<endl;
       cout<<"Age : 51 years"<<endl;
       cout<<"Gender : Female"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 9865231060"<<endl;
       cout<<"Email ID : sakshi.nayak@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 20.04.201"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 3:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 18754621303 "<<endl;
       break;
     }
       else if(e_id==15512)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street :Samarth Art Service, N C Kelkar Road, Opp Shivaji Park Post Office, Dadar (west) "<<endl;
       cout<<"City : Mumbai"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400028"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 20.02.1975"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Male"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 9865320145"<<endl;
       cout<<"Email ID : ramesh.singh@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 26.10.2010"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 3:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 82136574982 "<<endl;
       break;
     }
	else if(e_id==15513)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street : 7, Ruby Palace, Ceaser Road, Opp Filmalaya Studio, Andheri (west)"<<endl;
       cout<<"City : Mumbai"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400058"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 10.04.1989"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Male"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 8542361789"<<endl;
       cout<<"Email ID : piyush.sharma@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 15.01.2018"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 4:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 65412378902 "<<endl;
       break;
     }
       else if(e_id==15514)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street : 51-c/1017, Samta Nagar, Kandivali (west)"<<endl;
       cout<<"City : Mumbai"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400067"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 10.04.1989"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Male"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 9641230057"<<endl;
       cout<<"Email ID : sahil.more@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 15.01.2018"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 3:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 97223164581 "<<endl;
       break;
     }
	else if(e_id==15515)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street : 515, Krishna Bahvan, S.v.p.road, Opera House"<<endl;
       cout<<"City : Mumbai"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400004"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 10.04.1989"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Female"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 9542103357"<<endl;
       cout<<"Email ID : anita.jaiswal@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 15.01.2018"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 6:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 79421356872 "<<endl;
       break;
     }
	else if(e_id==15516)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street : 25, Matrychaya Building, A.gokhale Road, Opera House"<<endl;
       cout<<"City : Mumbai"<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400004"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 10.04.1989"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Male"<<endl;
       cout<<"\n";
       cout<<"CONTACT DETAILS"<<endl;
       cout<<"Phone Number : +91 8855412302"<<endl;
       cout<<"Email ID : rahul.ahuja@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 15.01.2018"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 6:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 34615270189 "<<endl;
       break;
     }
       else if(e_id==15517)         //security purpose
     {
       cout<<"PERSONAL DETAILS "<<endl;
       cout<<"Street : C/6 Tadeshwar Bhavan, Mogul Lane, Near Johnson House, Mahim"<<endl;
       cout<<"City : Mumbai "<<endl;
       cout<<"State : Maharashtra"<<endl;
       cout<<"Pincode : 400016"<<endl;
       cout<<"Country : India"<<endl;
       cout<<"\n";
       cout<<"Date of Birth : 10.04.1989"<<endl;
       cout<<"Age : 29 years"<<endl;
       cout<<"Gender : Male"<<endl;
       cout<<"Phone Number : +91 9542103678"<<endl;
       cout<<"Email ID : yashraj.pillai@gmail.com"<<endl;
       cout<<"\n";
       cout<<"Date ofjoining : 15.01.2018"<<endl;
       cout<<"Working Hours : 9:00 a.m. - 5:00 p.m."<<endl;
       cout<<"\n";
       cout<<"Account Number : 64572135978 "<<endl;
       break;
     }
     else if(i==4)
     {
	cout<<"Too many Attempts!!"<<endl;
	cout<<"Please try after some time";
	delay(3000);
	exit(0);
     }

     else     //when an invalid entry is passed via input
     {
       cout<<"Invalid Entry!!"<<endl;
       cout<<"Please try again"<<endl;
       cout<<"\n";
       i++;
       employeeinput();
     }
     }

 }

};

class Salary     //base class
{
	public:
	char status[50];
	char dept[50];
	int acc_no,e_time,e_apay,e_status;
	long e_bpay;
	void info()           //member function
	{
	    cout<<"Please enter Employee's Department : ";
	    cin>>dept;
	    cout<<"Please verify your Account Number : ";
	    cin>>acc_no;
	}
	void input()          //member function
	{
	    cout<<"ADDITIONAL PAY"<<endl;
	    info();
	    cout<<"\n";
	    cout<<"Choose the no. of hours you worked overtime : "<<endl;
	    cout<<"1) Less than 24 hrs"<<endl;
	    cout<<"2) 24-48 hrs"<<endl;
	    cout<<"3) 49-72 hrs"<<endl;
	    cout<<"4) 73-96 hrs"<<endl;
	    cin>>e_time;
	    if(e_time==1)
	    {
		e_apay=0;
		cout<<"\n";
		cout<<"No Additional Pay Alloted!!"<<endl;
		cout<<"(NOTE : To be eligible for additional pay, you need to work overtime for atleast 24 hours.)"<<endl;
	    }
	    if(e_time==2)
	    {
		e_apay=2000;
		cout<<"ADDITIONAL PAY : 2,000"<<endl;
	    }
	    if(e_time==3)
	    {
		e_apay=4000;
		cout<<"ADDITIONAL PAY : 4,000"<<endl;
	    }
	    if(e_time==4)
	    {
		e_apay=8000;
		cout<<"ADDITIONAL PAY : 8,000"<<endl;
	    }
	}

	void basic()    //member fucntion
	{
			cout<<"BASIC PAY"<<endl;
			info();
			cout<<"\n";
			cout<<"Please select Employee Status :"<<endl;
			cout<<"1.Full-time Employee"<<endl;
			cout<<"2.Part-time Employee"<<endl;
			cout<<"3.Temporary Employee"<<endl;
			cout<<"4.Seasonal Employee"<<endl;
			cin>>e_status;
			cout<<"\n";
			if(e_status==1)
			{
				e_bpay=40000;
				cout<<"Basic Pay : 40,000"<<endl;
			}
			if(e_status==2)
			{
				e_bpay=20000;
				cout<<"Basic Pay : 20,000"<<endl;
			}
			if(e_status==3)
			{
				e_bpay=18500;
				cout<<"Basic Pay : 18,500"<<endl;
			}
			if(e_status==4)
			{
				e_bpay=16000;
				cout<<"Basic Pay : 16,000"<<endl;
			}
			cout<<"(NOTE : The above salary is on the basis of one month)"<<endl;
	}
};


class Deductions   //base class
{
	public:
	int i, a, amount_to_be_deducted;

	void deduct()   //member function
	{
		cout<<"DEDUCTED AMOUNT"<<endl;
		cout << "Please enter your leave days : " ;
		cin >> a;

		for(i=a; i>=3; i++)             //03 has been taken as per monthly basis
		{
			 amount_to_be_deducted=i*500;
			 cout << "Your Deducted amount as per your leaves is : " << amount_to_be_deducted << endl;
			 break;
		}
		while(i<=3)     //if the employee has taken less than or equal to 3 leaves
		{
			amount_to_be_deducted=0;
			cout<<"No Deductions!"<<endl;
			cout<<"\n";
			break;
		}
	}

};

class FinalPay : public Employee, public Salary, public Deductions  //derived class
{
	public:
	int fpay;
	void mis()   //member function
	{
		cout<<"\n";
		cout<<"\t\t\t   FINAL PAYMENT : "<<(e_bpay + e_apay - amount_to_be_deducted);
	}



};



void main()
{
  clrscr();
  int p,ans;
  cout<<"\t\t\t       NEURALINK PVT. LTD. "<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  FinalPay f;
  f.display();
  cout<<"--------------------------------------------------------------------------------";
  cout<<"Display Salary Details :  \t\t 1.Yes \t\t 2.No"<<endl;
  cin>>ans;
	if(ans==1)
	{
		 cout<<"--------------------------------------------------------------------------------"<<endl;
		 cout<<"To avail knowledge w.r.t. your salary, kindly select an option :"<<endl;
		 cout<<"1.Basic Pay"<<endl;
		 cout<<"2.Additional Pay"<<endl;
		 cin>>p;
		if(p==1)
		{
			 cout<<"--------------------------------------------------------------------------------"<<endl;
			 f.basic();
			 cout<<"-------------------------------------------------------------------------------"<<endl;
			 cout<<"\n";
			 f.input();
		}

		 if(p==2)
		{
			 cout<<"--------------------------------------------------------------------------------"<<endl;
			 f.input();
			 cout<<"-------------------------------------------------------------------------------"<<endl;
			 cout<<"\n";
			 f.basic();

		}
		cout<<"--------------------------------------------------------------------------------"<<endl;
		f.deduct();
		cout<<"--------------------------------------------------------------------------------";
		f.mis();
		cout<<"\n"<<endl;
		cout<<"--------------------------------------------------------------------------------";
	}
	if(ans==2)
	{
		cout<<"\t\t\tDATABASE INFORMATION CONCLUDED";
	}
  getch();
}