#include"file.h"
#include"recommend.h"
#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void savemoisture(int moisture)
{
    FILE* file = fopen("moisture_log.txt", "a");
    if (file != nullptr)
    {
        time_t now = time(0);
        char* dt = ctime(&now);
        dt[strcspn(dt, "\n")] = '\0';
        fprintf(file, "%s,%d\n", dt, moisture);
        fclose(file);
    }
    else
    {
        cout << "\t Error opening file for logging.\n";
    }
}
void viewmoisture()
{
    system("cls");
    FILE* file = fopen("moisture_log.txt", "r");
    if (file == nullptr)
    {
        cout << "\t No log file found."<<endl;
        system("pause");
        return;
    }

    char line[256];
    cout<<endl<<endl<<endl;
    cout << " Moisture Data:"<<endl;;
    while (fgets(line, sizeof(line), file))
    {
        cout <<"\t"<< line;
    }

    fclose(file);
    system("pause");
}
void lastmoisture()
{
    system("cls");
    FILE* file = fopen("moisture_log.txt", "r");
    if (file == nullptr)
    {
        cout << " No log file found."<<endl;
        return;
    }



    char line[256];
    string lastLine;
    while(fgets(line,sizeof(line),file))
    {
        lastLine= line;
    }
    cout<<endl<<endl<<endl;
    cout << " \t Last Moisture Data:"<<endl;;
    cout <<"\t"<< lastLine;

    fclose(file);
    system("pause");
}
