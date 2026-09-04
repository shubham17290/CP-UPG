# C Programming Basics — MCQ Practice Set 01

> **Level:** GATE / Competitive Exams
> **Topics:** C Fundamentals, I/O, Variables, Data Types, Arithmetic Operators, Integer & Floating-Point Division, Modulus, Operator Precedence, Character & ASCII, Variable Naming Rules, Output Prediction
> **Total Questions:** 30
> **Type:** MCQ (Single Correct Answer)

---

### Q1. Integer Division

What is the output of the following C program?

```c
#include <stdio.h>

int main() {
    printf("%d", 7 / 2);
    return 0;
}
```

- **A.** 3.5
- **B.** 3
- **C.** 4
- **D.** 3.0

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ Both operands are integers. Integer division truncates the decimal part, so `7 / 2` evaluates to `3`.

</details>

---

### Q2. Floating-Point Division

What is the output?

```c
#include <stdio.h>

int main() {
    printf("%f", 7 / 2.0);
    return 0;
}
```

- **A.** 3.000000
- **B.** 3.500000
- **C.** 4.000000
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ Because one operand (`2.0`) is a floating-point number, implicit type conversion occurs. `7` is promoted to a float, and the result is `3.500000`.

</details>

---

### Q3. Integer vs Float

What is the output?

```c
#include <stdio.h>

int main() {
    float x = 7 / 2;
    printf("%f", x);
    return 0;
}
```

- **A.** 3.000000
- **B.** 3.500000
- **C.** 4.000000
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: A**
_Explanation:_ The expression `7 / 2` is evaluated first as integer division, yielding `3`. This `3` is then implicitly cast to a float (`3.000000`) before being assigned to `x`.

</details>

---

### Q4. Type of Expression

Consider the following snippet. What is printed?

```c
int a = 5;
float b = 2.0;
printf("%f", a / b);
```

- **A.** 2.000000
- **B.** 2.500000
- **C.** 3.000000
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `a` is promoted to a float because `b` is a float. `5.0 / 2.0` yields `2.500000`.

</details>

---

### Q5. Modulus Operator

What is the output?

```c
#include <stdio.h>

int main() {
    printf("%d", 17 % 5);
    return 0;
}
```

- **A.** 2
- **B.** 3
- **C.** 5
- **D.** 3.4

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: A**
_Explanation:_ The `%` operator returns the remainder of integer division. 17 divided by 5 leaves a remainder of `2`.

</details>

---

### Q6. Negative Remainder

What is the output?

```c
#include <stdio.h>

int main() {
    printf("%d", -17 % 5);
    return 0;
}
```

- **A.** -2
- **B.** 2
- **C.** -3
- **D.** 3

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: A**
_Explanation:_ In C, the sign of the result of the modulus operator always matches the sign of the numerator (left operand). So, `-17 % 5` is `-2`.

</details>

---

### Q7. Operator Precedence

What is the output?

```c
#include <stdio.h>

int main() {
    int x = 10 + 5 * 2;
    printf("%d", x);
    return 0;
}
```

- **A.** 30
- **B.** 20
- **C.** 25
- **D.** 15

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ Multiplication (`*`) has higher precedence than addition (`+`). So, `5 * 2` is evaluated first (10), and then added to 10. `10 + 10 = 20`.

</details>

---

### Q8. Multiple Operators

What is the output?

```c
#include <stdio.h>

int main() {
    int x = 20 / 5 * 2;
    printf("%d", x);
    return 0;
}
```

- **A.** 2
- **B.** 4
- **C.** 8
- **D.** 20

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: C**
_Explanation:_ `/` and `*` have the same precedence, so associativity is checked (Left-to-Right). First, `20 / 5` evaluates to `4`. Then, `4 * 2` evaluates to `8`.

</details>

---

### Q9. Precedence + Modulus

What is the value of `x`?

```c
int x = 20 - 8 % 3 * 2;
```

