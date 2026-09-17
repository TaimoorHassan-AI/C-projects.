#include<iostream>
#include<string>
#include<vector>
using namespace std;

class account {
private:
    int accountid;
    string name;
    string cnic;
    string accounttype;
	string phone;
    double balance;

public:

    // Constructor
    account(int id, string n, string c, string act, string p, double bal) {
        accountid = id;
        name = n;
        cnic = c;
        accounttype = act;
        phone = p;
        balance = bal;
    }

    // Display account information
    void display() {
        cout << "\n------ Account Details ------" << endl;
        cout << "Account ID: " << accountid << endl;
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Account Type: " << accounttype << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "Balance: " << balance << endl;
    }
        
        int getAccountID() {
        return accountid;
    }
    // Deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Deposited Money: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance = balance - amount;
            cout << "Withdrawn Money: " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    // Check balance
    void checkBalance() {
        cout << "\nCurrent Balance: " << balance << endl;
    }
};

int main(){
	vector <account> accounts;
	
	account account1(
        101,
        "Taimoor Hassan",
        "4210112345671",
        "Saving",
        "03001234567",
        500
    );
    
    account account2(
        3434,
        "Takla",
        "4210112345671",
        "current",
        "030023334567",
        2000
    );

    accounts.push_back(account1);
    accounts.push_back(account2);
    
    
    for (int i=0; i <accounts.size();i++){
    	accounts[i].display();
	}
    
    int id;

cout << "\nEnter Account ID for deposit: ";
cin >> id;

bool found = false;

for (int i = 0; i < accounts.size(); i++) {

    if (accounts[i].getAccountID() == id) {

        double amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        accounts[i].deposit(amount);

        found = true;
        break;
    }
}

if (!found) {
    cout << "Account not found!" << endl;
}
cout << "\nEnter Account ID for withdrawal: ";
cin >> id;

found = false;

for (int i = 0; i < accounts.size(); i++) {

    if (accounts[i].getAccountID() == id) {

        double amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        accounts[i].withdraw(amount);

        found = true;
        break;
    }
}

if (!found) {
    cout << "Account not found!" << endl;
}


	
	
	
}

