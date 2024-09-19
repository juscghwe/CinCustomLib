/**
 * @file cin_custom.hpp
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @brief Class for handling user input of various types with error checking and (optional) ESC key handling.
 * This file is part of {{CinCustomLib}}, which is licensed unter the MIT License. See the LICENSE file for details.
 */

#ifndef CINCUSTOMLIB_CINCUSTOMLIB_CINCUSTOM_H_
#define CINCUSTOMLIB_CINCUSTOMLIB_CINCUSTOM_H_

#include <string>

namespace CinCustomLib {

class CinCustom
{
  public:
    /**
     * @brief Templated method to read user input of the specified `type`, with error handling, (optional) error message and (optional) ESC key cancellation.
     * @param prompt `std::string&` Prompt message to display to the user.
     * @param showError `bool = true` (opt) If `true` displays an error hint including the wrong type used.
     * @param acceptEsc `bool = true` (opt) If `true` allows cancellation of input using the ESC key.
     * @return 
     */
    template <typename T>
    auto getInput(const std::string& prompt, bool showError = true, bool acceptEsc = true) -> T;

  private:
    /**
     * @private
     * @brief Clears input stream errors and ignores invalid characters.
     */
    static void clearInput();

    /**
   * @private
   * @brief Checks if the ESC key has been pressed.
   * @return `True` if ESC key is pressed, otherwise `false`.
   */
    static bool handleEscKey();
};

}  // namespace CinCustomLib

#include "../src/cin_custom.tpp"  // For template function definitions

#endif  // CINCUSTOMLIB_CINCUSTOMLIB_CINCUSTOM_H_