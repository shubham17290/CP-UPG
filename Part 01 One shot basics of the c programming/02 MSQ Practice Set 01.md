# C Programming Basics — MSQ Practice Set 01

> **Level:** GATE CS/IT + Competitive Exams
> **Type:** MSQ — Multiple Select Questions
> **Total Questions:** 25
> **Rule:** One or more options may be correct. You must select ALL correct options to score.

---

## 📚 Topics Covered

- C Program Basics & Input / Output
- Escape Sequences
- Variable Declaration, Initialization & Naming Rules
- Arithmetic Operators & Modulus Operator
- Integer & Floating-Point Division
- Operator Precedence
- Character Data Type & ASCII Values
- Output Prediction & Basic Expression Evaluation

---

## 📝 MSQ Questions with Answers

### Q1. Integer Division

Consider the following declaration:

```c
int a = 7 / 2;
```

Which statements are correct?

- **A.** `a` stores 3
- **B.** The result of `7 / 2` is 3.5
- **C.** Integer division is performed
- **D.** The fractional part is discarded

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, C, D**
_Explanation:_ Both operands (7 and 2) are integers, so integer division is performed. `7 / 2 = 3`. The fractional part is discarded.

</details>

---

### Q2. Floating-Point Division

Which expressions produce a floating-point result?

- **A.** `7 / 2.0`
- **B.** `7.0 / 2`
- **C.** `7 / 2`
- **D.** `7.0 / 2.0`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, D**
_Explanation:_ If at least one operand is a floating-point number, floating-point arithmetic is performed.
`7 / 2.0` → float
`7.0 / 2` → float
`7.0 / 2.0` → float
However, `7 / 2` yields an integer result.

</details>

---

### Q3. Assignment to Float

Consider the following:

```c
float x = 7 / 2;
```

Which statements are correct?

- **A.** `7 / 2` is evaluated using integer arithmetic
- **B.** The result of the expression is 3
- **C.** `x` finally stores 3.0
- **D.** `x` stores 3.5

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ The expression on the right is evaluated first. `7 / 2 = 3` (integer division). Only after that is the result assigned to `float x`. Therefore, `x = 3.0`. The fact that `x` is a float does not change the way `7 / 2` is initially evaluated.

</details>

---

### Q4. Mixed Arithmetic

Consider:

```c
int a = 5;
float b = 2.0;
```

Which expressions perform floating-point division?

- **A.** `a / b`
- **B.** `b / a`
- **C.** `a / 2`
- **D.** `2.0 / a`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, D**
_Explanation:_ A floating-point operand is present in A, B, and D.
`a / b` → float / float (after promotion)
`b / a` → float / int
`2.0 / a` → float / int
But `a / 2` performs integer division (int / int).

</details>

---

### Q5. Modulus Operator

Which statements about `%` are correct for integer operands?

- **A.** It gives the remainder of integer division
- **B.** `17 % 5` is 2
- **C.** `20 % 4` is 0
- **D.** It gives the quotient of division

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ The `%` operator gives the remainder, not the quotient.
`17 = (5 × 3) + 2` → Remainder is 2.
`20 = (4 × 5) + 0` → Remainder is 0.

</details>

---

### Q6. Modulus Examples

Which expressions evaluate to 1?

- **A.** `10 % 3`
- **B.** `16 % 5`
- **C.** `21 % 5`
- **D.** `11 % 5`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C, D**
_Explanation:_ All expressions evaluate to 1.
`10 % 3 = 1`
`16 % 5 = 1`
`21 % 5 = 1`
`11 % 5 = 1`

</details>

---

### Q7. Operator Precedence

Consider:

```c
int x = 10 + 5 * 2;
```

Which statements are correct?

- **A.** Multiplication is performed before addition
- **B.** `5 * 2` is evaluated first
- **C.** The final value of `x` is 20
- **D.** The final value of `x` is 30

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ Multiplication has higher precedence than addition.
`10 + 5 * 2` → `10 + 10` → `20`.

</details>

---

### Q8. \*, /, and %

Which statements about `*`, `/`, and `%` are correct?

- **A.** They have higher precedence than `+` and `-`
- **B.** They have the same precedence level
- **C.** They are evaluated left-to-right when appearing at the same precedence level
- **D.** `%` always has higher precedence than `*`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ In the basic precedence hierarchy, `*`, `/`, and `%` sit at the same level, which is higher than `+` and `-`. They associate from left to right.

</details>

---

### Q9. Expression Evaluation

Consider:

```c
int x = 20 / 5 * 2;
```

Which statements are correct?

