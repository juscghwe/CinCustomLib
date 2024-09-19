/**
 * @file cin_custom.cpp
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @headerfile CinCustomLib/cin_custom.hpp
 * This file is part of {{CinCustomLib}}, which is licensed unter the MIT License. See the LICENSE file for details.
 */

#include "../include/CinCustomLib/cin_custom.hpp"
#include <conio.h>
#include <iostream>
#include <limits>

namespace CinCustomLib {

void CinCustom::clearInput()
{
    std::cin.clear();                                                    // Clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore invalid input
}

bool CinCustom::handleEscKey()
{
    char ch = _getch();
    if (ch == 27) {
        std::cout << "ESC key pressed. Exiting ..." << std::endl;
        return true;
    }
    return false;
}

}  // namespace CinCustomLib