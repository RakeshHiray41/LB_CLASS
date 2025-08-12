# Display Largest Digit of Each Element in Singly Linked List

This C program demonstrates how to display the **largest digit** of each element in a singly linked list.

## Features

- **InsertFirst**: Insert new elements at the beginning of the singly linked list.
- **DisplayLarge**: Print the largest digit present in each node's integer data.

## Example

**Input linked list:**

| 11 |->| 28 |->| 424 |->| 6 |->| 101 |->| 89 |->NULL


**Output:**

1 is Largest of digit of element
8 is Largest of digit of element
4 is Largest of digit of element
6 is Largest of digit of element
1 is Largest of digit of element
9 is Largest of digit of element


## How It Works

- Build a singly linked list by inserting elements at the head.
- For each node, extract digits and determine the largest among them.
- Output the largest digit for each node.

## File Structure

- `program5.c`: Source code implementing the functions and demonstration.

## Compilation & Execution

1. **Compile:**
    ```
    gcc program5.c -o largest_digit
    ```
2. **Run:**
    ```
    ./largest_digit or largest_digit.exe
    ```

## Functions

- `void InsertFirst(PPNODE head, int value)`
  - Inserts a new node with `value` at the beginning.

- `void DisplayLarge(PNODE head)`
  - Prints the largest digit of each element in the list.

## Author

- Mangesh Ashok Bedre
