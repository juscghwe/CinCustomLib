/// cin_custom.tpp

/**
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @brief Templated method to handle input of any `type`.
 * @param prompt `std::string&` Reference to the string prompting the user to input in the terminal.
 * @param showError `bool = true` (opt) Shows a hint telling the user the wrong type he used.
 * @param acceptEsc `bool = true` (opt) The entire program can be canceled through using the ESC-key.
 */

#include <iostream>
#include <typeinfo>
#include "../include/CinCustomLib/cin_custom.h"

namespace CinCustomLib {

template <typename T>
auto CinCustom::getInput(const std::string& prompt, bool showError, bool acceptEsc) -> T
{
    T input;
    bool validInput = false;

    while (!validInput) {
        std::cout << prompt;

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