- **A.** `/` and `*` have the same precedence
- **B.** Division is evaluated before multiplication because `/` is written first
- **C.** Evaluation proceeds from left to right
- **D.** `x` becomes 8

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C, D**
_Explanation:_ `/` and `*` have the same precedence. They are evaluated left-to-right.
`20 / 5 * 2` → `4 * 2` → `8`.

</details>

---

### Q10. Mixed Operators

Consider:

```c
int x = 20 - 8 % 3 * 2;
```

Which statements are correct?

- **A.** `%` is evaluated before `-`
- **B.** `*` is evaluated before `-`
- **C.** `8 % 3` gives 2
- **D.** The final value of `x` is 16

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C, D**
_Explanation:_ `%` and `*` have higher precedence than `-` and associate left-to-right.
First: `8 % 3 = 2`
Then: `2 * 2 = 4`
Finally: `20 - 4 = 16`

</details>

---

### Q11. Parentheses

Consider:

```c
int x = (10 + 5) * 2;
```

Which statements are correct?

- **A.** `10 + 5` is evaluated first
- **B.** Parentheses change the normal evaluation order
- **C.** `x` becomes 30
- **D.** `x` becomes 20

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ Parentheses have the highest priority.
`(10 + 5) * 2` → `15 * 2` → `30`.

</details>

---

### Q12. Valid C Identifiers

Which of the following are valid variable names in C?

- **A.** `total`
- **B.** `total_1`
- **C.** `1total`
- **D.** `_total`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, D**
_Explanation:_ Valid identifiers can contain letters, digits, and underscores, but they **cannot** start with a digit. Therefore, `1total` is invalid.

</details>

---

### Q13. Invalid Identifiers

Which of the following **cannot** be used as ordinary variable names?

- **A.** `2value`
- **B.** `my-value`
- **C.** `my value`
- **D.** `value_2`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_
`2value` starts with a digit.
`my-value` contains a hyphen (interpreted as minus).
`my value` contains a space.
`value_2` is perfectly valid.

</details>

---

### Q14. Variable Naming Rules

Which statements are correct?

- **A.** A C identifier can contain digits
- **B.** A C identifier cannot start with a digit
- **C.** Underscore can be used in an identifier
- **D.** Spaces can be used inside an identifier

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ Digits are allowed after the first character (e.g., `value1`). Spaces are never allowed in identifiers.

</details>

---

### Q15. Keywords

Which of the following are C keywords?

- **A.** `int`
- **B.** `float`
- **C.** `return`
- **D.** `number`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ `int`, `float`, and `return` are reserved C keywords. `number` is not a keyword and can be used as an identifier.

</details>

---

### Q16. Variable Updating

Consider:

```c
int x = 10;
x = 20;
x = x + 5;
```

Which statements are correct?

- **A.** Initially, `x` is 10
- **B.** After `x = 20`, the old value is replaced
- **C.** Final value of `x` is 25
- **D.** Final value of `x` is 35

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_
Initial: `x = 10`
Updated: `x = 20` (10 is replaced)
Finally: `x = 20 + 5 = 25`.

</details>

---

### Q17. Character Data Type

Which statements about `char` are correct?

- **A.** `char` is used for character data
- **B.** A character constant can be written as `'A'`
- **C.** `"A"` and `'A'` represent exactly the same kind of literal
- **D.** ASCII assigns numerical values to characters

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, D**
_Explanation:_ `'A'` is a single character constant, while `"A"` is a string literal (which includes the null terminator `\0`). ASCII provides numerical codes for characters (e.g., `'A' = 65`).

</details>

---

### Q18. Character Constants

Which of the following are character constants?

- **A.** `'A'`
- **B.** `'7'`
- **C.** `"7"`
- **D.** `'\n'`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, D**
_Explanation:_ Single quotes represent character constants, including escape sequences like `'\n'`. Double quotes `"7"` represent a string literal.

</details>

---

### Q19. ASCII

Assume standard ASCII encoding. Which statements are correct?

- **A.** `'A'` has ASCII value 65
- **B.** `'B'` has ASCII value 66
- **C.** `'a'` has ASCII value 97
- **D.** `'0'` has ASCII value 0

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ Character `'0'` has an ASCII value of 48. It is not the same as the integer `0`.

</details>

---

### Q20. Character Arithmetic

Assume ASCII encoding. Consider:

```c
char ch = 'A';
```

Which statements are correct?

- **A.** The integer value associated with `ch` is 65
- **B.** `ch + 1` has numerical value 66
- **C.** ASCII value 66 corresponds to `'B'`
- **D.** `ch + 1` necessarily has type `char`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ `'A'` = 65, so `65 + 1 = 66`, which is `'B'`. D is incorrect because arithmetic expressions involving `char` undergo integer promotion, so the result type of `ch + 1` is actually `int`.

