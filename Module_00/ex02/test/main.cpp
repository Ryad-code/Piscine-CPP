#include "Account.hpp"

int main()
{
	
	Account	account1(5);
//	Account account2(25);
//	Account account3(10);
	
	account1.displayAccountsInfos();
	
	account1.makeDeposit(5);

	account1.displayAccountsInfos();

	account1.makeWithdrawal(9);

	account1.displayAccountsInfos();

	return (0);
}
