# magic square v2

> rewrite of magic square program using functions

**Date:** 18/11/2026
**Tags:** 

## 🎯 Goal

What I wanted to learn:

- allocate 2d arrays with malloc
- get some practice with creating variable length arrays with malloc

## 💡 What I Learned

- when allocating a 2d array with malloc it becomes one long 1d array, to to make the rows and collums work, write a small helper function like this idx(row,col,n) return row * n + col;.
- pay attention to casting size_t args to int and the other way around too 
- inline keyword makes it so little helper functions, like idx in this program, can be called inline
- use static and inline toghether when declaring function.
- don't forget to free the memory used, not a big problem for programs that don's run long, but just do it so it becomes a habit

## 🐛 Mistakes & Fixes

- **Problem:**  in the memset function i if forget to multiply the last size_t argument by the sizeof *ms so it didn't zero the complete array which meant there were garbage values in there which caused the output to have weird numbers in it
  **Fix:** memset(ms, 0, dimension * dimension * sizeof(*ms))

## ❓ Open Questions

- 
