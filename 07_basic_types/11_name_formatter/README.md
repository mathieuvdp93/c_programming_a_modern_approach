# name formatter

> formats name in following way: last name, a comma, first initial followed by period.

**Date:** 31/10/2026
**Tags:** 

## 🎯 Goal

What I wanted to learn:

- get and process the user input in a couple of different ways, and think about pros and cons of each

## 💡 What I Learned

- don't declare strings that you want to put user input in like this: char *a; this creates a pointer to nothing and can't be written to later, same for char a[]; the compiler decides the size on initialization and since there is nothing to assign size = 0,
- declare it as char a[] = "abc" or char a[15]; then you will be able to access the elements later.
- when declaring arrays you can set all entries to zero by declaring them like this: char a[20] = {0}; or 2d-arrays char a[20][20] = {{0}}; makes it so you don't have manually add a '\0' later to terminate a string.
- very important this one!!! you can use other things than an i comparison as the check of a for loop to see if needs to continue.

## 🐛 Mistakes & Fixes

- **Problem:**  
  **Fix:** 

## ❓ Open Questions

- 
