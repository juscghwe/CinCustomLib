[//]: <> (@file readme.md)
[//]: <> (@author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>)

# CinCustomLib

## Overview

**CinCustomLib** is a C++ library designed to simplify user input handling in console applications. It provides a templated class `CinCustom` for reading user input of various types, with built-in error handling and optional ESC key cancellation.

## Features

- **Templated Input Handling**: Supports various data types including `int`, `double`, `std::string`, etc.
- **Error Handling**: Provides error messages for invalid input based on the expected type.
- **ESC Key Cancellation**: Allows users to cancel input operations by pressing the ESC key.
- **Customizable Input Prompt**: Easily customize the prompt message to guide users.

## Usage Example

Here's a basic example demonstrating how to use `CinCustomLib`:

```cpp
#include <iostream>
#include "CinCustomLib/cin_custom.hpp"

int main() {
    CinCustomLib::CinCustom inputHandler;

    try {
        // Get an integer input from the user
        int age = inputHandler.getInput<int>("Enter your age: ", true, true);
        std::cout << "You entered age: " << age << std::endl;

        // Get a string input from the user
        std::string name = inputHandler.getInput<std::string>("Enter your name: ", true, true);
        std::cout << "You entered name: " << name << std::endl;

        // Get a double input from the user
        double height = inputHandler.getInput<double>("Enter your height (in meters): ", true, true);
        std::cout << "You entered height: " << height << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```

In this example, the `CinCustomLib::CinCustom` class is used to prompt the user for various types of input. If the user enters invalid data or presses ESC, the library will handle the input accordingly.

## How to Implement in Another Project

1. Include the Library:

    - Copy the `CinCustomLib` folder into your project's directory.

2. Add to Your Project:

    - Ensure that the header files (`cin_custom.hpp`) are included in your project's include path.
    - Make sure the source files (`cin_custom.cpp`, `cin_custom.tpp`) are compiled as part of your project.

3. Use the Library:

    - Include the `cin_custom.hpp` header in your source files where you want to use the library.
    - Create an instance of the `CinCustomLib::CinCustom` class and use its `getInput` method to handle user input.

4. Compile and Run:

    - Build your project as usual. Make sure to link any necessary libraries if you're using a build system that requires explicit linking.

5. Testing:

    - Write tests to ensure the library behaves as expected. Use the provided test examples as a starting point.

For more detailed instructions and advanced usage, refer to the documentation in the source files.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

## Contact

For any questions or support, please reach out to the author at [juscghwe on GitHub](https://github.com/juscghwe).

Feel free to modify the content as needed to better fit your project's specific details or additional instructions.