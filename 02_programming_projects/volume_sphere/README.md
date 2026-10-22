# volume sphere

> calculates volume of sphere based on user input

**Date:** 09/10/2026
**Tags:** user_input

## 🎯 Goal

What I wanted to learn:

- how to correctly handle user input.
- see difference between division with ints or floats.

## 💡 What I Learned

- ints get converted to floats/doubles when they are used in calculations with those types, !! careful this only happens the moment the actual calculation happens, so 4/3*3.14 = 3.14 because it first does the int division truncating it to 1 and then converts the 1 to a double to multiply with 3.14.
- seeing the point above it is better to always explicitly convert the ints to floats/doubles then to expect the compiler to do it correctly.
- converting float to int truncates part after . !! be careful this can overflow.
- scanf is mainly useful in programs where you trust users to put in the correct type. very hard to put checks in with this, can lead to vulnerabilities and errors.if for example user enters a string where an int is expected, the string would stay in the buffer and possibly get read by the next scanf (or anything trying to read that buffer).
- to check user input it is better to use fgets(). this stores it in a buffer and then afterwards you can do checks to see if the input is valid or not.
- the c standards specify that any number with a decimal gets implicted converted to double unless specifically stated otherwise. so 3.8 would be a double 3.8f is a float.
- git: forgot to do git init so it couldn't track changes, do this immediatly next exercise.

## 🐛 Mistakes & Fixes

- **Problem:**  
  **Fix:** 

## ❓ Open Questions

- 
