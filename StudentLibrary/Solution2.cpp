#include "Solution2.h"
#include <ostream>
#include <fstream>
#include <iostream>
#include <sstream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::string filePath = "BankAccount/" + accountName + ".txt";

	std::ifstream input(filePath);

	if (!input.is_open()) {
		throw std::runtime_error("File not found" + filePath);}


    float balance = 0.0f;

    std::string transaction;


    while (std::getline(input, transaction))
    {
        std::istringstream lineStream(transaction);
        std::string operation;
        float amount;

        if (lineStream >> operation >> amount)
        {
            if (operation == "DEPOSIT") {
                balance += amount;
            }
            else if (operation == "WITHDRAW") {
                balance -= amount;
            }
            else {
                throw std::exception("Invalid operation");
            }
        }
    }

        input.close();
	    return balance;
}

#endif
