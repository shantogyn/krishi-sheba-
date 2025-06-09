#include"moisture.h"
#include"file.h"
#include<bits/stdc++.h>
#include <windows.h>
int getSimulatedMoisture()
{
    return rand() % 800;
}
string currentTime()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    return string(dt);
}