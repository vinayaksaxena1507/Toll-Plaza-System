#include<iostream>
#include<fstream>
using namespace std;
class Toll
{
	protected:
		int check;
		char vh,tr,pass,more;
		float wh;
		static int i;
		
	
	public:
	void calculation()
	{   i=1;
		 		
		 		i++;
	cout<<"Enter the type of vehicle "<<endl<<endl;
	cout<<"1- T for Truck"<<endl;
	cout<<"3- C for car"<<endl;
	cout<<"4- G for Government vehicles"<<endl;
	cout<<"6- M for Motorbike"<<endl;
	cin>>vh;
	try
	{
		if(vh=='T'||vh=='C'||vh=='G'||vh=='M'||vh=='t'||vh=='c'||vh=='g'||vh=='m')
		{
			goto A;
		}
		else
		{
			throw(vh);
		}
		
	}
	catch(char vh)
{
	cout<<"Wrong Input"<<endl;
}


	A:
	switch(vh)
	{
	

		
	    case 'T':
		
		cout<<"Enter Weight in ton(1000Kg = 1 ton)=";
   		cin>>wh;
   		cout<<endl;
   		cout<<"S for Single Trip="<<" "<<endl<<"R for Return trip=";
   		cin>>tr;
   		cout<<endl;
   		cout<<"'N' if dont have a Monthly pass 'Y' if you have a Monthly pass=";
   		cin>>pass;
   		cout<<endl;
   		if(pass='N')
   		{
		
		   if(wh>=1 && wh<=5)
   		{
   			if(tr='S')
   			{
   				cout<<"Weight 1-5 ton fare is=80";
			   }
			   else
			   {
			   	cout<<"Weight 1-5 ton fare is=140";
			   }
			   
			   
   			
		   }
        else if(wh>=6 && wh<=9)
		{
			if(tr='S')
   			{
   				cout<<"Weight 5-10 ton fare is=100"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight 1-5 ton fare is=180"<<endl;
			   }
			
			
				   }   		
   		else if(wh<=10)
   		{
   			if(tr='S')
   			{
   				cout<<"Weight above 10 ton fare is=130"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight above 10 ton fare is=220"<<endl;
			   }
   			
		   }
		}
	
	
	else if(pass='Y')
	{
		   if(wh>=1 && wh<=5)
   		{
   		 cout<<"Ok for 1-5 ton"<<endl;
			   
			   
   			
		   }
        else if(wh>=6 && wh<=9)
		{
			cout<<"Cost Of extra Weight=30"<<endl;
			
			
				   }   		
   		else if(wh<=10)
   		{
   			cout<<"Cost Of extra Weight=30"<<endl;
   			
		   }
		
	}
	else
	{
		cout<<"\n--Wrong Input-- "<<endl;
	}
	

		break;
		
		case 'C':
		
				cout<<"Enter Weight in ton(1000Kg = 1 ton)="<<endl;
   		cin>>wh;
   		cout<<"S for Single Trip="<<" "<<endl<<"R for Return trip=";
   		cin>>tr;
   		cout<<" 'Y' If monthly Pass 'N' if not"<<endl;
   		cin>>pass;
		
   		if(pass='N')
   		{
		   
   		if(wh>=1 && wh<=5)
   		{
   			if(tr='S')
   			{
   				cout<<"Weight 1-5 ton fare is=40"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight 1-5 ton fare is=70"<<endl;
			   }
   			
		   }
        else if(wh>=6 && wh<=9)
		{
			if(tr='S')
   			{
   				cout<<"Weight 5-10 ton fare is=60"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight 1-5 ton fare is=120"<<endl;
			   }
			
			
				   }   		
   		else if(wh<=10)
   		{
   			if(tr='S')
   			{
   				cout<<"Weight above 10 ton fare is=90"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight above 10 ton fare is=170"<<endl;
			   }
   			
		   }
   	
		}
	else if(pass='Y')
	{
		if(wh>=1 && wh<=5)
   		{
   			cout<<"Ok for 1-5 ton"<<endl;
   			
		   }
        else if(wh>=6 && wh<=9)
		{
			cout<<"Cost of extra weight=40"<<endl	;		
			
				   }   		
   		else if(wh<=10)
   		{
   			cout<<"cost of extra weight=40"<<endl;
   			
		   }
		 
	}
		else
		{
			cout<<"\n--Wrong Input--"<<endl;
		}
		break;
		
		
		
		
		
		case 'M':
		
				cout<<"Enter Weight in ton(1000Kg = 1 ton)="<<endl;
   		cin>>wh;
   		cout<<"S for Single Trip="<<" "<<endl<<"R for Return trip=";
   		cin>>tr;
   		cout<<endl;
   		cout<<" 'Y' If monthly Pass 'N' if not"<<endl;
   		cin>>pass;
   		
			if(pass='N')
			{
			
			 if(wh>=0.1 && wh<=0.5)
   		{
   			if(tr='S')
   			{
   				cout<<"Weight 100-500 kg fare is=10"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight 1-5 ton fare is=20"<<endl;
			   }
   			
		   }
        else if(wh>=0.6 && wh<=0.9)
		{
			if(tr='S')
   			{
   				cout<<"Weight 500-1000 kg ton fare is=40"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight 1-5 ton fare is=70"<<endl;
			   }
			
			
				   }   		
   		else if(wh<=1)
   		{
   			if(tr='S')
   			{
   				cout<<"Weight above 1000 kg  fare is=60"<<endl;
			   }
			   else
			   {
			   	cout<<"Weight ab  re is=110"<<endl;
			   }
   			
		   }
		}
		
	else if(pass='Y')
			{
			
			 if(wh>=0.1 && wh<=0.5)
   		{
   		cout<<"Ok Can Pass"<<endl;
   			
		   }
        else if(wh>=0.6 && wh<=0.9)
		{
			cout<<"cost of extra weight=10"<<endl;
			
				   }   		
   		else if(wh<=1)
   		{
   			cout<<"cost of extra weight=10"<<endl;
   			
		   }
		}
		else
		{
			cout<<"--Wrong Input--"<<endl;
		}
		
	

		
		break;
		
			case 'G':
		
			cout<<"No fare for GOVERNMENT vehicle"<<endl;
		
		break;
		default: 
					 {
					 cout<<"Wrong Input "<<endl;
				}
	
	    
	}
	
	
				
				
				

}


void traffic()
{
	
	
	ofstream fout;
	fout.open("file.doc");
    fout<<"Early Data :-"<<endl;
	fout<<"Number Of time Program Runned="<<i<<endl;
    fout<<"\n Trucks=4"<<endl;
    fout<<"Cars=5"<<endl;
    fout<<"Motorcycle=9"<<endl;
    fout<<"Government Vechiles=2"<<endl;
    fout.close();
	
	
	
}

void showdata()
{
		ifstream fin;

	char ch;
	fin.open("file.doc");
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		
	   ch=fin.get();
	
	   
	}
	
	
	
	fin.close();
}

    
   


};

int Toll::i;

int main()
{
	int op1;
	Toll t1;

	cout<<"Want To Procced Press 1="<<endl;
	cout<<"Want To Show older Records Press 2="<<endl;
	cin>>op1;
	switch(op1)
	
	{
	
	case 1:
     t1.calculation();
     t1.traffic();
     break;
	 
	 case 2:	
	 
     
	 t1.showdata();
     break;
     
     default:
     	{
     		cout<<"Wrong Input"<<endl;
		 }

}

	return 0;
}
