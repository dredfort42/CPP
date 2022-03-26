/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:19:38 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/06 17:43:10 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	    Account::_nbAccounts = 0;
int	    Account::_totalAmount = 0;
int	    Account::_totalNbDeposits = 0;
int	    Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp()
{
    time_t      rawtime;
    struct tm   *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    std::cout   << std::setfill('0') <<  "[" 
                << std::setw(4) << timeinfo->tm_year + 1900
                << std::setw(2) << timeinfo->tm_mon + 1
                << std::setw(2) << timeinfo->tm_mday 
                << "_"
                << std::setw(2) << timeinfo->tm_hour 
                << std::setw(2) << timeinfo->tm_min
                << std::setw(2) << timeinfo->tm_sec 
                << "] ";
}

void    Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout   << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
                << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) :
_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";amount:" << _amount
                << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";p_amount:" << _amount
                << ";deposit:" << deposit << ";amount:";
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";p_amount:" << _amount
                << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout   << withdrawal << ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}