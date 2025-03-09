# Square Matrix Operations in C++

## Overview
This project implements a **Square Matrix** class in C++ that provides functionalities such as:
- Setting values in the matrix.
- Retrieving values from specific positions.
- Extracting diagonal elements.
- Displaying the entire matrix.

## Features
- Uses **dynamic allocation** with a 2D `vector`.
- Implements **exception handling** for out-of-range access.
- Provides an **easy-to-use interface** for matrix manipulation.

## How It Works
1. **Matrix Initialization**: A `squareMatrix` object is instantiated with a size `n`.
2. **Set Elements**: Values are assigned to specific positions in the matrix using `setElement()`.
3. **Get Values**: Values can be retrieved from specific indices using `getValue()`.
4. **Extract Diagonal**: The `getDiagonalValues()` function returns all diagonal elements.
5. **Display Matrix**: The `showMatrix()` function prints the entire matrix.

## Installation
Ensure you have a C++ compiler installed. You can use **GCC** or **MSVC**.

## Compilation & Execution
### Using g++
```bash
g++ -o matrix_operations matrix_operations.cpp
./matrix_operations
```
### Using MSVC (Windows)
```powershell
cl matrix_operations.cpp
matrix_operations.exe
```

## Example Output
```
The value at the given indices is 4
The diagonal values of the matrix are: 3 4 2
Here is a display of your full matrix:
3 5 1 
3 4 1 
7 9 2 
```

## License
This project is open-source and free to use.
