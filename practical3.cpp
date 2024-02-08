#include<iostream>
#include<string.h>
#define MAX 999
using namespace std;
class CAR
{

    private:
    char Model_name[10];
    char Fuel_type[10];
    float Showroom_price;
    float Mileage;
    char Transmission[10];
    float Tank_capacity;
    short int seating;
    char Airbags[5];

    public:
    void getdata()
    {
        fflush(stdin);
        cout<<endl<<"Enter the Model Name :";
        cin.getline(Model_name,10);
        cout<<endl<<"Enter the Fuel type(Petrol/Diesel/CNG/ev) :";
        cin.getline(Fuel_type,10);
        cout<<endl<<"Enter the Showroom price(in lakhs):";
        cin>>Showroom_price;
        cout<<endl<<"Enter the Mileage : ";
        cin>>Mileage;
        cout<<endl<<"Enter the Transmission(AMT/Manual) :";
        cin>>Transmission,10;
        cout<<endl<<"Enter the Tank_capacity :";
        cin>>Tank_capacity;
        cout<<endl<<"Enter the seating : ";
        cin>>seating;
        cout<<endl<<"Enter the Airbags(Yes/No) :";
        fflush(stdin);
        cin.getline(Airbags,5);
        cout<<endl<<"---------------------------------------------------------------"<<endl;
    }
    void putdata()
    {
        cout<<endl<<"Model"<<"\t"<<"Fuel"<<"\t"<<"Price(Lakhs)"<<"\t"<<"Mileage"<<"\t"<<"Transmission"<<"\t"<<"Tank Capacity"<<"\t"<<"Seats"<<"\t"<<"Airbags"<<endl;
        cout<<endl<<Model_name<<"\t"<<Fuel_type<<"\t"<<Showroom_price<<"\t\t"<<Mileage<<"\t"<<Transmission<<"\t\t"<<Tank_capacity<<"\t\t"<<seating<<"\t"<<Airbags<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;

    }
    void Modelname(class CAR C[],int numberofcar)
    {
        cout<<"List Of Tata Cars"<<endl;
        for(int i=0;i<numberofcar;i++)
        {
            cout<<"("<<i+1<<")"<<C[i].Model_name<<endl;
        }
        int c;
        cout<<"COOSE YOUR CAR TO GET DETAIL"<<endl;
        cin>>c;
        C[c-1].putdata();

    }

    void Fueltype(class CAR C[],int numberofcar)
    {
        fflush(stdin);
        char fuel[10];
        cout<<"ENTER YOUR FULE PREFERENCE :"<<endl;
        cin.getline(fuel,10);
        for(int i=0;i<numberofcar;i++)
        {
        if(strcmp(C[i].Fuel_type,fuel)==0)
            {
               C[i].putdata();
            }
        }
    }
    void pricerange(class CAR C[],int numberofcar)
    {
        int a;
        cout<<endl<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS:-";
        cin>>a;
        for(int i=0;i<numberofcar;i++)
        {
        if(C[i].Showroom_price<=a)
           {
               C[i].putdata();
            }
        }
    }
}C[MAX];
 main()
{

    int numberofcar;
    cout<<"Enter the Number of car you need : ";
    cin>>numberofcar;
    for(int i=0;i<numberofcar;i++)
    {
        C[i].getdata();
    }
    for(int i=0;i<numberofcar;i++)
    {
        C[i].putdata();
    }
    int option;
    cout<<"WELCOME TO TATA MOTORS"<<endl;
    cout<<"GET THE CAR DETAIL AS PER YOUR PREFERENCE"<<endl;
    cout<<"(1)Model Name (2)Fuel Type (3)Price Range"<<endl;
    cin>>option;
    switch(option)
    {
    case 1:
            C[0].Modelname(C,numberofcar);
            break;
    case 2:
            C[0].Fueltype(C,numberofcar);
            break;
    case 3:
            C[0].pricerange(C,numberofcar);
            break;
    }

}
