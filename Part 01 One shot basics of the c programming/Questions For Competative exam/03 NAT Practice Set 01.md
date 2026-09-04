# 🧮 C Programming — NAT Practice Set 01

> **Level:** GATE / Competitive Exams
> **Question Type:** NAT (Numerical Answer Type)
> **Total Questions:** 40
> **Topics:** C Programming Basics
> **Instruction:** Enter only the numerical answer. No options are provided.

---

### Q1. Integer Division

Consider:

```c
int a = 17;
int b = 5;
int c = a / b;
```

What is the value of `c`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3</strong><br>
<em>Explanation: 17 / 5 performs integer division, which discards the fractional part.</em>
</details>

---

### Q2. Modulus Operator

Consider:

```c
int a = 29;
int b = 6;
int c = a % b;
```

Find the value of `c`.
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 5</strong><br>
<em>Explanation: 29 = (6 * 4) + 5. The remainder is 5.</em>
</details>

---

### Q3. Arithmetic Expression

What is the value of:

```c
17 + 5 * 3
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 32</strong><br>
<em>Explanation: Multiplication (*) has higher precedence. 17 + (5 * 3) = 17 + 15 = 32.</em>
</details>

---

### Q4. Operator Precedence

Evaluate:

```c
24 / 4 + 3 * 5
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 21</strong><br>
<em>Explanation: (24 / 4) + (3 * 5) = 6 + 15 = 21.</em>
</details>

---

### Q5. Mixed Arithmetic

Evaluate:

```c
20 - 6 / 2 + 4
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 21</strong><br>
<em>Explanation: Division first. 20 - 3 + 4 = 17 + 4 = 21.</em>
</details>

---

### Q6. Modulus + Arithmetic

Evaluate:

```c
25 % 7 + 3 * 2
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 10</strong><br>
<em>Explanation: % and * evaluate left to right. (25 % 7) + (3 * 2) = 4 + 6 = 10.</em>
</details>

---

### Q7. Left-to-Right Evaluation

Evaluate:

```c
20 / 5 * 2
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 8</strong><br>
<em>Explanation: Same precedence, left-to-right. (20 / 5) * 2 = 4 * 2 = 8.</em>
</details>

---

### Q8. Integer Division

Evaluate:

```c
31 / 4
```

Assume both operands are integers.
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 7</strong><br>
<em>Explanation: Integer division discards the decimal .75.</em>
</details>

---

### Q9. Floating-Point Division

Evaluate:

```c
15.0 / 4.0
```

What is the numerical value of the result?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3.75</strong><br>
<em>Explanation: Floating-point operands yield a floating-point result.</em>
</details>

---

### Q10. Mixed Integer and Floating Arithmetic

Consider:

```c
int a = 7;
float b = 2.0;
float c = a / b;
```

What is the numerical value of `c`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3.5</strong><br>
<em>Explanation: 'a' is promoted to float because 'b' is a float. 7.0 / 2.0 = 3.5.</em>
</details>

---

### Q11. Expression Evaluation

Evaluate:

```c
10 + 20 / 5 * 3
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 22</strong><br>
<em>Explanation: 10 + ((20 / 5) * 3) = 10 + (4 * 3) = 10 + 12 = 22.</em>
</details>

---

### Q12. Modulus

Evaluate:

```c
100 % 13
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 9</strong><br>
<em>Explanation: 13 * 7 = 91. 100 - 91 = 9 remainder.</em>
</details>

---

### Q13. Nested Arithmetic

Evaluate:

```c
50 - 10 * 2 + 18 / 3
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 36</strong><br>
<em>Explanation: 50 - (10 * 2) + (18 / 3) = 50 - 20 + 6 = 30 + 6 = 36.</em>
</details>

---

### Q14. Modulus with Arithmetic

Evaluate:

```c
45 % 8 * 2
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 10</strong><br>
<em>Explanation: (45 % 8) * 2 = 5 * 2 = 10.</em>
</details>

---

### Q15. Multiple Operators

Evaluate:

```c
36 / 6 + 14 % 5 * 2
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 14</strong><br>
<em>Explanation: (36 / 6) + ((14 % 5) * 2) = 6 + (4 * 2) = 6 + 8 = 14.</em>
</details>

---

### Q16. Integer Expression

Consider:

```c
int a = 20;
int b = 6;
int c = a / b;
```

