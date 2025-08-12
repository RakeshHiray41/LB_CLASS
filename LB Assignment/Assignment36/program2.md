# Display Palindrome Elements of Singly Linked List

This C program demonstrates how to display all **palindrome elements** (nodes whose data reads the same forwards and backwards) from a singly linked list.

## Features

- **InsertFirst**: Insert new elements at the beginning of the singly linked list.
- **DisplayPallindrome**: Print all palindrome elements in the singly linked list.

## Example

**Input linked list:**

| 11 |->| 28 |->| 424 |->| 6 |->| 121 |->| 89 |->NULL


**Output of palindrome elements:**


11 is pallindrome element
424 is pallindrome element
6 is pallindrome element
121 is pallindrome element


## How It Works

- Build a singly linked list by inserting elements at the head.
- Traverse the list, and for each node, check if its integer data is a palindrome.
- Display the number if it meets the palindrome condition.

## File Structure

- `program2.c`: Source code implementing the functions and demonstration.

## Compilation & Execution

1. **Compile:**
    ```
    gcc program2.c -o palindrome_elements
    ```
2. **Run:**
    ```
    ./palindrome_elements or palindrome_elements.exe
    ```

## Functions

- `void InsertFirst(PPNODE head, int value)`
  - Inserts a new node with `value` at the beginning.

- `void DisplayPallindrome(PNODE head)`
  - Checks and prints all nodes in the list whose integer data is a palindrome.

## Author

- Mangesh Ashok Bedre
