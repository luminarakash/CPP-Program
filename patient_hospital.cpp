#include<iostream>
#include<string.h>
using namespace std;
class Hospital
{
public:
    string Hospital_name;
    string location;
    int available_beds;
    float rating;
    string contact;
    int price;
    void getHospitalData();
    void printhospitaldata();
    void searchHospitalbyName();
    void searchbyavailablebeds();
    void updateinfo();
};
class Patient : public Hospital
{
public:
    string P_name;
    int P_id;
    void getPatientData();
    void printpatientdata();

};
void Hospital::getHospitalData()
{
    cout<<"Enter the hospital name :     ";cin>>Hospital_name;
    cout<<"Enter the location :     ";cin>>location;
    cout<<"enter available beds :     ";cin>>available_beds;
    cout<<"Enter the rating :     ";cin>>rating;
    cout<<"Enter contact :     ";cin>>contact;
    cout<<"enter price per bed :     ";cin>>price;

}
void Hospital::printhospitaldata()
{
    cout<<"\n\nHospital's name :     "<<Hospital_name<<endl;
    cout<<"Location :     "<<location<<endl;
    cout<<"Available beds :     "<<available_beds<<endl;
    cout<<"Rating :     "<<rating<<endl;
    cout<<"Contact :     "<<contact<<endl;
    cout<<"Price per bed :     "<<price<<endl;
}

void Patient::getPatientData()
{
    cout<<"Enter Patient's Name :     ";cin>>P_name;
    cout<<"Enter Patient's Id :     ";cin>>P_id;
}

void Patient::printpatientdata()
{
    cout<<"\n\npatient Name :     "<<P_name<<endl;
    cout<<"Patient's Id :     "<<P_id<<endl;
}

void Hospital::searchHospitalbyName()
{
        string hosp_name;
        cout<<"Please enter the name of the hospital :    ";
        cin>>hosp_name;
    if(Hospital_name==hosp_name)
    {
        cout<<"\n !! Congratulation Hospital is found !! \n"<<endl;
    }
    else
    {
        cout<<"\nNot found!!!\n";
    }
}
void Hospital::searchbyavailablebeds()
{
    int avail_bed;
    cout<<"Please enter the numbers of bed :    ";
    cin>>avail_bed;
    if(avail_bed <= available_beds)
    {
        cout<<"\n !! Available !! \n"<<endl;
    }
        else
    {
        cout<<"\n !! Not Available !! \n";
    }
}
void Hospital::updateinfo()
{
    cout<<"Enter the hospital name:"<<endl;
    cin>>Hospital_name;
    cout<<"Enter the location:"<<endl;
    cin>>location;
    cout<<"enter the available beds:"<<endl;
    cin>>available_beds;
    cout<<"Enter the rating:"<<endl;
    cin>>rating;
    cout<<"Enter contact:"<<endl;
    cin>>contact;
    cout<<"enter price per bed"<<endl;
    cin>>price;
}


int main()
{
    Hospital H[50];
    Patient P[50];
    int choice, i;
    string hosp_name;
    int avail_bed,t;
    for(i=0;i<2;i++)
    {
       H[i].getHospitalData();
    }
    {
    for(i=0;i<2;i++)
        P[i].getPatientData();
    }
    while(1)
    {
        cout<<"\n\n\t\t\t-: MENU :-";
        cout<<"\n\t1.print hospital's data";
        cout<<"\n\t2.print patient's data";
        cout<<"\n\t3.search hospital by name";
        cout<<"\n\t4.search by available beds";
        cout<<"\n\t5.update info";
        cout<<"\n\t6.exit";
        cout<<"\n\tenter choice :  ";
        cin>>choice;
        switch(choice)
        {

        case 1:
            for(i=0;i<2;i++)
            H[i].printhospitaldata();
            break;

        case 2:
            for(i=0;i<2;i++)
                P[i].printpatientdata();
                break;

        case 3:
            for(t=0;t<2;t++)
            {
               H[t].searchHospitalbyName();
               H[t].printhospitaldata();
            }
                break;

        case 4:
            for(t=0;t<2;t++)
            {
               H[t].searchbyavailablebeds();
               H[t].printhospitaldata();
            }

                break;
        case 5:
            for(i=0;i<2;i++)
            {
            H[i].updateinfo();
            }
            break;

        case 6:
            exit(0);
            break;
        default:
            cout<<"\ninvalide choice!!\n";
            break;
        }
    }
    return 0;
}