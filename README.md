# Postfix-to-infix-converter

This repository contains a C++ program that converts a mathematical expression from **postfix notation** (Reverse Polish Notation) to **infix notation** while maintaining the correct operator precedence.

## Problem Description

### What is Postfix Notation?
Postfix notation (RPN) is a mathematical notation in which operators follow their operands. It eliminates the need for parentheses to define precedence.

### 🔹 What Does This Program Do?
- Takes a **postfix expression** as input.
- Converts it to a **properly parenthesized infix expression**.
- Ensures **correct operator precedence**.

## How It Works

The program:
1. Uses a **stack** to store operands.
2. Reads the postfix expression **character by character**.
3. When encountering:
   - **Operands** (`a-z` or `A-Z`): Push them onto the stack.
   - **Operators** (`+`, `-`, `*`, `/`): Pop the top two operands, format them as an infix expression with parentheses, then push the result back.
4. The final **remaining element in the stack** is the fully converted **infix expression**.

## Example Usage

### **Input:**
Postfix: ab+c-
### **Processing:**
1. `a` → Push  
2. `b` → Push  
3. `+` → Pop `b`, `a` → Push `(a+b)`  
4. `c` → Push  
5. `-` → Pop `c`, `(a+b)` → Push `((a+b)-c)`

### **Output:**
Infix: ((a+b)-c)
