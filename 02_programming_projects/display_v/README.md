# display_v

> it displays a v with a size based on the users input.

**Date:** 07-10-2026
**Tags:** 

## 🎯 Goal

What I wanted to learn: 
- learn the differences between printf/scanf and their newer versions.
- learn how to work with github ( add, commit, push)

## 💡 What I Learned

- git add/commit are local, use git push to push it to githubrepo
- printf/scanf reads from stdin, fprintf/fscanf reads from a file stream, sprintf/sscanf reads from null-terminated character string buffer.
- printf_s/scanf_s has an extra size variable that you have to give in the scanf("%s", &x ,32) function call to help prevent UB when scanf/printf tries to access memory beyond the variable.
- useful gcc flags: -Wall -Wextra -fsanitize=address, undefined

## 🐛 Mistakes & Fixes

- **Problem:**  char *buf[16]; is not a 16 char long string, it is an array of 16 pointers
  **Fix:**  char buf[16];

## ❓ Open Questions

- 
