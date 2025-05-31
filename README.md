![assets_task_01jwk045m1enmsp6z2s5wa1sjt_1748689422_img_0](https://github.com/user-attachments/assets/40cc7ebd-82d0-4b51-a188-148858f41afa)

# 📚 Libft - 42 School C Library

## 🎯 Introduction
Libft is your first **custom C library**, recreating essential functions from `libc` while adding new utilities. This foundational project teaches:
- **Low-level C programming** by rebuilding standard functions
- **Memory management** through manual allocation
- **Header file design** for modular code
- **Static libraries** creation and linking
- **Makefile automation** for professional builds

## 🔧 Core Components

### 1. `Makefile` - Build Automation
```makefile
# Example snippet
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isdigit.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(CFLAGS) $(OBJ) -o $(NAME) 
```
**Key Lessons:**
- Compilation rules and flags
- Dependency tracking
- Static library creation (`ar` command)
- Clean build practices

### 2. `libft.h` - Header File
```c
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h> // Essential headers

typedef struct s_list { // Bonus part
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c); // Function prototypes
#endif
```
**Why It Matters:**
- Centralizes function declarations
- Prevents duplicate inclusions
- Defines data structures
- Documents public API

### 3. `libft.a` - Static Library
```
libft.a
├── ft_isalpha.o
├── ft_memset.o
└── ... (all compiled objects)
```
**Key Benefits:**
- Reusable across 42 projects
- Faster compilation (pre-built objects)
- Isolates implementation details

## 🧠 Pedagogical Value
This project teaches you to:
1. **Reinvent the wheel** to understand standard libraries
2. **Write production-grade headers** with proper guards
3. **Master Makefiles** for automated building
4. **Create linkable libraries** for future projects

## 🚀 Getting Started
```bash
make        # Compiles library
make bonus  # Adds linked-list functions
make clean  # Removes object files
```

Pro Tip: Use `#include "libft.h"` in your projects after compiling!

## 📚 Libft Function Guide

### **1. Character Classification (`ctype`)**
| Function | Description | Equivalent |
|----------|-------------|------------|
| `ft_isalpha` | Checks if character is alphabetic | `isalpha` |
| `ft_isdigit` | Checks if character is a digit (0-9) | `isdigit` |
| `ft_isalnum` | Checks if character is alphanumeric | `isalnum` |
| `ft_isascii` | Checks if character is ASCII (0-127) | - |
| `ft_isprint` | Checks if character is printable | `isprint` |
| `ft_toupper` | Converts character to uppercase | `toupper` |
| `ft_tolower` | Converts character to lowercase | `tolower` |

### **2. String Manipulation (`string`)**
| Function | Description | Key Logic |
|----------|-------------|-----------|
| `ft_strlen` | Returns string length | `while (str[i]) i++` |
| `ft_strchr` | Finds first occurrence of character | `while (*s != c && *s)` |
| `ft_strrchr` | Finds last occurrence of character | Reverse search |
| `ft_strncmp` | Compares first `n` characters | `while (n-- && *s1 == *s2)` |
| `ft_strnstr` | Locates substring | Nested loops with early exit |
| `ft_strdup` | Duplicates string | `malloc + ft_strlcpy` |

### **3. Memory Operations (`memory`)**
| Function | Description | Key Feature |
|----------|-------------|-------------|
| `ft_memset` | Fills memory with constant byte | `while (len--) *ptr++ = c` |
| `ft_memcpy` | Copies memory area | Handles overlap? ❌ |
| `ft_memmove` | Safe copy for overlapping areas | Reverse copy if needed |
| `ft_memchr` | Scans memory for character | `while (len-- && *ptr != c)` |
| `ft_memcmp` | Compares memory areas | Byte-by-byte comparison |
| `ft_bzero` | Zero-fills memory | `ft_memset(ptr, 0, len)` |

### **4. Conversion Functions**
| Function | Description | Edge Cases |
|----------|-------------|------------|
| `ft_atoi` | Converts string to integer | Overflow, whitespace, signs |
| `ft_itoa` | Converts integer to string | Handles `INT_MIN` |

### **5. Linked Lists (Bonus)**
```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
```
| Function | Description | Complexity |
|----------|-------------|------------|
| `ft_lstnew` | Creates new node | O(1) |
| `ft_lstadd_front` | Adds node to list head | O(1) |
| `ft_lstsize` | Counts list nodes | O(n) |
| `ft_lstlast` | Returns last node | O(n) |

### **6. Custom Utilities**
| Function | Description | 42 Unique |
|----------|-------------|-----------|
| `ft_substr` | Extracts substring | Handles edge cases |
| `ft_strjoin` | Concatenates two strings | Null-input safe |
| `ft_strtrim` | Trims characters from ends | Uses lookup table |
| `ft_split` | Splits string by delimiter | Double-pointer magic |


