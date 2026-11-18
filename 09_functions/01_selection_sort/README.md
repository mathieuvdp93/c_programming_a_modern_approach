# selection sort

> sorts array from user by recursively looking for largest element and putting it at the back of the array

**Date:** 18/11/2026
**Tags:** 

## 🎯 Goal

What I wanted to learn:

- use recursion
- use malloc to create an array with variable length

## 💡 What I Learned

- to create a variable length array with malloc on the heap you have to assign it a capacity, than malloc the memory you need for that amount of cap. then keep track of how many entries you have and if it reaches capacity, multiply cap by 2 and realloc new array with the new cap. don't forget to free the allocated memory when done.
- if loop goes to fast and you want to see how you program goes, use unistd.h and sleep(sec) to make it sleep for some time so you have a better overview.

## 🐛 Mistakes & Fixes

- **Problem:**  
  **Fix:** 

## ❓ Open Questions

- 
