/// cin_custom.h
/**
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 */

#ifndef CINCUSTOMLIB_CINCUSTOMLIB_CINCUSTOM_H_
#define CINCUSTOMLIB_CINCUSTOMLIB_CINCUSTOM_H_

#include <string>

namespace CinCustomLib {

class CinCustom
{
  public:
    template <typename T>
    auto getInput(const std::string& prompt, bool showError = true, bool acceptEsc = true) -> T;

  private:
    static void clearInput();
    static bool handleEscKey();
};

}  // namespace CinCustomLib

#include "../src/cin_custom.tpp"  // For template function definitions

#endif  // CINCUSTOMLIB_CINCUSTOMLIB_CINCUSTOM_H_