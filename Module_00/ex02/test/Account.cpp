#include <iostream>
#include "Account.hpp"

int index = 1;
int Account::nbAccounts = 0;
int Account::totalAmount = 0;
int Account::totalNbDeposits = 0;
int Account::totalNbWithdrawals = 0;

Account::Account(int initial_deposit)/* : amount(0), nbDeposits(9), nbWithdrawals(5)*/
{
	this->accountIndex = index;
	index++;
	this->amount = initial_deposit;
	this->nbDeposits = 0;
	this->nbWithdrawals = 0;
	nbAccounts++;
	totalAmount += initial_deposit;
}

Account::~Account()
{
}

int	Account::getNbAccounts(void)
{
	std::cout << "accounts:" << nbAccounts << ";";
	return nbAccounts;
}

int	Account::getTotalAmount(void)
{
	std::cout << "total:" << totalAmount << ";";
	return totalAmount;
}

int	Account::getNbDeposits(void)
{
	std::cout << "deposits:" << totalNbDeposits << ";";
	return totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	std::cout << "withdrawals:" << totalNbWithdrawals << ";";
	return totalNbWithdrawals;
}

int	Account::displayAccountsInfos(void)
{
	getNbAccounts();
	getTotalAmount();
	getNbDeposits();
	getNbWithdrawals();
	std::cout << std::endl;
	return 0;
}

void	Account::makeDeposit(int deposit)
{
	amount += deposit;
	totalAmount += deposit;
	nbDeposits++;
	totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (amount > withdrawal)
	{
		amount -= withdrawal;
		totalAmount -= withdrawal;
		nbWithdrawals++;
		totalNbWithdrawals++;
		return true;
	}
	else
		return false;
}
