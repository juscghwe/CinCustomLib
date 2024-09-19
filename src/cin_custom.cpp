/// cin_custom.cpp

/**
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @brief Custom Cin class to quickly integrate within learning projects.
 * @details Allows input of `type` and filters the input accordingly.
 * @headerfile CinCustomLib/cin_custom.h
 * 
 * @example
 * ```
 * CinCustom inputHandler;
 * int age = inputHandler.getInput<int>("Enter your age: ", true, true);
 * std::cout << "You entered age: " << age << std::endl;
 * ```
 */

#include "../include/CinCustomLib/cin_custom.hpp"
#include <conio.h>
#include <iostream>
#include <limits>

namespace CinCustomLib {

/**
 * @private
 * @brief Clears input stream errors and ignores invalid characters.
 */
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