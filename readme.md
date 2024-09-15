[//]: readme.md

# CinCustomLib

CinCustomLib is a small library that simplifies user input handling in C++ projects. It allows for customizable input prompts and type-safe validation.

## Features
- Type-safe input handling
- Customizable prompts
- Error message display for invalid inputs

## Example

```cpp
#include <CinCustomLib/CinCustom.h>
#include <iostream>

int main() {
    CinCustomLib::CinCustom inputHandler;
    int age = inputHandler.getInput<int>("Enter your age: ");
    std::cout << "You entered: " << age << std::endl;
    return 0;
}
```