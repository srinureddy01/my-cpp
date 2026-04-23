# C++ STL Data Structures & Containers Guide

A quick reference for the most commonly used data structures and components in the C++ Standard Template Library (STL).

---

## 📦 STL Containers [CLICK HERE](<Sequence containers>)

### 🔹 Sequence Containers (Ordered, Position-Based)

- **vector** – Dynamic array that resizes automatically  
- **array** – Fixed-size array  
- **deque** – Double-ended queue  
- **list** – Doubly linked list  
- **forward_list** – Singly linked list  

---

### 🔹 Associative Containers (Sorted, Key-Based)

- **map** – Key-value pairs (unique keys, sorted)  
- **multimap** – Allows duplicate keys  
- **set** – Unique sorted values  
- **multiset** – Allows duplicate values  

---

### 🔹 Unordered Containers (Hash-Based, Faster Lookup)

- **unordered_map** – Key-value pairs (unsorted)  
- **unordered_multimap** – Allows duplicate keys  
- **unordered_set** – Unique unsorted values  
- **unordered_multiset** – Allows duplicate values  

---

### 🔹 Container Adaptors

- **stack** – LIFO (Last In, First Out)  
- **queue** – FIFO (First In, First Out)  
- **priority_queue** – Pops highest-priority element first  

---

## 🔧 Other Important STL Components

### 🧵 Strings
- **string** – Standard text container  
- **wstring** – Wide-character string  

### 🧠 Smart Pointers (Memory Management)
- **unique_ptr** – Exclusive ownership  
- **shared_ptr** – Shared ownership  
- **weak_ptr** – Non-owning reference  

### 🧩 Utility Types
- **pair** – Stores two values  
- **tuple** – Stores multiple values  
- **optional** – Value that may or may not exist  
- **variant** – Type-safe union  
- **any** – Can hold any type  

---

## 🔁 Iterators & Algorithms

- **Iterators** – Used to traverse containers (`begin()`, `end()`)  
- **Algorithms** (from `<algorithm>`):
  - `sort()`
  - `find()`
  - `count()`
  - `reverse()`
  - `max_element()`

---

## ⚡ Quick Cheat Sheet

| Need              | Use                     |
|-------------------|--------------------------|
| Resizable list    | `vector`                |
| Key → Value       | `map` / `unordered_map` |
| Unique items      | `set`                   |
| LIFO              | `stack`                 |
| FIFO              | `queue`                 |
| Two values        | `pair`                  |
| Optional value    | `optional`              |

---

## ✅ Example

```cpp
#include <iostream>
#include <vector>
#include <map>

int main() {
    std::vector<int> nums = {1, 2, 3};
    std::map<std::string, int> ages;

    ages["Alice"] = 25;
    ages["Bob"] = 30;

    for (int n : nums) {
        std::cout << n << " ";
    }

    std::cout << "\nAlice's age: " << ages["Alice"] << std::endl;

    return 0;
}
```

---

## 📌 Notes

- Use **vector** for most general-purpose dynamic arrays  
- Prefer **unordered_map/set** when order is not required and speed matters  
- Use **map/set** when sorted order is important  
- Smart pointers help prevent memory leaks  

---
