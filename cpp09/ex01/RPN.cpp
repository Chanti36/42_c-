/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:13:15 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 14:47:45 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int ft_stoi(const std::string& str)
{
    int num;
    std::stringstream ss(str);

    ss >> num;
    return (num);
}

RPN::RPN()
{
    
};

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN& RPN::operator=(const RPN &other)
{
	(void)other;
    return (*this);
}

RPN::~RPN()
{
    
};

long long RPN::calculate(const std::string& expr)
{
    int left;
    int right;
    int result;

    std::stringstream postfix(expr);
    std::stack<int> operationStack;
    std::string str;

    while (postfix >> str)
    {
        if (str == "+" || str == "-" || str == "/" || str == "*")
        {
            if (operationStack.size() < 2)
                throw NoResultException();

            right = operationStack.top();
            operationStack.pop();
            left = operationStack.top();
            operationStack.pop();

            switch (str.at(0))
            {
                case '+': 
                    result = left + right;
                break;

                case '-':
                    result = left - right;
                break;

                case '/':
                    if (right != 0)
                        result = left / right;
                    else
                        throw DivisionByZeroException();
                break;

                case '*':
                    result =  left * right;
                break;
            }
            operationStack.push(result); 
        }
        else
            operationStack.push(ft_stoi(str));
    }
	if (operationStack.empty())
        throw NoResultException();
    return (operationStack.top());
}

const char*	RPN::NoResultException::what() const throw()
{
	return ("RPN exception: No result. Wrong format");
}

const char*	RPN::DivisionByZeroException::what() const throw()
{
	return ("RPN exception: division by zero");
}