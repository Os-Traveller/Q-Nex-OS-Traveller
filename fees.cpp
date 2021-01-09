#include<iostream>
#include<fstream>

using namespace std;
void aligner(int count, string str);
void fess_and_waiver();
void pay_online();
void payment_taker();

int main(){
	fess_and_waiver();
	return 0;
}

void aligner(int count, string str){
	for(int i=1; i<=count; i++){
		cout << str;
	}
}

void fess_and_waiver(){
	aligner(2,"\n");
	aligner(5,"\t");
	cout << "....Fees and Waiver...." << endl << endl;
	aligner(2,"\t");
	cout << "1. Status" << endl;
	aligner(2,"\t");
	cout << "2. Pay Online" << endl;
	cout << endl;
	aligner(2,"\t");
	cout << "Choose Any Option Please : ";
	int key;
	cin >> key;
	switch(key){
		case 1:
			aligner(2,"\t");
			cout << "Winter is Coming...." << endl;
			break;
		case 2:
			pay_online();
			break;
		default:
			return fess_and_waiver();
	}
}

void pay_online(){
	aligner(2,"\n");
	aligner(5,"\t");
	cout << "....Pay Here!...." << endl << endl << endl;
	aligner(3,"\t");
	cout << "Choose Payment Type: " << endl << endl;
	aligner(2,"\t");
	cout << "1. Tution Fee" << endl;
	aligner(2,"\t");
	cout << "2. Others" << endl;
	cout << endl;

	int key;
	aligner(2,"\t");
	cout << "Choose Any Option Please : ";
	cin >> key;

	switch(key){
		case 1:
			payment_taker();
			break;
		case 2: 
			payment_taker();
			break;
		default:
			cout << "Wrong Option Chosen";
			return pay_online();
	}
}

void payment_taker(){
	aligner(5,"\t");
	cout << "Pay Here!" << endl;
	aligner(2,"\t");
	cout << "Mobile No \t: ";
	string cell_no;
	cin >> cell_no;
	aligner(2,"\t");
	cout  << "Amount \t: ";
	int amount;
	cin >> amount;
}
