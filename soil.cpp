#include"soil.h"
#include<bits/stdc++.h>
using namespace std;
vector<string>soiltype(int choice,string &soilname)
{
vector<string> alluvial = {"Rice", "Jute", "Wheat", "Sugarcane", "Vegetables", "Banana", "Watermelon"};
    vector<string> red = {"Pineapple", "Tea", "Ginger", "Turmeric", "Banana"};
    vector<string> black = {"Mustard", "Sesame", "Potato", "Wheat", "Cotton"};
    vector<string> loamy = {"Rice", "Wheat", "Potato", "Vegetables", "Eggplant", "Chili"};
    vector<string> sandy = {"Groundnut", "Radish", "Sweet Potato", "Carrot"};
    vector<string> clay = {"Rice", "Taro", "Water Chestnut"};
    vector<string> saline = {"Salt-tolerant Rice", "Pumpkin"};
    vector<string> acidic = {"Tea", "Ginger", "Pineapple"};
    if(choice==1)
    {
        soilname = "Alluvial Soil";
        return alluvial;
    }
    else if(choice==2)
    {
        soilname = "Red Soil";
        return red;
    }
    else if(choice==3)
    {
        soilname = "Black Soil";
        return black;
    }
    else if(choice==4)
    {
        soilname = "Loamy Soil";
        return loamy;
    }
    else if(choice==5)
    {
        soilname = "Sandy Soil";
        return sandy;
    }
    else if(choice==6)
    {
        soilname = "Clay Soil";
        return clay;
    }
    else if(choice==7)
    {
        soilname = "Saline Soil";
        return saline;
    }
    else if(choice==8)
    {
        soilname = "Acidic Soil";
        return acidic;
    }
    else
    {
        soilname = "Unknown Soil";
        return {};
    }

}