- **A.** 4
- **B.** 16
- **C.** 18
- **D.** 8

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `%` and `*` have higher precedence than `-` and are evaluated Left-to-Right. `8 % 3 = 2`. Then `2 * 2 = 4`. Finally, `20 - 4 = 16`.

</details>

---

### Q10. Parentheses

What is the output?

```c
#include <stdio.h>

int main() {
    int x = (10 + 5) * 2;
    printf("%d", x);
    return 0;
}
```

- **A.** 20
- **B.** 25
- **C.** 30
- **D.** 15

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: C**
_Explanation:_ Parentheses have the highest precedence. `(10 + 5) = 15`. Then `15 * 2 = 30`.

</details>

---

### Q11. Mixed Arithmetic

What is the output?

```c
#include <stdio.h>

int main() {
    int x = 10;
    float y = 4;
    printf("%f", x / y);
    return 0;
}
```

- **A.** 2.000000
- **B.** 2.500000
- **C.** 3.000000
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ Since `y` is a float, `x` is promoted to a float. `10.0 / 4.0` yields `2.500000`.

</details>

---

### Q12. Assignment and Initialization

Which statement correctly initializes an integer variable?

- **A.** `int = 10;`
- **B.** `integer x = 10;`
- **C.** `int x = 10;`
- **D.** `x int = 10;`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: C**
_Explanation:_ The syntax is `<data_type> <variable_name> = <value>;`. `int x = 10;` follows this rule perfectly.

</details>

---

### Q13. Variable Update

What is the output?

```c
#include <stdio.h>

int main() {
    int x = 10;
    x = 20;
    printf("%d", x);
    return 0;
}
```

- **A.** 10
- **B.** 20
- **C.** 30
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ Variables can be reassigned. The original value `10` is overwritten by `20`.

</details>

---

### Q14. Multiple Updates

What is the output?

```c
#include <stdio.h>

int main() {
    int x = 10;
    x = 5;
    x = x + 10;
    printf("%d", x);
    return 0;
}
```

- **A.** 10
- **B.** 15
- **C.** 20
- **D.** 5

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `x` is initially 10, updated to 5. Then `x = 5 + 10`, making the final value `15`.

</details>

---

### Q15. Valid Variable Name

Which of the following is a valid C variable name?

- **A.** `2value`
- **B.** `my-value`
- **C.** `my_value`
- **D.** `float`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: C**
_Explanation:_ Variable names cannot start with a digit (`2value`), cannot contain hyphens (`my-value`), and cannot be keywords (`float`). `my_value` is valid.

</details>

---

### Q16. Invalid Variable Name

Which of the following is NOT a valid C variable name?

- **A.** `value1`
- **B.** `_value`
- **C.** `value_1`
- **D.** `1value`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: D**
_Explanation:_ A variable name in C must begin with a letter or an underscore, never a number.

</details>

---

### Q17. Keyword as Variable

Which statement is invalid?

- **A.** `int number;`
- **B.** `float value;`
- **C.** `int return;`
- **D.** `char ch;`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: C**
_Explanation:_ `return` is a reserved keyword in C and cannot be used as a variable name.

</details>

---

### Q18. Character Data Type

Which data type is generally used to store a single character in C?

- **A.** `string`
- **B.** `char`
- **C.** `character`
- **D.** `text`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ C uses the `char` keyword to denote a character data type. C does not have built-in `string`, `character`, or `text` keywords.

</details>

---

### Q19. Character Constant

Which of the following represents a character constant?

- **A.** `"A"`
- **B.** `'A'`
- **C.** `A`
- **D.** `/A/`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ Single quotes (`' '`) are used for character constants. Double quotes (`" "`) are for strings.

</details>

---

### Q20. ASCII

Assume standard ASCII encoding. What is the ASCII value of character `'A'`?

- **A.** 64
- **B.** 65
- **C.** 66
- **D.** 97

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ In the standard ASCII table, uppercase `'A'` starts at `65`.

</details>

---

### Q21. ASCII Relationship

