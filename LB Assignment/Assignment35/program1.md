# ✅ program1.c — Perfect Number Detection

## 🔍 Description
This program identifies and displays all **perfect numbers** in the singly linear linked list.

A **perfect number** is equal to the sum of its proper divisors (excluding itself).  
Example:
- 6 → 1 + 2 + 3 = 6  
- 28 → 1 + 2 + 4 + 7 + 14 = 28

## 📌 Functionalities
- `InsertFirst(PPNODE, int)` — Insert a node at the beginning.
- `Display(PNODE)` — Display all list elements.
- `DisplayPerfect(PNODE)` — Display perfect numbers only.

## 🧪 Sample Input
```c
InsertFirst(&head, 89);
InsertFirst(&head, 6);
InsertFirst(&head, 41);
InsertFirst(&head, 17);
InsertFirst(&head, 28);
InsertFirst(&head, 11);
```

## ✅ Sample Output
```
6 is perfect number
28 is perfect number
```