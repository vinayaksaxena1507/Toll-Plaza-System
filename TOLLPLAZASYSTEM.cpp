#include<iostream>
#include<math.h>
#include<fstream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
//-x-x-x-x-x-x-x-x--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx--x-x-xx-x-x-x-x-x-x-x-xx-
//PARENT CLASS-------------------------------
class tollplaza
{
protected:
    //protected member function--------------------
    char carno[15];
    int date[3];
    int time[3];

    int vtype;
    int jtype;


    public:
       int fee;
       int sum;



};

//CHILD CLASS -----------------------------------------
class toll:public tollplaza
{//constructor -----------------------
    public:
    toll(){
           strcpy(carno,"NULL");
           date[0]=0;
           time[0]=0;
           fee=0;
           vtype=0;
           jtype=0;
           sum =0;
       }
       //member functions-------------------
       void get();
       int insertf();
       void show();
       void srch(char *);
       void viewall();

};
//-x-x-x-x-x-x-x-x--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx--x-x-xx-x-x-x-x-x-x-x-xx-
void toll::get()
{
    {
           system("cls");
           cout<<endl<<endl;
           cout<<"Enter Car Number :";
           cin.ignore();
			cin.getline(carno,20);
           cout<<endl<<"Date - DD/MM/YYYY"<<endl<<"DD :";
           cin>>date[0];
           cout<<"MM :";
           cin>>date[1];
           cout<<"YYYY :";
           cin>>date[2];
           cout<<endl<<"Time - HH:MM:SS"<<endl<<"HH :";
           cin>>time[0];
           cout<<"MM :";
           cin>>time[1];
           cout<<"SS :";
           cin>>time[2];
           cout<<endl<<"Type of journey :"<<endl<<"1. Single Journey"<<endl<<"2. Two Way Journey"<<endl<<">>>";
           cin>>jtype;
           cout<<endl<<"Type of vehicle :"<<endl<<"1. Car"<<endl<<"2. Jeep"<<endl<<"3. Van"<<endl<<">>>";
           cin>>vtype;
           if(vtype==1 && jtype==1){
            fee=45;
           }
           else if(vtype==1 && jtype==2){
            fee=80;
           }
           else if(vtype==2 && jtype==1){
            fee=50;
           }
           else if(vtype==2 && jtype==2){
            fee=85;
           }
           else if(vtype==3 && jtype==1){
            fee=70;
           }
           else if(vtype==3 && jtype==2){
            fee=100;
           }

       }
       system("cls");
}

int toll::insertf()
{
    if(fee==0){
        cout<<"ERROR !!!!!!!!!";
    }
    else{
    ofstream fout;
    fout.open("tollplaza.txt",ios::app|ios::binary);
    fout.write((char *)this,sizeof(*this));
    fout.close();
    return(1);
    }
}

void toll::show()
{
    cout<<"Car No. :"<<carno<<endl;
    cout<<"Date :"<<date[0]<<"/"<<date[1]<<"/"<<date[2]<<endl;
    cout<<"Time :"<<time[0]<<":"<<time[1]<<":"<<time[2]<<endl;
    cout<<"Type :" ;
    if(vtype==1)
        cout<<"Car"<<endl;
    else if(vtype==2)
        cout<<"Jeep"<<endl;
    else if(vtype==3)
        cout<<"Van"<<endl;
    if(jtype==1)
        cout<<"Single Journey."<<endl;
    else if(vtype==2)
        cout<<"Two Way Journey."<<endl;
    cout<<"Fee :"<<fee<<endl;
    cout<<"\n\n\n\n";
    cout<<"--------------------------------------------------"<<endl;

}

 void toll::srch(char *t){
 	int re=0;
 	ifstream fin;
 	fin.open("tollplaza.txt",ios::in|ios::binary);
 	if(!fin)
 	cout<<"NOT FOUND !!!!!"<<endl;
 	else{
 		fin.read((char*)this,sizeof(*this));
 		while(!fin.eof()){
 			if(!strcmp(t,carno)){
 				show();
			 }
		fin.read((char*)this,sizeof(*this));

		 ++re;
		 }
		if(re==0){
			cout<<endl<<"RECORD NOT FOUND !!!!!"<<endl<<endl;
		}

	 }
	 fin.close();

 }
static int Count=0,sum=0;
void clr(){
	ofstream fin;
	fin.open("tollplaza.txt");
	fin<<"";
	fin.close();
	cout<<"        FILE CLEARED !!!!!!!!"<<endl;
	sum=0;
	Count=0;
}


//-x-x-x-x-x-x-x-x--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx--x-x-xx-x-x-x-x-x-x-x-xx-

void toll :: viewall()
{
	ifstream fin;
	fin.open("tollplaza.txt",ios::in|ios::binary);
	if(!fin)
	cout<<endl<<"FILE NOT FOUND !!!!!!"<<endl;
	else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			show();
			fin.read((char*)this,sizeof(*this));
		}
	}
    fin.close();
}


//-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-
int main()
{      system("color 2");
    cout<<endl<<endl<<"                        TOLL PLAZA SYSTEM"<<endl;
    cout<<"   --------------------------------------------------------------"<<endl;
    cout<<"PRESS ANY TO CONTINUE ....";
    getch();
    system("cls");
    //object...
    toll t;
    int chk,i,j=0;
    cout<<endl<<endl<<"                        TOLL PLAZA SYSTEM"<<endl;
    cout<<"   --------------------------------------------------------------"<<endl;

    int m=0;
    //---------------------------------------------------------------------------------------------
    do{
            cout<<endl<<"   1. NEW ENTRY."<<endl<<endl<<"   2. SEARCH ENTRY."<<endl<<endl<<"   3. SHOW ALL ENTRIES."<<endl<<endl<<"   4. NO OF CAR PASSED AND TOTAL AMOUNT."<<endl<<endl<<"   5. EXIT."<<endl<<endl<<"   6. CLEAR FILE."<<endl<<endl<<">>>";
            cin>>i;
            system("cls");
            cout<<endl<<endl<<"                        TOLL PLAZA SYSTEM"<<endl;
    cout<<"   --------------------------------------------------------------"<<endl;

        if(i==5){
        	break;

		}
        switch(i){

            case 1:
                t.get();
            t.insertf();
            sum=sum+t.fee;
            ++Count;
			system("cls");
			cout<<"     SAVED!!!"<<endl;
            t.show();
            cout<<endl<<"-----------------THANK YOU ----------------"<<endl;
    cout<<"-----------------HAVE A NICE DAY----------------- "<<endl;

            break;
            case 4:
            cout<<"TODAY:-\nTOTAL AMOUNT UPTO NOW  |  "<<Count<<" NO. OF VEHICLES         :Rs. "<<sum<<endl<<endl;
            break;
            case 2:
            	char xyz[20];
				cout<<"ENTER CAR NUMBER : ";
				cin>>xyz;
				t.srch(xyz);
				t.show();



            	break;

            case 6:
                cout<<endl;
                clr();
                cout<<endl<<endl;
            	break;
            case 3:
            	cout<<endl<<"ALL DATA UPTO NOW : "<<endl;
            	t.viewall();
            	break;

            default :
                cout<<"  WRONG INPUT "<<endl;
        }
        j++;
    }while(chk!=5);

    //------------------------------------------------------------------------------------------
cout<<endl<<"                      EXIT TOLL PLAZA SYSTEM"<<endl<<endl;


return 0;
}