What is the value of `c`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3</strong><br>
<em>Explanation: 20 / 6 = 3 (Integer division).</em>
</details>

---

### Q17. Floating-Point Expression

Consider:

```c
float a = 20;
float b = 6;
float c = a / b;
```

If the answer is considered correct up to two decimal places, what is the value of `c`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3.33</strong><br>
<em>Explanation: 20.0 / 6.0 = 3.33333...</em>
</details>

---

### Q18. ASCII Value

Assume ASCII encoding.

```c
char ch = 'A';
```

What numerical value does `ch` represent?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 65</strong><br>
<em>Explanation: The ASCII value of uppercase 'A' is 65.</em>
</details>

---

### Q19. ASCII Arithmetic

Assume ASCII encoding.

```c
char ch = 'C';
```

What is the numerical value of `ch + 5`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 72</strong><br>
<em>Explanation: 'C' is 67. 67 + 5 = 72 (which corresponds to 'H').</em>
</details>

---

### Q20. Character Arithmetic

Assume ASCII encoding.

```c
char ch = 'Z';
```

What is the numerical value of `ch - 10`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 80</strong><br>
<em>Explanation: 'Z' is 90. 90 - 10 = 80 (which corresponds to 'P').</em>
</details>

---

### Q21. ASCII Difference

Assume ASCII encoding. What is the numerical difference between `'D'` and `'A'`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3</strong><br>
<em>Explanation: 68 ('D') - 65 ('A') = 3.</em>
</details>

---

### Q22. Digit ASCII

Assume ASCII encoding. What is the ASCII value of character `'7'`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 55</strong><br>
<em>Explanation: '0' starts at 48. 48 + 7 = 55.</em>
</details>

---

### Q23. Character Sequence

Assume ASCII encoding.

```c
char ch = 'B';
```

What is the numerical value of `ch + 3`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 69</strong><br>
<em>Explanation: 'B' is 66. 66 + 3 = 69 (which is 'E').</em>
</details>

---

### Q24. Arithmetic with Character

Assume ASCII encoding. Evaluate:

```c
'A' + 4
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 69</strong><br>
<em>Explanation: 65 + 4 = 69.</em>
</details>

---

### Q25. Character Difference

Assume ASCII encoding. Evaluate:

```c
'9' - '0'
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 9</strong><br>
<em>Explanation: 57 ('9') - 48 ('0') = 9. This is a common trick to convert character digits to integers.</em>
</details>

---

### Q26. Escape Sequence

Consider:

```c
printf("ABC\nDEF");
```

How many visible alphabetic characters are printed?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 6</strong><br>
<em>Explanation: A, B, C, D, E, F are printed. \n is a non-visible control character.</em>
</details>

---

### Q27. Escape Sequence

Consider:

```c
printf("A\tB\tC");
```

How many alphabetic characters are printed?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3</strong><br>
<em>Explanation: Only A, B, and C. \t evaluates as whitespace spacing.</em>
</details>

---

### Q28. Newline Count

Consider:

```c
printf("A\nB\nC\nD");
```

How many newline escape sequences are present?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 3</strong><br>
<em>Explanation: Three \n sequences separate the 4 characters.</em>
</details>

---

### Q29. Tab Count

Consider:

```c
printf("A\tB\tC\tD\tE");
```

How many tab escape sequences are present?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 4</strong><br>
<em>Explanation: Four \t sequences separate the 5 characters.</em>
</details>

---

### Q30. Output Characters

Consider:

```c
printf("HELLO\nWORLD");
```

How many total alphabetic characters are printed?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 10</strong><br>
<em>Explanation: HELLO (5) + WORLD (5) = 10.</em>
</details>

---

### Q31. Operator Hierarchy

Evaluate:

```c
8 + 12 / 3 * 2
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 16</strong><br>
<em>Explanation: 8 + ((12 / 3) * 2) = 8 + (4 * 2) = 8 + 8 = 16.</em>
</details>

---

### Q32. Modulus and Division

Evaluate:

```c
50 / 6 + 50 % 6
```

Assume integer arithmetic.
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 10</strong><br>
<em>Explanation: (50 / 6) = 8. (50 % 6) = 2. 8 + 2 = 10.</em>
</details>

---

### Q33. Quotient + Remainder

For:

```c
int a = 47;
int b = 9;
```

Find: `a / b + a % b`
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 7</strong><br>
<em>Explanation: (47 / 9) + (47 % 9) = 5 + 2 = 7.</em>
</details>

---

### Q34. Arithmetic Combination

Evaluate:

```c
72 / 8 * 3 - 7 % 4
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 24</strong><br>
<em>Explanation: ((72 / 8) * 3) - (7 % 4) = (9 * 3) - 3 = 27 - 3 = 24.</em>
</details>