</details>

---

### Q21. %c and %d

Consider:

```c
char ch = 'A';
printf("%c", ch);
printf("%d", ch);
```

Assuming ASCII and appropriate format usage, which statements are correct?

- **A.** `%c` prints the character representation
- **B.** `%d` prints the integer value
- **C.** `%c` prints 65
- **D.** `%d` prints 65

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, D**
_Explanation:_ `%c` outputs the literal character `A`. `%d` outputs its integer ASCII representation, which is `65`.

</details>

---

### Q22. Escape Sequences

Which are valid/common C escape sequences?

- **A.** `\n`
- **B.** `\t`
- **C.** `\r`
- **D.** `\z`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ `\n` (newline), `\t` (horizontal tab), and `\r` (carriage return) are standard. `\z` is not a standard C escape sequence.

</details>

---

### Q23. Output Prediction

Consider:

```c
int a = 10;
int b = 3;
printf("%d", a / b);
printf("%d", a % b);
```

Which statements are correct?

- **A.** First `printf()` outputs 3
- **B.** Second `printf()` outputs 1
- **C.** `a / b` is integer division
- **D.** `a % b` gives 3

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ Both operands are integers. `10 / 3 = 3` (quotient). `10 % 3 = 1` (remainder).

</details>

---

### Q24. Data Types

Which of the following are fundamental/basic C data types?

- **A.** `int`
- **B.** `char`
- **C.** `float`
- **D.** `string`

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_ `int`, `char`, `float`, and `double` are fundamental types. C does not have a built-in `string` fundamental data type.

</details>

---

### Q25. Important Mixed Concept

Consider:

```c
int a = 10;
int b = 4;
float c = 2.0;
```

Which statements are correct?

- **A.** `a / b` produces an integer result
- **B.** `a / c` performs floating-point division
- **C.** `a % b` is a valid integer remainder operation
- **D.** `a % c` is a valid modulus operation

<details>
<summary><strong>💡 View Answer & Explanation</strong></summary>

**Correct Answer: A, B, C**
_Explanation:_
`a / b` (10 / 4) is int / int → Integer division.
`a / c` (10 / 2.0) is int / float → Floating-point division.
`a % b` is valid because both are integers.
`a % c` is invalid because the `%` operator strictly requires integer operands.

</details>

---

## 🎯 Quick Revision Table

| Concept                | Key Rule                                                   |
| :--------------------- | :--------------------------------------------------------- |
| **Integer Division**   | `7 / 2 = 3`                                                |
| **Floating Division**  | `7 / 2.0 = 3.5`                                            |
| **Modulus**            | Gives remainder                                            |
| **Precedence 1**       | `* / %` (Same precedence)                                  |
| **Associativity**      | `* / %` associate Left → Right                             |
| **Precedence 2**       | `+ -` (Lower precedence than `* / %`)                      |
| **Parentheses**        | Highest priority in expressions                            |
| **Identifier Rules**   | Cannot start with a digit, cannot contain spaces/operators |
| **Underscores**        | `_` is allowed in identifiers                              |
| **C Keywords**         | `int`, `float`, `return`, etc.                             |
| **char**               | Used for character data                                    |
| **Constants/Literals** | `'A'` = Character constant, `"A"` = String literal         |
| **ASCII Basics**       | `'A'` = 65, `'B'` = 66, `'a'` = 97                         |
| **Formatting**         | `%c` (Character output), `%d` (Integer output)             |
| **Escape Sequences**   | `\n` (New line), `\t` (Tab)                                |
| **Modulus Rules**      | `%` strictly requires Integer operands                     |

---

## 📊 Self Evaluation

|   Score   | Level              |
| :-------: | :----------------- |
| **25/25** | 🔥 Excellent       |
| **22–24** | 💪 Very Strong     |
| **18–21** | 👍 Good            |
| **14–17** | ⚠️ Needs Revision  |
| **< 14**  | 🔄 Revise C Basics |

---

## 🚀 Preparation Progression

**C Programming Basics**
&nbsp;&nbsp;&nbsp;&nbsp;↓
**MCQ Practice** ✅
&nbsp;&nbsp;&nbsp;&nbsp;↓
**MSQ Practice** ✅ _(You are here)_
&nbsp;&nbsp;&nbsp;&nbsp;↓
**NAT (Numerical Answer Type)**
&nbsp;&nbsp;&nbsp;&nbsp;↓
**Output Prediction Challenges**
&nbsp;&nbsp;&nbsp;&nbsp;↓
**GATE PYQs**
&nbsp;&nbsp;&nbsp;&nbsp;↓
**Mixed C Problems**
