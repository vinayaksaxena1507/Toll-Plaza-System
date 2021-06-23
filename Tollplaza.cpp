#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

class Tollplaza
{
	
    public:
    
	char vehicle_no[15];
    int date[3];
    int time[3];
        int amount; 
		int fee;
		int weight;
		int exchange;
		int Journey_type;
      int cash;
	  int reciept; 
	    int totalvehicles;

int entry()
{
      
	   wrong_vehicle:
      
	   cout<<"Journey Type: "<<endl;
       cout<<"1. One Way "<<endl;
      
	   cout<<"2. Two way "<<endl;
      
	   cin>>Journey_type;
    
	switch(Journey_type)
                   { case 1: { cout<<"\nType of journey : One Way"<<endl;
				               break;}
				     case 2: { cout<<"\nType of journey : Two Way"<<endl;
				               break;}
				   }

     cout<<endl<<"Deposit the due amount"<<endl;
	cin>>amount;

			while(amount<fee)

		    {
			cout<<"Enter amount again(must be more than "<<fee<<" )"<<endl;
				
				cout<<"Deposit the amount: "<<endl;
			cin>>amount;
		}

			cout<<"Enter weight of vehicle: "<<endl;
			
			cin>>weight;
			system("CLS");   
		
			if(weight>100)
			{
				fee=fee*2;
				cout<<"Double Fee will be charged for having over-weight!"<<endl;
			}
						exchange=amount-fee;
		
			cout<<"Money TO be returned to customer: "<<exchange<<endl;

			cout<<endl;
			cout<<"Enter Vehicle Number : ";
           cin>>vehicle_no;

	   wrong_date:
	       cout<<"Date [DD] :";
           cin>>date[0];
           cout<<"Month [MM] :";
           cin>>date[1];
           cout<<"Year [YYYY] :";
           cin>>date[2];
           if(date[0]<=0 || date[0]>31 || date[1]<=0 || date[1]>12 || date[2]<=0 || date[2]<999 || date[2]>9999 )
                  {  cout<<"\n!!!!!!You Entered Wrong !!!!!! Please Enter Again...........\n\n";
				     goto wrong_date; }
	   wrong_time:
           cout<<"Hours [HH] :";
           cin>>time[0];
           cout<<"Minutes [MM] :";
           cin>>time[1];
           cout<<"Seconds [SS] :";
           cin>>time[2];
           if(time[0]>23 || time[1]>60 || time[2]>60)
                  {  cout<<"\n!!!!!!You Entered Wrong !!!!!! Please Enter Again...........\n\n";
                     goto wrong_time; }
	cout<<"-----------------------------------------------"<<endl;
			return 0;
}
       void data()
       {
       	char n, stats;
        int Truck=0, Bus=0, Motorbike=0, GovernmentCar=0, Van=0, Car=0;
        char a;
while(a!='N')

{
	cout<<"Enter: "<<endl;
	cout<<" Y for running Program."<<endl;
	cout<<" N for ending Program."<<endl;
    cin>>a;
    switch(a)
    case'Y':
{

cout<<"Please choose: "<<endl;
cout<<"1  For Starting Program."<<endl;
cout<<"2  For Program info. "<<endl;
cin>>n;
switch(n)
{
case'1':
{
system("CLS");
int i=1,weight, cash=0, reciept=0, totalvehicles=0, Exchange, Amount;
char vehicle ;  
while(vehicle!='O'&&vehicle!='o')
{
	cout<<"Enter the type of vehicle "<<endl;
	cout<<"1- T for Truck"<<endl;
	cout<<"2- B for Bus"<<endl;
	cout<<"3- C for car"<<endl;
	cout<<"4- G for Government vehicles"<<endl;
	cout<<"5- V for Van"<<endl;
	cout<<"6- M for MOtorbike"<<endl;
	cout<<"7- Enter O for ending program"<<endl;
	cin>>vehicle;
	if(vehicle=='T'||vehicle=='B'||vehicle=='C'||vehicle=='V'||vehicle=='M'||vehicle=='G')


		if(vehicle=='T')
			{
							system("color A1");
				int fee=50;
			  entry();
			  	cash=cash+fee;
	           reciept=reciept+1;
	            totalvehicles=totalvehicles+1;
	 		    Truck=Truck+1;
	}
		else if(vehicle=='C')

		{ 	int fee=20;
		 	system("color F0");
			  entry();
			  	cash=cash+fee;
	reciept=reciept+1;
	totalvehicles=totalvehicles+1;
		 	  Car=Car+1;
		}

		else if(vehicle=='M')
		{ 	int fee=10;
			system("color E1");
			 entry();
	               	cash=cash+fee;
	reciept=reciept+1;
	totalvehicles=totalvehicles+1;
			 Motorbike=Motorbike+1;
		}

		else if(vehicle=='B')
		{ 	int fee=40;
			system("color B7");
			  entry();
		          	cash=cash+fee;
	reciept=reciept+1;
	totalvehicles=totalvehicles+1;
			  Bus=Bus+1;
			}

		else if(vehicle=='V')
		{ 	int fee=30;
			system("color F3");
			 entry();
			       	cash=cash+fee;
	reciept=reciept+1;
	totalvehicles=totalvehicles+1;
			  Van=Van+1;
			}

		else if(vehicle=='G')
		{ system("color 80");
		 std::cout<<"Government car...no collection of cash"<<std::endl;
			totalvehicles=totalvehicles+1;
			cash=cash;
			reciept=reciept;
		    GovernmentCar=GovernmentCar+1;
		}

		else if(vehicle=='O')
			{  system("color 71");
			 std::cout<<"Program will close now"<<std::endl;
				i=-1;
			}

		else
		{ cout<<"Invalid Entry"<<endl;
		cout<<"Enter the vehicle type  again: "<<endl;

	}
}

    system("color 1F");
	std::cout<<"Total Cash Earned Today: "<<cash<<std::endl;
	cout<<"Total Vehicles passed today: "<<totalvehicles<<endl;
	cout<<"Reciepts sold today: "<<reciept<<endl;

	while (stats!='E')
	{
	cout<<"Enter S for Detailed vehicle stats. Or press E key to end program."<<endl;
	cin>>stats;
	system("CLS");
	switch(stats)
	{

	case'S':
	{
		cout<<"Trucks Passed today     		: "<<Truck<<endl;
		cout<<"Busses Passed today     		: "<<Bus<<endl;
		cout<<"Vans passed today            : "<<Van<<endl;
		cout<<"Cars passed today            : "<<Car<<endl;
		cout<<"Motorbikes passed today      : "<<Motorbike<<endl;
		cout<<"Government Cars passed today : "<<GovernmentCar<<endl;
	    break;
	}
	default :
		{
			cout<<"enter valid entry."<<endl;
		}
}
}
}   break;
case'2':
	{
		cout<<"Program is about Toll Plaza."<<endl;
		cout<<"It was made by Aniket kumar(K17TFA25)"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"Features of this program:"<<endl;
		cout<<"1-  Total cash earned in a day."<<endl;
        cout<<"2-  Total No. of vehicles passed."<<endl;
        cout<<"3-  Respective fee of each type of vehicle."<<endl;
        cout<<"4-  Reciept number."<<endl;
        cout<<"5-  Government vehicles."<<endl;
        cout<<"6-  weight of vehicle(if more than 100,,,double cash should be paid by the customer).."<<endl;
        cout<<"7-  Background and Text color."<<endl;
        cout<<"8-  Count of each type of vehicle."<<endl;

	}
}	break;

     case'N':
	 {
	 	cout<<"Take Care. Program has ended.";
	  }
	  break;
	  default:
	  	{
	  		cout<<"Enter valid command."<<endl;
		  }
}
}
}
        int show()
        {
        	 cout<<"\nVehicle Number : "<<vehicle_no;
        	     switch(Journey_type)
                   { case 1: { cout<<"\nType of journey : One Way"<<endl;
				               break;}
				     case 2: { cout<<"\nType of journey : Two Way"<<endl;
				               break;}
				   }
    cout<<"\nDate : "<<date[0]<<"/"<<date[1]<<"/"<<date[3];
    cout<<"\nTime : "<<time[0]<<":"<<time[1]<<":"<<time[3];
    cout<<"Total Cash Earned Today: "<<cash<<endl;
	cout<<"Total Vehicles passed today: "<<totalvehicles<<endl;
	cout<<"Reciepts sold today: "<<reciept<<endl;
    cout<<"\n\t\t\t\t\tThankyou For Paying Toll Tax"<<endl;
    cout<<"\t\t\t\t\t We Wish You a Safe Journey"<<endl;
		}
        int store();
        int file();
        int view();
}
A[50];
int Tollplaza::file()
{   ofstream fil;
    fil.open("toll.dat",ios::app|ios::binary);
    fil.write((char *)this,sizeof(*this));
    fil.close();
    return(0);
}
int Tollplaza::store()
{   ofstream fil;
    fil.open("toll_sheet.dat",ios::app|ios::binary);
    fil<<"\nVehicle Number : "<<vehicle_no;
    fil<<"\nDate : "<<date[0]<<"/"<<date[1]<<"/"<<date[3]<<endl;
    fil<<"\nTime : "<<time[0]<<":"<<time[1]<<":"<<time[3]<<endl;

    fil<<"Total Cash Earned Today: "<<cash<<endl;
	fil<<"Total Vehicles passed today: "<<totalvehicles<<endl;
	fil<<"Reciepts sold today: "<<reciept<<endl;
    fil.close();
}
int Tollplaza::view()
{
		ifstream fin;
	fin.open("toll_sheet.dat",ios::in|ios::binary);
	if(!fin)
	cout<<endl<<"FILE NOT FOUND !!!!!!"<<endl;
	else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof())
		{
			show();
			
			fin.read((char*)this,sizeof(*this));
		}
	}
    fin.close();
}
void clear_data(){
	ofstream filin;
	remove("tollplaza_binary.txt");
	remove("tollplaza_summary_sheet.txt");
	cout<<"!!!!!!!!!All Data Cleared!!!!!!!!!"<<endl;
}
int main()
{
system("color f1");
{
std::cout<<"         ********   **    *     *        *****   *          *      ******      *"<<std::endl;
     cout<<"            **     *  *   *     *        *    *  *         *  *        *      * *"<<endl;
     cout<<"            **    *    *  *     *        *****   *        *    *      *      *    *"<<endl;
     cout<<"            **     *  *   *     *        *       *       * **** *    *      * **** *"<<endl;
     cout<<"            **      **    ***** *****    *       ****** *        *  ****** *        *"<<endl;

}
int c;
 for(int i=0;i>=0;i++)
 {
wrong_entry:
  cout<<"\n\n1. Vehicle Entry."<<endl<<"2. Show data."<<endl<<"3. Remove all the data."<<endl<<"4. Exit."<<endl;
  cout<<"\n\nEnter your choice"<<endl;
  cin>>c;
   switch(c)
                   { case 1: {
				               A[i].data();
                               A[i].file();
                              A[i].store();
                               A[i].show();
                               break;
							 }
                     case 2: { 
					          cout<<"Entries Till Date : "<<endl;
            	               int j=0,r=0;

            		           ++j;
            		           r=A[j].view();

	            
							
				               break;
							 }
                     case 3: { 
					          clear_data();
						       break;}
					 case 4: exit(0);
                     default: { cout<<"\n!!!!!!!Invalid!!!!!!! Please Choose Again\n\n";
                               goto wrong_entry;
						       break;
							   }
				   }
    }
}
