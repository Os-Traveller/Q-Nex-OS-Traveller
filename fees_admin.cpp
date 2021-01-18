#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void aligner(int count, string str);
void accountant();
void payment_verifyer();
void payment_verifyer_tution_fees();
void payment_verifyer_other_fees();

int main(){
	accountant();
	return 0;
}

void accountant(){
	aligner(2,"\n");
	aligner(5,"\t");
	cout << "....Account Management...." << endl << endl;
	aligner(2,"\t");
	cout << "1. Verify Payment" << endl;
	aligner(2,"\t");
	cout << "2. Waiver Management" << endl;
	aligner(2,"\t");
	cout << "Press Zero '0' to go Home" << endl << endl;
	aligner(2,"\t");
	cout << "Input : ";
	int key;
	cin >> key;
	cout << endl;

	switch(key){
		case 1: 
			payment_verifyer();
			break;
		case 2:
			break;
		default:
			cout << "get out" << endl;
			
	}
}

void payment_verifyer(){
	
	aligner(5,"\t");
	cout << "Verify Payment" << endl << endl << endl;
	aligner(2,"\t");
	cout << "1. Tution Fees" << endl;
	aligner(2,"\t");
	cout << "2. Other Fees" << endl << endl << endl;

	aligner(2,"\t");
	cout << "Option : ";
	int key;
	cin >> key;

	switch(key){
		case 1: payment_verifyer_tution_fees();
			break;
		case 2:	payment_verifyer_other_fees();
			break;
		default :
			aligner(2,"\t");
			system("clear");
			cout << "Wrong Input, Try Again Later : ";
			payment_verifyer();			
	}
}

void payment_verifyer_tution_fees(){

	vector <string> id; 
	vector <int> amount;

	ifstream reader("Fees/Online_Payment_tution_fees.txt");
	ofstream writer; 
	if(reader.is_open()){
		while(!reader.eof()) {
			string temp_id;
			reader >> temp_id;
			id.push_back(temp_id);

			int temp_amount;
			reader >> temp_amount;
			amount.push_back(temp_amount);
		}
		reader.close();
	} else {
		aligner(2,"\t");
		cout << "Error Occoured!" << endl << endl;
	}

	while(!id.empty()) {
	 	reader.open("Fees/"+id[0]+"_fees.txt");
		if(reader.is_open()) {
	 		int tution_fees_amount;
	 		reader >> tution_fees_amount;
	 		
			int other_fees_amount;
			reader >> other_fees_amount;
			
			reader.close();
				
			string option;
			aligner(2,"\t");
			cout << "Press V to verify R to reject : ";
			cin >> option;
			if(option == "V" | option == "v")
				tution_fees_amount+=amount[0];
			
			writer.open("Fees/"+id[0]+"_fees.txt");
			writer << tution_fees_amount << endl;
			writer << other_fees_amount << endl;
			writer.close();

			amount.erase(amount.begin());
			id.erase(id.begin());
		} else {
			aligner(2,"\t");
			cout << "Error Occoured" << endl;
		}

		aligner(2,"\t");
		string option;
		cout << "Press c to continue and any key to exit : ";
		cin >> option;
		if(option=="c")
			continue;
		else
			break;
	 	}
}
void payment_verifyer_other_fees(){
	vector <string> id; 
	vector <int> amount;

	ifstream reader("Fees/Online_Payment_other_fees.txt");
	ofstream writer; 
	if(reader.is_open()){
		while(!reader.eof()) {
			string temp_id;
			reader >> temp_id;
			id.push_back(temp_id);

			int temp_amount;
			reader >> temp_amount;
			amount.push_back(temp_amount);
		}
		reader.close();
	} else {
		aligner(2,"\t");
		cout << "Error Occoured!" << endl << endl;
	}

	while(!id.empty()) {
	 	reader.open("Fees/"+id[0]+"_fees.txt");
		if(reader.is_open()) {
	 		int tution_fees_amount;
	 		reader >> tution_fees_amount;
	 		
			int other_fees_amount;
			reader >> other_fees_amount;
			
			reader.close();
				
			string option;
			aligner(2,"\t");
			cout << "Press V to verify R to reject : ";
			cin >> option;
			if(option == "V" | option == "v")
				other_fees_amount+=amount[0];
			
			writer.open("Fees/"+id[0]+"_fees.txt");
			writer << tution_fees_amount << endl;
			writer << other_fees_amount << endl;
			writer.close();

			amount.erase(amount.begin());
			id.erase(id.begin());
		} else {
			aligner(2,"\t");
			cout << "Error Occoured" << endl;
		}

		aligner(2,"\t");
		string option;
		cout << "Press c to continue and any key to exit : ";
		cin >> option;
		if(option=="c")
			continue;
		else
			break;
	 	}
}

void aligner(int count, string str){
	for(int i=1; i<=count; i++){
		cout << str;
	}
}