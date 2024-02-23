/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:51:35 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/02/23 14:19:36 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit )
{
	Account::makeDeposit(initial_deposit);
}

Account::~Account()
{

}

void	Account::_displayTimestamp( void )
{
	
}

//-------------------------------------------------------------

int	Account::getNbAccounts( void )  
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{

}

//-------------------------------------------------------------

void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{	
	if (withdrawal > _totalAmount)
		return false;
	_totalAmount -= withdrawal;
	return true;
}
int		Account::checkAmount( void ) const
{
	return _totalAmount;
}

void	Account::displayStatus( void ) const
{
	//print status	
}
