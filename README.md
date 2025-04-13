# Linked List Program (C++)

## 📌 Purpose

This program demonstrates basic **linked list** operations in **C++**.  
It allows you to manage a list of integer values.  
The list starts with the following default values:

```
20 → 30 → 50 → 70 → 90
```

---

## 🎯 Features / Main Points

The linked list supports the following operations:

### 1. 🔼 Insert at Beginning
- Add a new value at the **start** of the list.

### 2. 🔽 Insert at End
- Add a new value at the **end** of the list.

### 3. ➕ Insert at Position
- Add a new value at a **specific position** in the list.
- If the position is 1 or less, it will be added at the start.

### 4. ❌ Delete a Node
- Remove a node by entering its **value**.
- If the value is found, the node is deleted.

### 5. 📋 Display List
- Print the entire list from **head to tail**.
- Shows the order of values.

---

## 🛠 How It Works

The list is built using a **singly linked list**:
- Each node contains an `int` value.
- Each node points to the **next** node.
- The `head` pointer represents the **start** of the list.

---

## 🧪 Initial State

When you run the program, it automatically creates the following list:

```
Linked List Operations
List: [20] -> [30] -> [50] -> [70] -> [90] -> NULL

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 1
Enter value to insert at beginning: 10

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 3
Enter value and position to insert: 40 4

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 3
Enter value and position to insert: 60 6

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 3
Enter value and position to insert: 80 8

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 2
Enter value to insert at end: 100

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 5
List: [10] -> [20] -> [30] -> [40] -> [50] -> [60] -> [70] -> [80] -> [90] -> [100] -> NULL

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 4
Enter value to delete: 100
Deleted node with value 100

Menu:
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete node
5. Display list
6. Exit
Enter your choice: 5
List: [10] -> [20] -> [30] -> [40] -> [50] -> [60] -> [70] -> [80] -> [90] -> NULL

```
