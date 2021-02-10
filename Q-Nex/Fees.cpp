#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
using namespace std;

const string tab3 = "\t\t\t";   // for 3 times tab;
const int srcWidth = 100;       // total 100 character size of console
const string id = "135"; 
string stLine; 
string key;

void PrintCenter(string text);  // for printing center in console
void FilePrinter(string FileName);  
void FileToVector(string FileName, vector <string> &vecotrName);
void FeesAndWaiver();
void Navigator();               // to meassage to go home or previous page 
void StatusFees();
void OnlinePayment();
void TutionFeesOnlinePayment();
void TransIdGen();

int main() {
    system("clear");
    FeesAndWaiver();
    return 0;
}

void Navigator(string &key) {
    cout << tab3 << "B. Previous Page" << endl << endl; 
    cout << tab3 << "H. Home Page" << endl << endl;
    cout << tab3 << "Input : ";
    cin >> key;
}

void FilePrinter(string FileName) {
    ifstream Reader;
    Reader.open(FileName);
    if(Reader.is_open()) {
        string TempString;          // temporary string that stoores a line of file while loop is running 
        while(!Reader.eof()) {
            getline(Reader,TempString);
            cout << TempString << endl;
        }
    } else {
        cout << "Error Occured" << endl;
    }
}

void PrintCenter(string text) {
    int textSize = text.size();
    for(int i=1; i<=(srcWidth/2)-(textSize/2); i++)
        cout << " ";
    cout << text << endl;
}

void FileToVector(string FileName, vector <string> &vectorName) {
    ifstream fileReader(FileName);
    if(fileReader.is_open()) {
        while(!fileReader.eof()) {
            string tempStr;
            getline(fileReader,tempStr);
            vectorName.push_back(tempStr);
        }
    } else {
        cout << FileName << "Not Found" << endl;
    }
}

void FeesAndWaiver() {
    for(int i=0; i<srcWidth; i++)
        stLine+="_";
    cout << endl << endl;
    cout << stLine << endl << endl;
    PrintCenter("Q-Nex");
    cout << endl;
    PrintCenter("Fees And Waiver");
    cout << stLine << endl << endl;
    cout << tab3 << "1. Status" << endl << endl;
    cout << tab3 << "2. Online Payment" << endl << endl;
    cout << tab3 << "3. History" << endl << endl;
    Navigator(key);
    
    if(key=="1") {
        system("clear");
        StatusFees();
    } else if(key=="2") {
        system("clear");
        OnlinePayment();
    } else if(key=="3") {
        
    } else if(key=="4") {

    } else if(key=="P"||key=="p") {

    } else if(key=="H"||key=="h") {

    } else {

    }
}

void StatusFees() {

    cout << endl << endl;
    cout << stLine << endl << endl;
    PrintCenter("Q-nex");
    cout << endl;
    PrintCenter("Student Fees Status");
    cout << stLine << endl << endl;
    
    vector <string> dataStd;
    int vecItemCounter=0;
    FileToVector("FeesFiles/StatusFees"+id+".txt",dataStd);
    cout << tab3 << "Name" << tab3 << ": " << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Department" << "\t\t" << ": " << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Intake" << tab3 << ": " << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Section" << tab3 << ": " << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Total Demand" << "\t\t" << ": "  << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Total Paid" << "\t\t" << ": " << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Total Waiver" << "\t\t" << ": " << dataStd[vecItemCounter++] << endl;
    cout << tab3 << "Total Due" << "\t\t" << ": " << dataStd[vecItemCounter] << endl;
    cout << stLine << endl << endl;
}

void OnlinePayment() {
    cout << endl << stLine << endl << endl;
    PrintCenter("Q-Nex");
    cout << endl << endl;
    PrintCenter("Pay Online");
    cout << stLine << endl << endl;
    cout << tab3 << "1. Tution Fees" << endl << endl; 
    cout << tab3 << "2. Other Fees" << endl << endl;
    Navigator(key);
    
    if(key=="1") {
        system("clear");
        TutionFeesOnlinePayment();
    } else if(key=="2") {

    } else if(key=="B"||key=="b") {

    } else if(key=="H"||key=="h") {

    } else {

    }
    
    
}

void TutionFeesOnlinePayment() {
    string phoneNum, stdId;
    int amount; 

    cout << endl << stLine << endl << endl; 
    PrintCenter("Q-Nex");
    cout << endl; 
    PrintCenter("Quantum-Cash");
    cout << stLine << endl << endl;
    cout << tab3 << "Phone Number\t\t: ";
    cin >> phoneNum;
    cout << endl;
    cout << tab3 << "Amount\t\t\t: ";
    cin >> amount;
    cout << endl;
    cout << tab3 << "ID\t\t\t: ";
    cin >> stdId;
    cout << endl;
    cout << endl;


}

void TrasIdGen() {

}
