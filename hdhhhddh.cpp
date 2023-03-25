 #include<iostream>
#include<iomanip>
using namespace std;

class weather_report
{
	public:
	int day;
	float hightemp;
	float lowtemp;
	float amountrain;
	float amountsnow;
	
		void getdata();
		void display();
	weather_report()
	{
		day=99;
		hightemp=999;
		lowtemp=-999;
		amountrain=0;
		amountsnow=0;
	}
	void_display()
{
	
		cout<<setw(10)<<day<<setw(10)<<hightemp<<setw(10)<<lowtemp<<setw(10)<<amountrain<<setw(10)<<amountsnow<<"\n";
}
     void_getdata()
{
	cout<<"\nEnter all fields. ";
	cout<<"\n\tEnter day : ";
	cin>>day;
	cout<<"\n\tEnter High temp : ";
	cin>>hightemp;
	cout<<"\n\tEnter low temp : ";
	cin>>lowtemp;
	cout<<"\n\tEnter amount Rain : ";
	cin>>amountrain;
	cout<<"\n\tEnter amount snow : ";
	cin>>amountsnow;
}

};

int main()
{
	float p;
	int ch;
	char ch1;
	weather_report w[31];
	do
	{
		cout<<"\n\t1. Prompt data\n\t2. Display.";
		cout<<"\n\n\tEnter your choice : ";
		cin>>ch;
		cout<<"\nFor how many days you want to enter field   :  ";
		cin>>p;

		switch(ch)
		{
			case 1:
				for(int i=0;i<p;i++)
				{
					w[i].getdata();
				}	 
				break;
			case 2:
			float avghightemp,avglowtemp,avgrain,avgsnow;
				int a=0,b=0,c=0,d=0;
				cout<<setw(10)<<"DAY "<<setw(10)<<"HIGH TEMP"<<setw(10)<<"LOW TEMP"<<setw(10)<<"AMOUNT RAIN"<<setw(10)<<"AMOUNT SNOW"<<"\n";
				for(int i=0;i<p;i++)
				{
//                   avghightemp,avglowtemp,avgrain,avgsnow;
//				int a=0,b=0,c=0,d=0;
//				cout<<setw(10)<<"DAY "<<setw(10)<<"HIGH TEMP"<<setw(10)<<"LOW TEMP"<<setw(10)<<"AMOUNT RAIN"<<setw(10)<<"AMOUNT SNOW"<<"\n";
//				for(int i=0;i<p;i++)
//				{
					w[i].display();
					a=a+w[i].hightemp;
					b=b+w[i].lowtemp;
					c=c+w[i].amountrain;
					d=d+w[i].amountsnow;
				}avghightemp=(a/p),avglowtemp=(b/p),avgrain=c/p,avgsnow=(d/p);
				cout<<setw(10)<<"Avg"<<setw(10)<<avghightemp<<setw(10)<<avglowtemp<<setw(10)<<avgrain<<setw(10)<<avgsnow;	 
				break;
		}cout<<"\ndo u want to continue ?";
		
		cin>>ch1;
		
	}
	while(ch1=='Y' || ch1=='y');
	return 0;
}
