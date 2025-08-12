# Reverse Each Element of Singly Linked List

This C program demonstrates how to reverse the digits of each element (node) in a singly linked list. It does **not** reverse the entire list's order, only the digits within each node's data.

## Features

- **InsertFirst**: Insert new elements at the beginning of the singly linked list.
- **Display**: Print the elements of the singly linked list.
- **Reverse (element-wise)**: Reverse the digits of each node’s integer data in-place.

## Example

**Input linked list:**

| 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL


**After reversing each element:**

| 11 |->| 82 |->| 71 |->| 14 |->| 6 |->| 98 |->NULL


## How It Works

- Build a singly linked list by inserting elements at the head.
- Traverse the list, and for each node, reverse its integer data.
- Display the list before and after the reversal process.

## File Structure

- `program1.c`: Source code implementing the functions and demonstration.

## Compilation & Execution

1. **Compile:**
    ```
    gcc program1.c -o reverse_elements
    ```
2. **Run:**
    ```
    ./reverse_elements or reverse_elements.exe
    ```

## Functions

- `void InsertFirst(PPNODE head, int value)`
  - Inserts a new node with `value` at the beginning.

- `void Display(PNODE head)`
  - Prints all nodes in the list.

- `void Reverse(PNODE head)`
  - Reverses the digits of integer data for each node.

## Author

- Mangesh Ashok Bedre


