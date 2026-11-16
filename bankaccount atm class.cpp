#include <iostream>
using namespace std;
class Bankaccount{
	public:
		int accountNumber;
		double balance;
		string accountHolderName;
		
		Bankaccount() {
        accountNumber = 12345;
        balance = 0.0;
        accountHolderName = "Unknown";
    }
    	Bankaccount(int an, string ah) {
    		accountNumber = an;
    		accountHolderName = ah;
			balance = 0.0;		
		}
		Bankaccount(int an, double b, string ah)
		 {
    		accountNumber = an;
    		balance = b;
    		accountHolderName = ah;		
		}
		void displayInfo(){
			cout<<"Account Holder Name = "<<accountHolderName<<endl;
			cout<<"Account Number = "<<accountNumber<<endl;
			cout<<"Current Balance = "<<balance<<endl;
			cout<<endl;
		}	
};
int main()
{
	Bankaccount atm;
	atm.displayInfo();
	
	Bankaccount atm1(67890, "CEO");
	atm1.displayInfo();
	
	Bankaccount atm2(13579, 0.0, "HR");
	atm2.displayInfo();
	
	return 0;
}
