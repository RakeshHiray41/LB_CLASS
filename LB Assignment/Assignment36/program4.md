# Display Smallest Digit of Each Element in Singly Linked List

This C program demonstrates how to display the **smallest digit** of each element in a singly linked list.

## Features

- **InsertFirst**: Insert new elements at the beginning of the singly linked list.
- **DisplaySmall**: Print the smallest digit present in each node's integer data.

## Example

**Input linked list:**

| 11 |->| 28 |->| 424 |->| 6 |->| 101 |->| 89 |->NULL


**Output:**

1 is smallest of digit of element
2 is smallest of digit of element
2 is smallest of digit of element
6 is smallest of digit of element
0 is smallest of digit of element
8 is smallest of digit of element


## How It Works

- Build a singly linked list by inserting elements at the head.
- For each node, extract digits and determine the smallest among them.
- Output the smallest digit for each node.

## File Structure

- `program4.c`: Source code implementing the functions and demonstration.

## Compilation & Execution

1. **Compile:**
    ```
    gcc program4.c -o smallest_digit
    ```
2. **Run:**
    ```
    ./smallest_digit or smallest_digit.exe
    ```

## Functions

- `void InsertFirst(PPNODE head, int value)`
  - Inserts a new node with `value` at the beginning.
- `void DisplaySmall(PNODE head)`
  - Prints the smallest digit of each element in the list.

## Author

- Mangesh Ashok Bedre
