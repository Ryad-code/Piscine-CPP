#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account	{

public:
//	typedef Account		t;

	static int	getNbAccounts(void);
	static int	getTotalAmount(void);
	static int	getNbDeposits(void);
	static int	getNbWithdrawals(void);
	static int	displayAccountsInfos(void);

	Account(int initial_deposit);
	~Account(void);

	void    makeDeposit(int deposit);
	bool    makeWithdrawal(int withdrawal);

private:
	static int	nbAccounts;
	static int	totalAmount;
	static int	totalNbDeposits;
	static int	totalNbWithdrawals;

	int		accountIndex;
	int		amount;
	int		nbDeposits;
	int		nbWithdrawals;
};

#endif




