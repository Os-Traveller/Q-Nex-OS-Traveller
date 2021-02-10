#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const string Id = "135";

void FeesAndWaiver();

int main() {
    FeesAndWaiver();
}

void FeesAndWaiver() {
    FilePrinter("Design/FeesFirstPage");
    cout << endl;
    cout << "\t\t\tInput : ";
    int key;
    cin >> key;
    
    switch(key) {
        case 1: 
            system("clear");
            FilePrinter("FeesFiles/StatusFees"+Id);
            cout << endl << endl;
            cout << "\t\t\t" << "Press 0. to go Back" << endl << endl;
            cout << "\t\t\t" << "Press 1 to exit" << endl << endl;
            cout << "\t\t\t" << "Input : ";
            cin >> key;
            switch(key) {
                case 0:
                    FeesAndWaiver();
                    break;
                default:
                    system("exit");
            }     
        case 2:
            break;
        case 3:
        default:
            system("clear");
            FeesAndWaiver();
    }
}