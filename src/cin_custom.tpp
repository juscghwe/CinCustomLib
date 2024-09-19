/**
 * @file cin_custom.tpp
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @headerfile CinCustomLib/cin_custom.hpp
 * This file is part of {{CinCustomLib}}, which is licensed unter the MIT License. See the LICENSE file for details.
 */

#include <iostream>
#include <typeinfo>
#include "../include/CinCustomLib/cin_custom.hpp"

namespace CinCustomLib {

template <typename T>
auto CinCustom::getInput(const std::string& prompt, bool acceptEsc, bool showError) -> T
{
    T input;
    bool validInput = false;

    while (!validInput) {
        std::cout << prompt;

        if (acceptEsc && handleEscKey()) {
            throw std::runtime_error("Operation canceled by the user.");
        }

        if (!(std::cin >> input)) {
            if (showError) {
                std::cout << "Invalid input. Please enter a value of type: " << typeid(T).name() << std::endl;
            }
            clearInput();  // Clear error flag and ignore invalid characters
        } else {
            validInput = true;
        }
    }

    return input;
}

}  // namespace CinCustomLib