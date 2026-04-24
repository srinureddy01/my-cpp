# C++ Associative Containers: std::map Guide

This repository contains examples and documentation for using **Associative Containers** in C++, with a focus on `std::map`.

---

## 🚀 Overview
Associative containers store elements in **key-value pairs**. Unlike vectors, elements are retrieved by their **key** rather than their position.

### Key Features
*   **Unique Keys:** No two elements can have the same key.
*   **Ordered:** Elements are automatically sorted by key (ascending).
*   **Fast Lookups:** Search, insertion, and deletion take **O(log n)** time.

---

## 🛠️ Basic Syntax

### Initialization
```cpp
#include <map>
#include <string>

// Empty map
std::map<std::string, int> myMap;

// Initialized map
std::map<std::string, int> ages = {
    {"Alice", 25},
    {"Bob", 30},
    {"Charlie", 35}
};
```

### Essential Operations

| Operation | Code | Result |
| :--- | :--- | :--- |
| **Insert/Update** | `m["key"] = val;` | Adds new or updates existing key. |
| **Safe Access** | `m.at("key");` | Accesses value; throws error if key missing. |
| **Size** | `m.size();` | Returns number of pairs. |
| **Check** | `m.count("key");` | Returns 1 if exists, 0 if not. |
| **Erasure** | `m.erase("key");` | Removes the pair by key name. |

---

## 🔄 Printing Data (Looping)

### Using Iterators (Standard)
```cpp
for (auto it = myMap.begin(); it != myMap.end(); ++it) {
    std::cout << it->first << " -> " << it->second << std::endl;
}
```
*   `it->first`: Accesses the **Key**.
*   `it->second`: Accesses the **Value**.

### Using Structured Bindings (C++17+)
```cpp
for (const auto& [name, age] : ages) {
    std::cout << name << " is " << age << " years old." << std::endl;
}
```

---

## ⚠️ Important Considerations

### 1. The `[]` Side Effect
Using the `[]` operator to look up a key that **doesn't exist** will automatically create it with a default value (e.g., `0` for integers). Use `find()` to avoid this.

### 2. Map vs. Unordered_Map
*   **std::map:** Kept sorted, uses a Red-Black Tree.
*   **std::unordered_map:** Not sorted, uses a Hash Table (Faster $O(1)$ lookup).

---

## 💻 Full Implementation Example
```cpp
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> inventory;
    
    // Adding data
    inventory["Apple"] = 50;
    inventory["Banana"] = 20;
    
    // Check and Print
    if (inventory.find("Apple") != inventory.end()) {
        std::cout << "Apples in stock: " << inventory["Apple"] << std::endl;
    }
    
    return 0;
}
```
