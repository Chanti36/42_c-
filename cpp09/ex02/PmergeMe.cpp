/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:44:07 by sgil-moy          #+#    #+#             */
/*   Updated: 2024/06/03 15:15:36 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str);

PmergeMe::PmergeMe() 
{

}

PmergeMe::~PmergeMe() 
{
    
};

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    *this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	(void)other;
	return (*this);
}

const char*	PmergeMe::InvalidElementException::what() const throw()
{
	return ("Invalid element");
}

//__________________________________________________________________________________

static void printVec(std::vector<unsigned int>& vec)
{
	std::vector<unsigned int>::const_iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++)
		std::cout << *itr << " ";

	std::cout << std::endl;
}

static std::vector<unsigned int> mergeVecs(std::vector<unsigned int>& left, std::vector<unsigned int>& right)
{
    std::vector<unsigned int> result;

    // Merge the two vectors until one of them becomes empty
    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            result.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }

    // Add any remaining elements from the left vector
    while (!left.empty())
	{
        result.push_back(left.front());
        left.erase(left.begin());
    }

    // Add any remaining elements from the right vector
    while (!right.empty())
	{
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return (result);
}

static std::vector<unsigned int> mergeInsertVec(std::vector<unsigned int>& vec) 
{
    // Base case: a vector with zero or one elements is already sorted
    if (vec.size() <= 1)
        return (vec);

    // Divide the vector into two halves
    std::vector<unsigned int> left(vec.begin(), vec.begin() +  (vec.size() / 2));
    std::vector<unsigned int> right(vec.begin() +  (vec.size() / 2), vec.end());

    // Recursively sort the left and right halves
    left = mergeInsertVec(left);
    right = mergeInsertVec(right);

    // Merge the sorted halves
    return (mergeVecs(left, right));
}

void PmergeMe::sortVec(int argc, char **argv)
{
	std::vector<unsigned int> storage;

	for (int i = 1; i < argc; i += 1) 
    	storage.push_back(ft_stou(argv[i]));

	std::cout << "<Vector Before: ";
	printVec(storage);

	std::clock_t start = std::clock();
	storage = mergeInsertVec(storage);
	double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * MICROSECOND;

	std::cout << "Vector After: ";
	printVec(storage);

	std::cout << "Took " << time_taken << " microseconds to order the vector" << std::endl;
}

//__________________________________________________________________________________________________________-

static void printList(std::list<unsigned int>& lst)
{
	std::list<unsigned int>::const_iterator itr;
	
    for (itr = lst.begin(); itr != lst.end(); itr++)
		std::cout << *itr << " ";
	
    std::cout << std::endl;
}

static std::list<unsigned int> mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
    std::list<unsigned int> result;

    // Merge the two vectors until one of them becomes empty
    while (!left.empty() && !right.empty())
	{
        if (left.front() < right.front())
		{
            result.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }

    // Add any remaining elements from the left vector
    while (!left.empty())
	{
        result.push_back(left.front());
        left.erase(left.begin());
    }

    // Add any remaining elements from the right vector
    while (!right.empty())
	{
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return (result);
}

static std::list<unsigned int> mergeInsertList(std::list<unsigned int>& lst) 
{
    // Base case: a list with zero or one elements is already sorted
    if (lst.size() <= 1)
        return lst;

    // Divide the list into two halves
    int mid = lst.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;

    for (int i = 0; i < mid; i++) 
    {
        left.push_back(lst.front());
        lst.pop_front();
    }
    right = lst;

    // Recursively sort the left and right halves
    left = mergeInsertList(left);
    right = mergeInsertList(right);

    // Merge the sorted halves
    return (mergeLists(left, right));
}

void PmergeMe::sortList(int argc, char **argv)
{
	std::list<unsigned int> storage;

	for (int i = 1; i < argc; i += 1)
		storage.push_back(ft_stou(argv[i]));

    std::cout << "List Before: ";
	printList(storage);

	std::clock_t start = std::clock();
	storage = mergeInsertList(storage);
	double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * MICROSECOND;

    std::cout << "List After: "; 
	printList(storage);

	std::cout << "Took " << time_taken << " microseconds to order the list" << std::endl;
}