Assume standard ASCII encoding. If `char ch = 'A';`, then what is the value of `ch + 1`?

- **A.** 65
- **B.** 66
- **C.** `'A'`
- **D.** `'B'`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `ch` ('A') corresponds to ASCII 65. Due to integer promotion in C, `65 + 1` evaluates to the integer `66`.

</details>

---

### Q22. Character Output

What is the output?

```c
#include <stdio.h>

int main() {
    char ch = 'A';
    printf("%c", ch);
    return 0;
}
```

- **A.** 65
- **B.** A
- **C.** 'A'
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ The format specifier `%c` tells `printf` to output the character itself. It will print `A` (without quotes).

</details>

---

### Q23. Character as Integer

Assume ASCII encoding. What is the output?

```c
#include <stdio.h>

int main() {
    char ch = 'A';
    printf("%d", ch);
    return 0;
}
```

- **A.** A
- **B.** 'A'
- **C.** 65
- **D.** 66

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: C**
_Explanation:_ The format specifier `%d` tells `printf` to output the integer value. For `'A'`, it prints its ASCII value, `65`.

</details>

---

### Q24. Escape Sequence

Which escape sequence is used to move the cursor to the next line?

- **A.** `\t`
- **B.** `\n`
- **C.** `\b`
- **D.** `\r`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `\n` is the newline character. (`\t` is tab, `\b` is backspace, `\r` is carriage return).

</details>

---

### Q25. Escape Sequence Output

What is the output?

```c
#include <stdio.h>

int main() {
    printf("Hello\nWorld");
    return 0;
}
```

- **A.** HelloWorld
- **B.** Hello<br>World
- **C.** Hello\nWorld
- **D.** Compilation Error

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `\n` inserts a line break. "Hello" will print on the first line and "World" on the second.

</details>

---

### Q26. Predict the Output

What is the output?

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    printf("%d", a / b + a % b);
    return 0;
}
```

- **A.** 3
- **B.** 4
- **C.** 5
- **D.** 6

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ `a / b` is `10 / 3 = 3`. `a % b` is `10 % 3 = 1`. `3 + 1 = 4`.

</details>

---

### Q27. Important Mixed Expression

What is the output?

```c
#include <stdio.h>

int main() {
    int a = 5;
    float b = 2;
    printf("%f", a / 2 + b);
    return 0;
}
```

- **A.** 4.000000
- **B.** 4.500000
- **C.** 5.000000
- **D.** 3.500000

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: A**
_Explanation:_ The expression `a / 2` evaluates first. Since `a` is an int (5) and `2` is an int, `5 / 2 = 2`. Then `2` is added to float `b` (`2.0`), resulting in `4.000000`.

</details>

---

### Q28. Expression Evaluation

What is the value of `x`?

```c
int x = 25 / 4 * 2;
```

- **A.** 12
- **B.** 12.5
- **C.** 10
- **D.** 8

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: A**
_Explanation:_ `/` and `*` are evaluated Left-to-Right. `25 / 4 = 6` (integer division). Then `6 * 2 = 12`.

</details>

---

### Q29. Data Type

Which of the following is NOT a fundamental/basic data type in C?

- **A.** `int`
- **B.** `char`
- **C.** `float`
- **D.** `string`

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: D**
_Explanation:_ C does not have a fundamental `string` data type; strings are represented as arrays of `char` terminated by a null character `\0`.

</details>

---

### Q30. Conceptual Question

Consider the following snippet:

```c
int a = 5;
float b = 2;
float c = a / b;
```

Which statement is correct?

- **A.** `a / b` performs integer division because `a` is an integer.
- **B.** `a / b` performs floating-point division because one operand is float.
- **C.** `a / b` always produces an integer.
- **D.** The program will not compile.

<details>
<summary><strong>💡 View Answer</strong></summary>

**Correct Answer: B**
_Explanation:_ When operators are mixed with an `int` and a `float`, C performs implicit type conversion (promotion), converting the integer to a floating-point number before the operation to retain precision.

</details>

---
