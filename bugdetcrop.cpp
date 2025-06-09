#include"bugdetcrop.h"
#include"recommend.h"
#include"soil.h"
#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void budgetCrop(int totalBudget)


{
    system("cls");
    // products price for poor framer
     map<string, pair<int, int>> cropPrice = {
        {"Rice", {28, 32}},
        {"Wheat", {30, 35}},
        {"Maize", {20, 25}},
        {"Potato", {12, 16}},
        {"Tomato", {15, 20}},
        {"Onion", {18, 22}},
        {"Garlic", {25, 30}},
        {"Ginger", {20, 25}},
        {"Chili", {30, 35}},
        {"Ridge Gourd", {15, 20}},
        {"Carrot", {10, 15}},
        {"Watermelon", {8, 12}},
        {"Pumpkin", {10, 15}},
        {"Cabbage", {12, 16}},
        {"Cauliflower", {15, 20}},
    };
    cout<<"\t======Budget Crop======"<<endl<<endl;

    cout <<"\t"<< "💰 Total Budget: " << totalBudget << " BDT\n";
    cout << "\t🔎 Showing recommended crops within your budget:\n\n";

    bool found = false;
    for (auto it : cropPrice) {
        int minPrice = it.second.first;
        if (minPrice <= totalBudget) {
            found = true;
            int maxKg = totalBudget / minPrice;
            cout << "\t🌾 " << it.first << " ➤ Min Price: " << minPrice << "BDT/kg"
                 << " ➤ You can buy: " << maxKg << " kg\n";
        }
    }

        int a;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;

        if(a==1)menu();

    if (!found) {
        cout << "\t❌ Sorry! No crops match your budget.\n";


        int a;
        cout<<"\t1.Back to Menu"<<endl;
        cout << "\tEnter your choice: ";
        cin>>a;
        if(a==1)menu();
    }

    cout << "\t\n📌 Tip: Prices vary — try to check weekly updates from the local market.\n";
}

