/// cin_custom.cpp

/**
 * @author Julian Schweizer
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

#include "../include/CinCustomLib/cin_custom.h"
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

}  // namespace CinCustomLib