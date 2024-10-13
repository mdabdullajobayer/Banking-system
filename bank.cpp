// Banking system
#include <iostream>
using namespace std;

class bankAcc {
private:
    int acno;
    float balance; 
    string name;

public: 
    bankAcc(int acno, float balance, string name) {
        this->acno = acno;    
        this->balance = balance;
        this->name = name;
    }

    void deposit(int amount) {
        balance += amount; 
        cout << "Deposit Success!" << endl; 
    }

    void withraw(int amount){
        if(balance<amount){
            cout<<"balance short"<<endl;
        }else{
            balance -= amount; 
            cout << "Withraw Success!" << endl; 
        }
    }
    void display() {
        cout << "Account No: " << acno << endl;
        cout << "Balance: " << balance << endl;
        cout << "Account Holder: " << name << endl;
    }
};

int main() {
    bankAcc myAccount(10, 100, "md"); 
    myAccount.deposit(50); 
    myAccount.withraw(500); 
    myAccount.display();
    return 0;
}
