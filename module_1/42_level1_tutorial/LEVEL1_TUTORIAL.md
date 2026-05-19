# 42 Exam Rank 02 - Level 1 Survival Guide

Your exam usually has 4 total exercises, one chosen from each level. Level 1 contains common exercises such as `putstr`, `ft_strlen`, `ft_swap`, `rot_13`, `rotone`, `first_word`, `search_and_replace`, and `ulstr` in public practice repos. Your zip also contains matching practice files for most of these names. 

## What to do first in the exam

1. Read the subject once fully.
2. Identify: is it a **function** or a **program**?
3. If it is a program, start with:
   - `#include <unistd.h>`
   - `int main(int ac, char **av)`
   - `int i = 0;`
4. If it is a function, write only the exact prototype asked.
5. Handle the wrong-argument case fast: usually just print `\n` for program exercises.
6. Use simple loops. No fancy tricks.
7. Compile early.

## Golden pattern to memorize

### Pattern A - print characters
```c
int i = 0;
while (str[i])
{
    write(1, &str[i], 1);
    i++;
}
```

### Pattern B - skip spaces/tabs
```c
while (s[i] == ' ' || s[i] == '\t')
    i++;
```

### Pattern C - read until space/tab/end
```c
while (s[i] && s[i] != ' ' && s[i] != '\t')
{
    write(1, &s[i], 1);
    i++;
}
```

### Pattern D - change one char, then print it
```c
char c = s[i];
/* modify c if needed */
write(1, &c, 1);
```

---

## 1) putstr

### What they want
Print a string character by character.

### Function prototype
```c
void putstr(char *str);
```

### Idea
Start at index 0, print until `\0`.

### Exam-safe solution
```c
#include <unistd.h>

void	putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
```

### How to think
- `str[i]` means current character
- `while (str[i])` means keep going until end of string
- `write(1, &str[i], 1)` prints exactly 1 character

### Common mistakes
- Forgetting `#include <unistd.h>`
- Doing `write(1, str[i], 1)` instead of `&str[i]`
- Forgetting `i++`

### Memory sentence
"Loop through string, print one char, move forward."

---

## 2) len

### What they want
Return the length of a string.

### Function prototype
```c
int len(char *str);
```

### Idea
Count until `\0`.

### Exam-safe solution
```c
int	len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
```

### How to think
- No printing
- Just counting
- Return final count

### Common mistakes
- Returning `str[i]`
- Forgetting `return (i)`
- Starting `i` uninitialized

### Memory sentence
"Same as putstr, but count instead of print."

---

## 3) swap

### What they want
Swap the values of two integers using pointers.

### Function prototype
```c
void swap(int *a, int *b);
```

### Idea
Use a temporary variable.

### Exam-safe solution
```c
void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
```

### How to think
- `*a` means value stored at pointer `a`
- Save first value in `tmp`
- Put second into first
- Put temp into second

### Common mistakes
- Writing `a = b` instead of `*a = *b`
- Forgetting the temp variable
- Swapping pointers instead of values

### Memory sentence
"tmp gets a, a gets b, b gets tmp."

---

## 4) rot13

### What they want
Rotate letters by 13.
- `a -> n`
- `n -> a`
- `A -> N`
- `N -> A`
- non-letters stay the same

### Program shape
```c
#include <unistd.h>
int main(int ac, char **av)
```

### Idea
For each char:
- if in `a-m` or `A-M`, add 13
- if in `n-z` or `N-Z`, subtract 13
- else keep it

### Exam-safe solution
```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int	 i = 0;
	char c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				c += 13;
			else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
				c -= 13;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```

### How to think
Take one char into `c`, modify `c`, print `c`.

### Very common bug
Do **not** write this:
```c
(c >= 'N' && c <= 'z')
```
It must be:
```c
(c >= 'N' && c <= 'Z')
```
Otherwise uppercase check is wrong.

### Memory sentence
"First half +13, second half -13."

---

## 5) rotone

