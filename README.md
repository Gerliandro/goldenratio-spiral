# OpenGL Golden Ratio Spiral

![Golden Ratio](https://user-images.githubusercontent.com/63611415/170500662-d090543b-d673-4611-8535-464a5a346ec0.png)

A small personal project that consists of rendering the spiral graphic representation of the golden ratio, the project is written in C++ using the OpenGL API for graphics rendering and the SFML and GLM libraries to support the creation of consistent windows and matrix operations.

## You will need:
- A C++ Compiler      (**MAC OS not yet supported !** In the **Windows OS**, please use the **MinGW** , MSVC suport is coming...)
- [CMake](https://cmake.org)
- [Ninja Generator](https://ninja-build.org)
- [SFML](https://www.sfml-dev.org)
- [GLM](https://github.com/g-truc/glm)

> Note: If you are using **Windows OS**, the necessary libraries will already be included in the project root directory (in the **lib** folder). However, for the execution of the project it will be necessary to include the dynamic libraries (**.dll's**) of the SFML library (present in the **bin** folder of the same) for its environment variables

## How Build:

- In Terminal create a directory called **build**
- Enter in the created **build** directory
- Set Ninja as the main generator and the directory where the **CMakeLists.txt** file is (which in this project is a directory above the tree)
    - For that use `cmake -G "Ninja" ..`
- After configuring our project with Cmake, we can now build it
    - For that use `cmake --build ./` , the **./** indicates that we will build the contents of the directory above in the file tree
- Now, we can run the project that is in the **bin** folder
    - For that use `./bin/goldenratio-spiral`
