# C Programming – Pattern Printing 🎨

This folder contains my learning journey and practice of **Pattern Printing in C** — one of the most important topics for building **nested-loop logic** and strengthening problem-solving skills.

Pattern printing is the natural next step after [**Part 03 – Loops**](../Part%2003%20Loops), as every pattern is built using **two or more nested loops** (`for` / `while` / `do-while`).

The goal of this folder is to master pattern logic through:

- Star patterns
- Number patterns
- Alphabet patterns
- Hollow patterns
- Pyramid and diamond patterns
- Complex / mixed patterns
- Output prediction
- Reverse-engineering any pattern (rows, columns, and conditions)

---

## 📚 Topics Covered

### 01. Basics of Pattern Printing

- Understanding the pattern structure
- **Row-wise analysis** (outer loop → rows)
- **Column-wise analysis** (inner loop → columns)
- Relationship between row number and number of characters
- Fixed vs. variable columns
- Printing characters with `printf()` without newline
- Moving to the next row with `printf("\n")`

---

### 02. Star Patterns (`*`)

- Solid square of stars
- Right-angled triangle
- Inverted right-angled triangle
- Left-aligned triangle
- Right-aligned triangle (with leading spaces)
- Inverted right-aligned triangle

Example — Right-angled triangle (n = 5):

```text
*
**
***
****
*****
```

Example — Inverted triangle (n = 5):

```text
*****
****
***
**
*
```

---

### 03. Number Patterns

- Number triangle (`1 2 3 4 5` per row)
- Repeating number triangle (`1 1 1 ...`)
- Floyd's triangle:

```text
1
2  3
4  5  6
7  8  9  10
```

- Inverted number patterns
- Binary / unit digit patterns
- Palindromic number patterns

---

### 04. Alphabet Patterns

- Alphabet triangle (`A B C D ...`)
- Repeating alphabet triangle
- Inverted alphabet triangle
- Character arithmetic (`ch++` across the row)
- Mirror / reversed alphabet patterns

Example:

```text
A
AB
ABC
ABCD
ABCDE
```

---

### 05. Hollow Patterns

- Hollow square
- Hollow right-angled triangle
- Hollow rectangle
- Boundary-only patterns
- Using conditions inside inner loop (`i == 1 || i == n || j == 1 || j == n`)

Example — Hollow square (n = 5):

```text
*****
*   *
*   *
*   *
*****
```

---

### 06. Pyramid & Diamond Patterns

- Centered (symmetric) pyramid
- Inverted pyramid
- Pyramid with numbers
- Pyramid with alphabets
- Diamond pattern
- Inverted hollow pyramid
- Managing **leading spaces** + **stars** in the same row

Example — Pyramid (n = 5):

```text
    *
   ***
  *****
 *******
*********
```

Example — Diamond (n = 4):

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

---

### 07. Complex / Mixed Patterns

- Butterfly pattern
- Hollow diamond
- Pascal's triangle
- Pascal's pyramid
- Floyd's inverted triangle
- Numeric pyramid (`1 21 321 ...`)
- Concentric / nested patterns
- Patterns combining numbers, alphabets, and symbols

Example — Butterfly (n = 4):

```text
*        *
**      **
***    ***
********
***    ***
**      **
*        *
```

---

### 08. Pattern Problem Solving Framework

A step-by-step method to **print any given pattern**:

1. Count the **number of rows** → decide the outer loop
2. For each row, count the **characters printed** → decide the inner loop
3. Identify **what changes per row** (value, spaces, stars)
4. Split the row into parts: **leading spaces**, **main content**, **trailing spaces**
5. Write the inner loops part-by-part
6. Verify with a small `n` (dry run on paper)
7. Generalize the logic for any `n`

---

## 🎯 Why Pattern Printing Matters

| Skill                        | How Patterns Help                        |
| ---------------------------- | ---------------------------------------- |
| Nested loop control          | Every pattern = 2+ nested loops          |
| Loop condition derivation    | Rows/columns formula from the pattern    |
| Space handling               | Leading-space loops before content loops |
| Code simplification          | Spotting `i`, `j`, `i+j`, `i-j` relations |
| Interview / exam readiness   | Classic warm-up questions in placements  |
| Foundation for advanced topics | Prepares for **functions** (Part 05), 2D arrays, matrices |

### Pattern Types at a Glance

| Type     | Example                     |
| -------- | --------------------------- |
| Star     | `*`, `**`, `***` triangles  |
| Number   | Floyd's, palindromic numbers |
| Alphabet | `A`, `AB`, `ABC` triangles  |
| Hollow   | Boundary-only shapes        |
| Pyramid  | Centered with leading spaces |
| Diamond  | Pyramid + inverted pyramid  |
| Butterfly| Two mirrored triangles      |
| Pascal   | Coefficient-based numbers   |

---

## 📂 Repository Structure

```text
Part 04 pattern printing
│
├── README.md
│
├── 01 Star Patterns
│   ├── 01_square_pattern.c
│   ├── 02_right_triangle.c
│   ├── 03_inverted_triangle.c
│   └── ...
│
├── 02 Number Patterns
│   ├── 01_number_triangle.c
│   ├── 02_floyds_triangle.c
│   └── ...
│
├── 03 Alphabet Patterns
│   ├── 01_alphabet_triangle.c
│   └── ...
│
├── 04 Hollow Patterns
│   ├── 01_hollow_square.c
│   └── ...
│
├── 05 Pyramid and Diamond Patterns
│   ├── 01_pyramid.c
│   ├── 02_diamond.c
│   └── ...
│
└── 06 Complex Patterns
    ├── 01_butterfly.c
    ├── 02_pascals_triangle.c
    └── ...
```

> **Note:** The numbered folders and `.c` files follow the same convention as [Part 03 – Loops](../Part%2003%20Loops) (`01 Basics`, `02 Problem Solving on Loop`, ...). Files will be added as the topics are covered.

---

## ▶️ How to Compile and Run

Using **GCC** (from the folder of the target `.c` file):

```bash
gcc 01_square_pattern.c -o pattern
./pattern          # Windows: pattern.exe
```

Or simply run it with **Code Runner** in VS Code (`Ctrl + Alt + N`), the same way the programs in the previous parts are executed.

---

## 🔗 Prerequisites

- [Part 01 – Basics of C Programming](../Part%2001%20One%20shot%20basics%20of%20the%20c%20programming) — `printf()`, variables, operators
- [Part 02 – Conditional Statements](../Part%2002%20Conditional%20Statement(If%20else)%20in%20one%20go) — `if`, comparison logic
- [Part 03 – Loops](../Part%2003%20Loops) — `for`, `while`, `do-while`, `break`, `continue`

---

## 🧠 Key Takeaway

> Every pattern is just a **formula** — find the relationship between the **row number** and what must be printed in that row, and the pattern solves itself. 🚀

