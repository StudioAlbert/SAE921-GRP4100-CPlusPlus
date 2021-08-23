# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

# Solution
project ("SAE921-GRP4100-CPlusPlus")

# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "01-Basics-Enum")
add_subdirectory ("01-Basics-Enum")
# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "06-OOP-Basics")
add_subdirectory ("06-OOP-Basics")
# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "06-OOP-Operator")
add_subdirectory ("06-OOP-Operator")
# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "06-OOP-Inheritance")
add_subdirectory ("06-OOP-Inheritance")
# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "06-OOP-Virtuality")
add_subdirectory ("06-OOP-Virtuality")
# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "07-DeeperIntoStd-AlgorithmsFind")
add_subdirectory ("07-DeeperIntoStd-AlgorithmsFind")
# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "08-Maths-Angle")
add_subdirectory ("08-Maths-Angle")
