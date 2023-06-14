**Matrix Operations**

This code implements various matrix operations, including addition, subtraction, multiplication, symmetry check, identity check, and equality check. It allows the user to input matrix elements, perform operations on the matrices, and display the results.

**Getting Started**

To use this code, follow the instructions below:

Ensure you have a C++ compiler installed on your system.
Copy the entire code into a C++ source file (e.g., matrix_operations.cpp).
Compile and run the code using your C++ compiler.

**Functionality**

**Setting Matrix Dimensions**
The set() function prompts the user to enter the dimensions of the two matrices (MATRIX1 and MATRIX2). The dimensions include the number of rows and columns for each matrix.

**Inserting Matrix Elements**
The Matrrix1insertion() and Matrix2insertion() functions allow the user to input the elements for MATRIX1 and MATRIX2, respectively. The user will be prompted to enter the elements row by row.

**Displaying Matrices**
The showMATRIX1() and showMATRIX2() functions display the elements of MATRIX1 and MATRIX2, respectively, in a readable format.

**Matrix Operations**
The code supports the following matrix operations:

Addition: The addition() function adds MATRIX1 and MATRIX2 if they have compatible dimensions.

Subtraction: The subtract() function subtracts MATRIX2 from MATRIX1 if they have compatible dimensions.

Multiplication: The multiplication() function multiplies MATRIX1 and MATRIX2 element-wise if they have compatible dimensions.

Symmetry Check: The symetrical() function checks if MATRIX1 is symmetric or skew symmetric.

Identity Check: The identity() function checks if both MATRIX1 and MATRIX2 are identity matrices.

Equality Check: The equality() function checks if MATRIX1 and MATRIX2 are equal.

**Menu-driven Interface**

The code provides a menu-driven interface to interact with the matrix operations. After setting the matrix dimensions and inserting elements, you can choose various options from the menu:

Show Matrices: Displays the elements of MATRIX1 and MATRIX2.

Addition: Performs matrix addition and displays the result.

Subtraction: Performs matrix subtraction and displays the result.

Multiplication: Performs matrix multiplication and displays the result.

Symmetry Check: Checks the symmetry of MATRIX1.

Identity Check: Checks if both MATRIX1 and MATRIX2 are identity matrices.

Equality Check: Checks if MATRIX1 and MATRIX2 are equal.

Exit Program: Exits the program.

**Note**
The code supports matrix dimensions up to 10x10.

Invalid inputs, such as entering dimensions or values outside the range [1-9], will prompt the user to try again.

The code assumes that the dimensions of MATRIX1 and MATRIX2 are set before inserting elements or performing operations.
