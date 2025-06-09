#include "farmerhelp.h"
#include "file.h"
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void framerhelp()
{
    //Division and officer contact information
    map<string, string> officerContact =
    {
        {"Dhaka", " Sabera Akter\n\tPhone: 01737218477\n\tLocation: 285,bagbari,Gabtoli,Dhaka-1216"},
        {"Chittagong", " Md. Amirul Islam\n\tPhone:  01719227771\n\tLocation: 923,Sekh Mujib Road,Chittagong"},
        {"Khulna", "Md. Anisur Rahman\n\tPhone: 01912345678\n\tLocation: Khamarbari,Khulna"},
        {"Rajshahi", "Mst. Umme Salma\n\tPhone:  01712103651\n\tLocation: khamarbari,railgate,rajshahi"},
        {"Barisal", "Md. Shamsul Haque\n\tPhone: 01512345678\n\tLocation: c & b road,Barisal"},
        {"Sylhet", "Md. Nazmul Hossain\n\tPhone: 01412345678\n\tLocation: khamarbari,Shahjalal University of Science and Technology,Sylhet"},
        {"Rangpur", "Md. Monirul Islam\n\tPhone: 01312345678\n\tLocation: khamarbari,Rangpur"},
        {"Mymensingh", "Md. Asaduzzaman\n\tPhone: 01212345678\n\tLocation: 7,Maharaja Road,Mymensingh"}
    };

    // Crop buy prices
    map<string, string> cropBuy =
    {
        {"Rice", "Local Market: 28-32 BDT/kg\n\tOnline: 30-35 BDT/kg"},
        {"Wheat", "Local Market: 30-35 BDT/kg\n\tOnline: 32-37 BDT/kg"},
        {"Maize", "Local Market: 20-25 BDT/kg\n\tOnline: 22-27 BDT/kg"},
        {"Potato", "Local Market: 12-16 BDT/kg\n\tOnline: 14-18 BDT/kg"},
        {"Tomato", "Local Market: 15-20 BDT/kg\n\tOnline: 17-22 BDT/kg"},
        {"Onion", "Local Market: 18-22 BDT/kg\n\tOnline: 20-25 BDT/kg"},
        {"Garlic", "Local Market: 25-30 BDT/kg\n\tOnline: 27-32 BDT/kg"},
        {"Ginger", "Local Market: 20-25 BDT/kg\n\tOnline: 22-27 BDT/kg"},
        {"Chili", "Local Market: 30-35 BDT/kg\n\tOnline: 32-37 BDT/kg"},
        {"Ridge Gourd", "Local Market: 15-20 BDT/kg\n\tOnline: 17-22 BDT/kg"},
        {"Carrot", "Local Market: 10-15 BDT/kg\n\tOnline: 12-17 BDT/kg"},
        {"Watermelon", "Local Market: 8-12 BDT/kg\n\tOnline: 10-15 BDT/kg"},
        {"Pumpkin", "Local Market: 10-15 BDT/kg\n\tOnline: 12-17 BDT/kg"},
        {"Cabbage", "Local Market: 12-16 BDT/kg\n\tOnline: 14-19 BDT/kg"},
        {"Cauliflower", "Local Market: 15-20 BDT/kg\n\tOnline: 17-22 BDT/kg"}
    };
    // Crop selling prices
    map<string, string> cropSell =
    {
        {"Rice", "Local Market: 30-35 BDT/kg\n\tOnline: 32-37 BDT/kg"},
        {"Wheat", "Local Market: 32-37 BDT/kg\n\tOnline: 34-39 BDT/kg"},
        {"Maize", "Local Market: 22-27 BDT/kg\n\tOnline: 24-29 BDT/kg"},
        {"Potato", "Local Market: 14-18 BDT/kg\n\tOnline: 16-21 BDT/kg"},
        {"Tomato", "Local Market: 17-22 BDT/kg\n\tOnline: 19-24 BDT/kg"},
        {"Onion", "Local Market: 20-25 BDT/kg\n\tOnline: 22-27 BDT/kg"},
        {"Garlic", "Local Market: 27-32 BDT/kg\n\tOnline: 29-34 BDT/kg"},
        {"Ginger", "Local Market: 22-27 BDT/kg\n\tOnline: 24-29 BDT/kg"},
        {"Chili", "Local Market: 32-37 BDT/kg\n\tOnline: 34-39 BDT/kg"},
        {"Ridge Gourd", "Local Market: 17-22 BDT/kg\n\tOnline: 19-24 BDT/kg"},
        {"Carrot", "Local Market: 12-17 BDT/kg\n\tOnline: 14-19 BDT/kg"},
        {"Watermelon", "Local Market: 10-15 BDT/kg\n\tOnline: 12-17 BDT/kg"},
        {"Pumpkin", "Local Market: 12-17 BDT/kg\n\tOnline: 14-19 BDT/kg"},
        {"Cabbage", "Local Market: 14-19 BDT/kg\n\tOnline: 16-21 BDT/kg"},
        {"Cauliflower", "Local Market: 17-22 BDT/kg\n\tOnline: 19-24 BDT/kg"}
    };

    // Fertilizer buy prices
    map<string, string> fertilizerBuy =
    {
        {"Urea", "Local Market: 20-25 BDT/kg\n\tOnline: 22-27 BDT/kg"},
        {"DAP", "Local Market: 25-30 BDT/kg\n\tOnline: 27-32 BDT/kg"},
        {"MOP", "Local Market: 30-35 BDT/kg\n\tOnline: 32-37 BDT/kg"},
        {"NPK", "Local Market: 15-20 BDT/kg\n\tOnline: 17-22 BDT/kg"},
        {"Compost", "Local Market: 10-15 BDT/kg\n\tOnline: 12-17 BDT/kg"}
    };
    // Organic Fertilizer
    map<string, string> organicfertilizer =
    {
        {"Cow Dung", "Local Market: 5-10 BDT/kg\n\tOnline: 7-12 BDT/kg"},
        {"Chicken Manure", "Local Market: 8-13 BDT/kg\n\tOnline: 10-15 BDT/kg"},
        {"Goat Manure", "Local Market: 6-11 BDT/kg\n\tOnline: 8-13 BDT/kg"},
        {"Sheep Manure", "Local Market: 7-12 BDT/kg\n\tOnline: 9-14 BDT/kg"},
        {"Horse Manure", "Local Market: 9-14 BDT/kg\n\tOnline: 11-16 BDT/kg"},
        {"Rabbit Manure", "Local Market: 10-15 BDT/kg\n\tOnline: 12-17 BDT/kg"},
        {"Pig Manure", "Local Market: 8-13 BDT/kg\n\tOnline: 10-15 BDT/kg"}
    };

    system("cls");
    cout << endl << endl << endl;
    cout << "\t📞 Farmer Help Center" << endl;

    cout << "\t1. 📇 Contact Officer" << endl;
    cout << "\t2. 🌾 Crop Buying Price" << endl;
    cout << "\t3. 🌾 Crop Selling Price" << endl;
    cout << "\t4. 💊 Fertilizer Buying Price" << endl;
    cout << "\t5. 🌱 Organic Fertilizer Buying Price" << endl;
    cout << "\t0. 🔙 Back to Menu" << endl;
    cout << "\tEnter your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        system("cls");
        cout << endl << endl << endl;
        cout << "\t📇 Contact Officer" << endl;

        string jela;
        cout<<"\tEneter your division name: ";
        cin >> jela;
        transform(jela.begin(), jela.end(), jela.begin(), ::tolower);

        // Convert to proper case for matching
        map<string, string> mapToProper =
        {
            {"dhaka", "Dhaka"}, {"chittagong", "Chittagong"}, {"khulna", "Khulna"},
            {"rajshahi", "Rajshahi"}, {"barisal", "Barisal"}, {"sylhet", "Sylhet"},
            {"rangpur", "Rangpur"}, {"mymensingh", "Mymensingh"}
        };

        if (mapToProper.count(jela))
        {
            jela = mapToProper[jela];
            cout << "\tContact Officer for " << jela << ":" << endl;
            cout << "\t" << officerContact[jela] << endl;
            int n;
            cout<<"\n\t0.Back to Farmer Help Center"<<endl;
            cout<<"\t1.Back to Menu"<<endl;
            cout << "\tEnter your choice: ";
            cin>>n;
            if(n==0)
            {
                system("cls");
                framerhelp();
            }
            else if(n==1)
            {
                system("cls");
                menu();
            }

        }
        else
        {
            cout << "\tInvalid District. Please try again." << endl;
        }

    }
    else if (choice == 2)
    {
        system("cls");
        cout << endl << endl << endl;
        cout << "\t🌾 Crop Buying Price" << endl;
        cout << "\tAvailable Crops:\n" << endl;
        for (const auto &entry : cropBuy)
        {
            cout << "\t- " << entry.first << ":\n\t  " << entry.second << endl;
        }
        int n;
        cout<<"\n\t0.Back to Farmer Help Center"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>n;
        if(n==0)
        {
            system("cls");
            framerhelp();
        }
        else if(n==1)
        {
            system("cls");
            menu();
        }

    }

    else if(choice == 3)
    {
        system("cls");
        cout << endl << endl << endl;
        cout << "\t🌾 Selling Price" << endl;
        cout << "\tAvailable Crops:\n" << endl;
        for (const auto &entry : cropSell)
        {
            cout << "\t- " << entry.first << ":\n\t  " << entry.second << endl;
        }
        int n;
        cout<<"\n\t0.Back to Farmer Help Center"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>n;
        if(n==0)
        {
            system("cls");
            framerhelp();
        }
        else if(n==1)
        {
            system("cls");
            menu();
        }

    }






    else if (choice == 4)
    {
        system("cls");
        cout << endl << endl << endl;
        cout << "\t💊 Fertilizer Buying Price" << endl;
        cout << "\tAvailable Fertilizers:\n" << endl;
        for (const auto &entry : fertilizerBuy)
        {
            cout << "\t- " << entry.first << ":\n\t  " << entry.second << endl;
        }
        cout << "\n\t0.Back to Farmer Help Center" << endl;
        cout << "\t1.Back to Menu" << endl;
        cout << "\tEnter your choice: ";
        int n;
        cin >> n;
        if (n == 0)
        {
            system("cls");
            framerhelp();
        }
        else if (n == 1)
        {
            system("cls");
            menu();
        }


    }
    else if (choice == 0)
    {
        menu();
    }
    else if (choice == 5)
    {
        system("cls");
        cout << endl << endl << endl;
        cout << "\t🌱 Organic Fertilizer Buying Price" << endl;
        cout << "\tAvailable Organic Fertilizers:\n" << endl;
        for (const auto &entry : organicfertilizer)
        {
            cout << "\t- " << entry.first << ":\n\t  " << entry.second << endl;
        }
        cout << "\n\t0.Back to Farmer Help Center" << endl;
        cout << "\t1.Back to Menu" << endl;
        int n;
        cout << "\tEnter your choice: ";
        cin >> n;
        if (n == 0)
        {
            system("cls");
            framerhelp();
        }
        else if (n == 1)
        {
            system("cls");
            menu();
        }
    }

    else
    {
        cout << "\tInvalid choice. Please try again." << endl;
        int n;
        cout<<"\n\t0.Back to Farmer Help Center"<<endl;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>n;
        if(n==0)
        {
            system("cls");
            framerhelp();
        }
        else if(n==1)
        {
            system("cls");
            menu();
        }
    }
}
