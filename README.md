# Sudoku Solver

A simple **Sudoku Solver implemented in C++ using a recursive backtracking algorithm**.

This project was created to practice recursion, backtracking, constraint checking, and algorithmic problem-solving.

## Overview

The program solves a standard **9×9 Sudoku puzzle**.

The user enters the Sudoku grid through the terminal. Empty cells are represented by `-1`. The program then attempts to find a valid solution using backtracking.

If a solution exists, the solved Sudoku is displayed. If no valid solution can be found, the program reports the puzzle as unsolvable.

## How It Works

The solver follows these steps:

1. Search the grid for an empty cell.
2. Try numbers from `1` to `9`.
3. Check whether the number is valid in:
   - The current column
   - The current row
   - The corresponding 3×3 subgrid
4. If the number is valid, place it in the cell.
5. Recursively continue solving the remaining cells.
6. If the choice eventually leads to an invalid configuration, undo the placement and try another number.
7. Continue until the Sudoku is solved or all possibilities have been exhausted.

## Algorithm

The project uses **backtracking with recursion**.

The `safe()` function checks whether a number can legally be placed in a particular cell.

The `solve()` function recursively explores possible values and backtracks whenever a selected value does not lead to a solution.

This is a classic example of a **constraint satisfaction problem**.

## Input

The program accepts **81 integers** representing the Sudoku grid.

Use:

```text
-1
```

to represent an empty cell.

For example:

```text
5 3 -1 -1 7 -1 -1 -1 -1
6 -1 -1 1 9 5 -1 -1 -1
-1 9 8 -1 -1 -1 -1 6 -1
...
```

## Output

If the puzzle can be solved, the program prints:

```text
Solved
```

followed by the completed 9×9 Sudoku grid.

If no solution exists, it prints:

```text
Unsolvable
```

## Technologies

- **C++**
- Arrays
- Recursion
- Backtracking
- Constraint checking
- Algorithm
- Problem solving
- Competitive programming

## Concepts Practiced

Through this project, I practiced:

- Recursive problem solving
- Backtracking
- Searching through possible solutions
- Constraint validation
- Two-dimensional arrays
- Breaking a complex problem into smaller steps
- Algorithmic thinking

## How to Run

### 1. Clone the repository

```bash
git clone https://github.com/nirraZ14/sudoku-solver.git
```

### 2. Open the project directory

```bash
cd sudoku-solver
```

### 3. Compile

Using g++:

```bash
g++ sudoku.cpp -o sudoku
```

### 4. Run

Windows:

```bash
sudoku.exe
```

Linux/macOS:

```bash
./sudoku
```

Then enter the 9×9 Sudoku grid, using `-1` for blank cells.

## Project Structure

```text
sudoku-solver/
│
├── sudoku.cpp
└── README.md
```
