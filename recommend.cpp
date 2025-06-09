#include"recommend.h"
#include"soil.h"
#include"file.h"
#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void recommendCrop(string crop) {

    transform(crop.begin(), crop.end(), crop.begin(), ::tolower);

    map<string, string> soilType = {
        {"mung", "Lal Mati (Red Soil)"},
        {"masur", "Lal Mati (Red Soil)"},
        {"chhola", "Lal Mati (Red Soil)"},
        {"rice", "Atel Mati (Clay Soil)"},
        {"paddy", "Atel Mati (Clay Soil)"},
        {"jute", "Atel Mati (Clay Soil)"},
        {"groundnut", "Balu Mati (Sandy Soil)"},
        {"watermelon", "Balu Mati (Sandy Soil)"},
        {"corn", "Balu Mati (Sandy Soil)"}
    };

    map<string, string> fertilizer = {
        {"mung", "Compost, Cow Dung"},
        {"masur", "Organic Compost, Lime"},
        {"chhola", "Organic Fertilizer, Phosphate"},
        {"rice", "Balanced NPK, Cow Dung"},
        {"paddy", "Urea, TSP, MOP"},
        {"jute", "Cow Dung, Potash"},
        {"groundnut", "Compost, Gypsum"},
        {"watermelon", "Organic Matter, Potassium"},
        {"corn", "Compost, Nitrogen Fertilizer"}
    };

    map<string, string> tips = {
        {"mung", "Use lime if pH < 6, ensure drip irrigation."},
        {"masur", "Sow in November-December, use mulch."},
        {"chhola", "Dry area preferred, avoid waterlogging."},
        {"rice", "Transplant in rows, keep soil wet initially."},
        {"paddy", "Ensure standing water in early stage."},
        {"jute", "Sow before rain, use retting properly."},
        {"groundnut", "Loose sandy soil, frequent light watering."},
        {"watermelon", "Need hot, dry climate, avoid overwatering."},
        {"corn", "Requires deep soil and full sunlight."}
    };
    if (soilType.count(crop) == 0) {
        cout << "\t❌ Sorry! No recommendation available for: " << crop << endl;
        return;
    }

    cout << "\t 📦  Crop Recommendation " << endl<<endl;

    cout << "\t🌾 Crop Name        : " << crop << endl
         << "\t🧱 Suitable Soil    : " << soilType[crop] << endl
         << "\t🌿 Fertilizer       : " << fertilizer[crop] << endl
         << "\t⚙️ Tips             : " << tips[crop] << endl;


    cout << "\t1.Back to Menu" << endl;
    int a;
    cout << "\tEnter your choice: ";
    cin >> a;

    if (a == 1)
        menu();

}