### What they want
Rotate each letter by 1.
- `a -> b`
- `z -> a`
- `A -> B`
- `Z -> A`
- others unchanged

### Idea
- if letter between `a-y` or `A-Y`, add 1
- if `z`, become `a`
- if `Z`, become `A`

### Exam-safe solution
```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int	 i = 0;
	char c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
				c++;
			else if (c == 'z')
				c = 'a';
			else if (c == 'Z')
				c = 'A';
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```

### Memory sentence
"Normal letters +1, z wraps to a, Z wraps to A."

---

## 6) ulstr

### What they want
Reverse the case of every letter.
- lowercase becomes uppercase
- uppercase becomes lowercase
- other chars unchanged

### Idea
ASCII gap between lowercase and uppercase is 32.
- lowercase to uppercase => `- 32`
- uppercase to lowercase => `+ 32`

### Exam-safe solution
```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int	 i = 0;
	char c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (c >= 'a' && c <= 'z')
				c -= 32;
			else if (c >= 'A' && c <= 'Z')
				c += 32;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```

### Memory sentence
"Lower goes up, upper goes down."

---

## 7) firstword

### What they want
Print only the first word of the input string.
Leading spaces/tabs must be skipped.

### Idea
1. Skip spaces and tabs
2. Print until next space/tab or end

### Exam-safe solution
```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```

### Dry run
Input:
```bash
"   hello   world"
```
- skip spaces -> points to `h`
- print `h e l l o`
- stop on space

### Memory sentence
"Skip blanks, print until blank."

---

## 8) searchandreplace

### What they want
Given:
- a string
- one character to find
- one character to replace it with

Print the modified string.

Example:
```bash
./a.out "hello" l x
```
prints:
```bash
hexxo
```

### Idea
Only valid when:
- `ac == 4`
- second argument length is 1
- third argument length is 1

Then loop over first string:
- if char matches target, replace it
- print result char

### Exam-safe solution
```c
#include <unistd.h>

int	main(int ac, char **av)
{
	int	 i = 0;
	char c;

	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (c == av[2][0])
				c = av[3][0];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```

### Why `!av[2][1]`?
It means: there is no second character. So length is exactly 1.

### Common mistakes
- Forgetting to check argument lengths
- Replacing the original array directly when not needed
- Forgetting `i++`

### Memory sentence
"If char matches target, print replacement instead."

---

# Fast comparison table

| Exercise | Type | Core idea |
|---|---|---|
| putstr | function | print string char by char |
| len | function | count until `\0` |
| swap | function | temp variable + pointers |
| rot13 | program | first half +13, second half -13 |
| rotone | program | letters +1, z/Z wrap |
| ulstr | program | change lower <-> upper |
| firstword | program | skip blanks, print first word |
| searchandreplace | program | replace one char with another |

# What to memorize in the next 20 minutes

1. `write(1, &c, 1);`
2. `while (str[i])`
3. `while (s[i] == ' ' || s[i] == '\t')`
4. `while (s[i] && s[i] != ' ' && s[i] != '\t')`
5. pointer swap pattern
6. `c = av[1][i];` then modify `c`
7. always finish with `write(1, "\n", 1);`

# Best exam strategy

- Start with the simplest correct version.
- Do not optimize.
- Use `char c;` in text-transform programs.
- Compile after the first complete draft.
- Test one normal case and one edge case.
- If stuck, go back to the core pattern: loop, transform, print.

# Tiny test commands

```bash
cc rot13.c && ./a.out "abc XYZ"
cc rotone.c && ./a.out "abc xyz Z"
cc ulstr.c && ./a.out "AbC 123"
cc firstword.c && ./a.out "   hello   world"
cc searchandreplace.c && ./a.out "hello" l x
```

# Final advice for passing

For Level 1, you do **not** need to be clever. You need to be calm and mechanical.

For every text exercise, think in this order:
1. check args
2. loop through chars
3. maybe change current char
4. print current char
5. newline

That alone solves most of Level 1.
