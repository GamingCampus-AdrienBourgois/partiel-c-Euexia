#include "Solution2.h"
#include <fstream>
#include <iostream>
#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::string filePath = "BankAccount/" + accountName;

	std::ifstream input(filePath);

	if (!input.is_open()) {
		throw std::runtime_error("File not found" + filePath);}


    float balance = 0.0f;

		char transaction;
		float amount;


        while (input >> transaction >> amount)
        {
            // Update balance based on transaction type
            if (transaction == '+')
            {
                balance += amount; // Deposit
        }
            else if (transaction == '-')
            {
                balance -= amount; // Withdrawal
            }
    }

        input.close();
	    return -1.0f;
}

#endif
