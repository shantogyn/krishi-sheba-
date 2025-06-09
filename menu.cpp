#include"menu.h"
#include"moisture.h"
#include"recommend.h"
#include"bugdetcrop.h"
#include"file.h"
#include"farmerhelp.h"
#include"predict.h"
#include"soil.h"
#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
int threshold = 400;
bool autopump =true;
vector<int> moistureHistory;
void soil();
void farmerHelp();


void menu()
{
    int choice;
    while(true)
    {
        system("cls");
        cout<<endl<<endl<<endl;
        cout<<"\t========== BUBT KRISHI SHEBA ==========="<<endl<<endl<<endl;

        cout<<"\tCurent Time: " << currentTime() << endl;


        cout <<"\t================================"<<endl;
        cout<<"\t1.🏞️    Soil Type"<<endl;
        cout<<"\t2.💧    Show Real-Time Moisture"<<endl;
        cout<<"\t3.🎚️    Set Moisture Threshold("<< threshold<<")"<<endl;
        cout<<"\t4.⚙️    Toggle Auto Pump Control("<<(autopump?"ON)":"OFF)")<<endl;
        cout <<"\t5.🔍🌿  Predict Soil Health of Moisture Level"<<endl;
        cout <<"\t6.📊    View  Moisture Data"<<endl;
        cout<<"\t7.🕓    last Moisture Data"<<endl;
        cout<<"\t8.📦    Recommend Crop"<<endl;
        cout<<"\t9.💸    Bugdet Crop"<<endl;
        cout<<"\t10.☎️   Farmer Help Center"<<endl;
        cout<<"\t0.❌    Exit"<<endl;
        cout << "\t================================"<<endl;

        cout << "\t Enter your choice: ";
        cin>>choice;
        if(choice==1)
        {
            system("cls");

            soil();

            system("pause");
        }
        else if(choice==5)
        {
            //system("cls");
            cout<<endl<<endl<<endl;
            predictSoilHealth(moistureHistory);

        }
        else if(choice==2)
        {
            system("cls");
            cout<<endl<<endl<<endl;
            vector<int>currentsession;
            for(int i=0; i<10; i++)
            {
                int moisture = getSimulatedMoisture();
                currentsession.push_back(moisture);
                moistureHistory.push_back(moisture);
                cout << "\tMoisture: " << moisture;
                if(autopump)
                {
                    if(moisture<threshold)
                    {
                        cout<<"--> PUMP ON"<<endl;
                        cout << "\tCurrent Time: " << currentTime() << endl;
                    }
                    else
                    {
                        cout<<"--> PUMP OFF"<<endl;
                        cout << "\tCurrent Time: " << currentTime() << endl;
                    }

                }
                else
                {
                    cout<<"--> PUMP OFF"<<endl;
                    cout << "\tCurrent Time: " << currentTime() << endl;
                }
                savemoisture(moisture);
                Sleep(1000);
            }
            system("pause");
        }
        else if(choice==9)
        {
            system("cls");
            cout<<endl<<endl<<endl;

            int totalBudget;
            cout<<"\tEnter Total Budget: ";
            cin>>totalBudget;
            budgetCrop(totalBudget);
            system("pause");

        }
        else if(choice==10)
        {
            system("cls");
            cout<<endl<<endl<<endl;
            framerhelp();
            system("pause");
        }

        else if(choice==3)
        {
            system("cls");
            cout<<endl<<endl<<endl;
            cout<<"\tEnter Moisture Threshold: ";
            cin >> threshold;
            system("pause");
        }
        else if(choice==4)
        {
            system("cls");
            cout<<endl<<endl<<endl;
            cout<<"\tToggling Auto Pump Control..."<<endl;
            Sleep(1000);
            autopump=!autopump;
            cout << "\tAuto Pump is now " << (autopump ? "ON" : "OFF") << endl;
            system("pause");
        }


        else if(choice==6)
        {
            system("cls");
            cout<<endl<<endl<<endl;
            viewmoisture();
        }
        else if(choice==7)
        {
            system("cls");
            cout<<endl<<endl<<endl;
            lastmoisture();
        }
        else if(choice==0)
        {
            system("cls");
            cout << "\tExiting..." << endl;
            return ;



        }


        else if(choice==8)
        {


            system("cls");
            cout<<endl<<endl<<endl;
            string cropname;
            cout<<"\tEnter Crop Name: ";
            cin>>cropname;
            recommendCrop(cropname);
            system("pause");
        }
        else
        {


            menu();
            system("pause");
        }
    }
}
void soil()
{
    system("cls");
    cout<<endl<<endl<<endl;
    cout<<"\tSelect Soil Type:"<<endl;
    cout<<"\t1. Alluvial Soil"<<endl;
    cout<<"\t2. Red Soil"<<endl;
    cout<<"\t3. Black Soil"<<endl;
    cout<<"\t4. Loamy Soil"<<endl;
    cout<<"\t5. Sandy Soil"<<endl;
    cout<<"\t6. Clay Soil"<<endl;
    cout<<"\t7. Saline Soil"<<endl;
    cout<<"\t8. Acidic Soil"<<endl;
    cout<<"\t0.Back to Menu"<<endl;
    int soilchoice;
    cout << "\tEnter your choice: ";
    cin >> soilchoice;
    if(soilchoice==0)
    {

        menu();
        return;
    }

    string soilname;
    vector<string> crops = soiltype(soilchoice, soilname);
    system("cls");
    cout<<endl<<endl<<endl;
    cout << "\tSoil Type: " << soilname << endl;
    cout << "\tRecommended Crops:" << endl;
    for(const string& crop : crops)
        cout << "\t- " << crop << endl;

    if(soilname=="Alluvial Soil")
    {
        cout<<"\tRecommended Fertilizers: Urea, DAP, MOP"<<endl;
        cout<<"\tRecommended pH Range : 6.5 - 7.5 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();


    }
    else if(soilname=="Red Soil")
    {
        cout<<"\tRecommended Fertilizers: NPK, Urea"<<endl;
        cout<<"\tRecommended pH Range : 5.5 - 7.0 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();
    }
    else if(soilname=="Black Soil")
    {
        cout<<"\tRecommended Fertilizers: Phosphate-rich, compost"<<endl;
        cout<<"\tRecommended pH Range : 6.0 - 8.0 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();
    }
    else if(soilname=="Loamy Soil")
    {
        cout<<"\tRecommended Fertilizers:  NPK, organic manure "<<endl;
        cout<<"\tRecommended pH Range : 6.0 - 7.5 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();
    }
    else if(soilname=="Sandy Soil")
    {
        cout<<"\tRecommended Fertilizers: Frequent compost, nitrogen"<<endl;
        cout<<"\tRecommended pH Range : 5.5 - 6.5 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();
    }
    else if(soilname=="Clay Soil")
    {
        cout<<"\tRecommended Fertilizers: Well-rotted manure, lime (if acidic)"<<endl;
        cout<<"\tRecommended pH Range : 5.5 - 6.5 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();
    }
    else if(soilname=="Saline Soil")
    {
        cout<<"\tRecommended Fertilizers: Gypsum, green manure"<<endl;
        cout<<"\tRecommended pH Range : 7.8 - 8.5 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();

    }
    else if(soilname=="Acidic Soil")
    {
        cout<<"\tRecommended Fertilizers:  Lime, phosphorus"<<endl;
        cout<<"\tRecommended pH Range : < 5.5 "<<endl;
        int a;
        cout<<"\t0.Back to Soiltype"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==0)soil();
        if(a==1)menu();

    }



}