---

### Q35. Multiple Modulus Operations

Evaluate:

```c
100 % 9 + 50 % 7 + 20 % 6
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 4</strong><br>
<em>Explanation: 1 + 1 + 2 = 4.</em>
</details>

---

### Q36. Integer Arithmetic

Consider:

```c
int a = 25;
int b = 4;
int c = 3;
int result = a / b * c + a % b;
```

Find the value of `result`.
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 19</strong><br>
<em>Explanation: ((25 / 4) * 3) + (25 % 4) = (6 * 3) + 1 = 18 + 1 = 19.</em>
</details>

---

### Q37. Mixed Arithmetic

Consider:

```c
int a = 9;
int b = 4;
float result = a / b + 2.5;
```

What is the numerical value of `result`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 4.5</strong><br>
<em>Explanation: 'a / b' evaluates first as int division: 9 / 4 = 2. Then 2 is promoted to float to add 2.5. 2 + 2.5 = 4.5.</em>
</details>

---

### Q38. Floating-Point + Integer

Consider:

```c
int a = 9;
float b = 4.0;
float result = a / b + 2;
```

What is the numerical value of `result`?
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 4.25</strong><br>
<em>Explanation: 9 / 4.0 -> int/float becomes float/float. 2.25 + 2 = 4.25.</em>
</details>

---

### Q39. Expression Evaluation

Evaluate:

```c
30 - 18 / 3 + 7 % 4 * 2
```

**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 30</strong><br>
<em>Explanation: 30 - (18 / 3) + ((7 % 4) * 2) = 30 - 6 + (3 * 2) = 30 - 6 + 6 = 30.</em>
</details>

---

### Q40. GATE-Level Mixed NAT 🔥

Consider:

```c
int a = 37;
int b = 5;
float c = 2.5;
float result = a / b + a % b * c;
```

Find the numerical value of `result`.
**Answer: **\_\_****

<details>
<summary><strong>💡 View Answer</strong></summary>
<strong>Answer: 12 (or 12.0)</strong><br>
<em>Explanation: <br>
1. a / b = 37 / 5 = 7 (integer division)<br>
2. a % b = 37 % 5 = 2<br>
3. 2 * c = 2 * 2.5 = 5.0 (integer promoted to float)<br>
4. result = 7 + 5.0 = 12.0</em>
</details>

---

## 📌 NAT Topic Distribution

| Topic                         | Questions                          |
| :---------------------------- | :--------------------------------- |
| **Integer Division**          | 1, 8, 16, 32, 33, 36, 37           |
| **Floating-Point Arithmetic** | 9, 10, 17, 38, 40                  |
| **Operator Precedence**       | 3, 4, 5, 7, 11, 13, 15, 31, 34, 39 |
| **Modulus `%`**               | 2, 6, 12, 14, 15, 25, 32–36, 39–40 |
| **Character / ASCII**         | 18–25                              |
| **Escape Sequences**          | 26–30                              |
| **Mixed Concepts**            | 33, 36–40                          |

---

## 🎯 Difficulty Progression

- 🟢 **Basic:** Q1–Q12
- 🟡 **Moderate:** Q13–Q30
- 🔴 **GATE-Level:** Q31–Q40

---

## ⚠️ Important Assumptions

- Integer operands use integer arithmetic.
- For integer division, the fractional part is discarded.
- `%` is used only with integer operands.
- ASCII encoding is assumed wherever character values are involved.
- Standard C operator precedence is assumed.
- `*`, `/`, and `%` have the same precedence and are evaluated left-to-right.
- `+` and `-` have lower precedence than `*`, `/`, and `%`.
- No loops, arrays, pointers, functions, bitwise operators, or advanced C concepts are used.

---

## 🚀 Target

Try to solve all 40 questions **without running the code** on a compiler.

**Recommended Target:**

- 🟢 **35–40** → Excellent
- 🟡 **30–34** → Strong
- 🟠 **24–29** → Need revision
- 🔴 **< 24** → Revise the basics once more
