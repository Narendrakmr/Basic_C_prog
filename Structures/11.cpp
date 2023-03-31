#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int acc_no;
    string customer_name;
    double balance;
public:

    BankAccount(int no, string name, double bal) {
        acc_no = no;
        customer_name = name;
        balance = bal;
    }
    

    BankAccount() {
        acc_no = 0;
        customer_name = "";
        balance = 0.0;
    }
    
    void withdraw(double amt) {
        if (balance >= amt) {
            balance -= amt;
            cout << "Withdrawal of $" << amt << " successful. New balance is $" << balance << endl;
        } else {
            cout << "Withdrawal failed. Insufficient balance." << endl;
        }
    }
    
    void deposit(double amt) {
        balance += amt;
        cout << "Deposit of $" << amt << " successful. New balance is $" << balance << endl;
    }
    
    int get_acct_no() {
        return acc_no;
    }
    
    string get_customer_name() {
        return customer_name;
    }
    
    double get_balance() {
        return balance;
    }
};

int main() {

    BankAccount my_acct(123456, "John Doe", 1000.0);
    
 
    my_acct.withdraw(500.0);
    my_acct.deposit(1000.0);
    
    return 0;
}
