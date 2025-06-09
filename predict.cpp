#include"predict.h"
#include"file.h"
#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void predictSoilHealth(vector<int>&history)
{
    system("cls");
    long long sum=0;
    for(long long i=0; i<history.size(); i++)
    {
        sum+=history[i];
    }
    double ave = double(sum) / history.size();
    cout << "\n\tSoil Health Prediction:"<<endl;
    cout << "\tAverage Moisture: " << ave << endl;
    if (ave < 350.00)
        cout << "\tPrediction: Soil is too dry "<<endl;
    else if (ave > 600.00)
        cout << "\tPrediction: Soil is over-watered "<<endl;
    else if(ave>350.0&&600.00>ave)
        cout << "\tPrediction: Soil moisture is healthy "<<endl;
        else  cout << "\tNo data to predict.\n";
    system("pause");
}
