#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"\
    << _amount << ";created" << std::endl;

}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"\
    << _amount << ";closed";
    if (_accountIndex != 0)
        std::cout << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:"\
    << _amount;
    if (_amount < withdrawal)
    {
        std::cout << ";withdrawal:" << "refused" << std::endl;
        return (false);
    }
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" \
        << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:"\
    << _amount;
    _amount += deposit;
    std::cout << ";deposit:" << deposit << \
    ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"\
    << _amount << ";deposits:" << _nbDeposits << \
    ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void )
{
    std::time_t ttm = std::time(0);
    std::tm *ltime = localtime(&ttm);
    std::cout << "[" << ltime->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << ltime->tm_mon + 1;
	std::cout << std::setfill('0')  << std::setw(2) << ltime->tm_mday;
	std::cout << "_" << std::setfill('0')  << std::setw(2) << ltime->tm_hour;
	std::cout << std::setfill('0')  << std::setw(2) << ltime->tm_min;
	std::cout << std::setfill('0')  << std::setw(2) << ltime->tm_sec;
	std::cout << "] ";
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount \
    << ";deposits:" << _totalNbDeposits << ";withdrawals:" \
    << _totalNbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}