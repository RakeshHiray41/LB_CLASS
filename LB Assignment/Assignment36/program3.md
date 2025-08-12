# Display Product of Digits of Each Element in Singly Linked List

This C program demonstrates how to display the **product of all digits of each element** in a singly linked list. The digit `0` is excluded from the product calculation for each node.

## Features

- **InsertFirst**: Insert new elements at the beginning of the singly linked list.
- **DisplayDigitProduct**: Calculate and print the product of digits for each node (ignoring zeros).

## Example

**Input linked list:**

| 11 |->| 28 |->| 424 |->| 6 |->| 101 |->| 89 |->NULL


**Output:**

1 is product of digit of element
16 is product of digit of element
32 is product of digit of element
6 is product of digit of element
1 is product of digit of element
72 is product of digit of element


## How It Works

- Build a singly linked list by inserting elements at the head.
- Traverse the list, and for each node, calculate the product of its digits (excluding zeros).
- Print the product for each node in the list.

## File Structure

- `program3.c`: Source code implementing the functions and demonstration.

## Compilation & Execution

1. **Compile:**
    ```
    gcc program3.c -o digit_product
    ```
2. **Run:**
    ```
    ./digit_product or digit_product.exe
    ```

## Functions

- `void InsertFirst(PPNODE head, int value)`
  - Inserts a new node with `value` at the beginning.

- `void DisplayDigitProduct(PNODE head)`
  - Calculates and prints the product of the digits of each node's data (ignoring 0 digits).

## Author

- Mangesh Ashok Bedre
