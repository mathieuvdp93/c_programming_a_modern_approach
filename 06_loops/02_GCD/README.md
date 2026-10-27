# find greatest common divisor

> find the greatest common divisor of 2 ints

**Date:** 27/10/2026
**Tags:** loops

## 🎯 Goal

What I wanted to learn:

- gcd algorithm
- use command line args instead of asking user for input

## 💡 What I Learned

- to pass pointers to a function so you can update something else that's not the return value.
- implementing the gcd algorithm
- use argc and argv[] also always check via argc how much the user entered if any.
- i have to manually go through my loops first with some dummy values to check if the logic is correct and im not getting out of bounds, etc

## 🐛 Mistakes & Fixes

- **Problem:** in the first version of validate cl input i just passed the userinput through end returned a long that was the result of strtol and returned 0 on errors. this breaks when the user enters the number 0 because my function will see it as an error. 
  **Fix:**  the solution was to also pass in an address of where the result needed to be stored and return a bool value for success of fail. that way i can store the result in the address that was passed and my function can handle 0.

## ❓ Open Questions

- 
