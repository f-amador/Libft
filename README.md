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

Here's the complete **Libft Function Guide** with all remaining functions organized clearly:

---

## 📚 Complete Libft Function Reference

### **1. Character Classification (`ctype.h` replacements)**
| Function | Description | Edge Cases Handled |
|----------|-------------|--------------------|
| `ft_isalpha` | Alphabet check (A-Z/a-z) | Non-ASCII returns 0 |
| `ft_isdigit` | Digit check (0-9) | Ignores locale |
| `ft_isalnum` | Alphanumeric check | Combines isalpha+isdigit |
| `ft_isascii` | ASCII range check (0-127) | - |
| `ft_isprint` | Printable char (32-126) | Excludes control chars |

### **2. String Manipulation**
| Function | Description | Key Optimization |
|----------|-------------|------------------|
| `ft_strlen` | String length | Simple byte count |
| `ft_strchr` | First char occurrence | Stops at null terminator |
| `ft_strrchr` | Last char occurrence | Reverse traversal |
| `ft_strncmp` | Safe string compare | Stops after `n` chars |
| `ft_strnstr` | Substring search | Early termination |
| `ft_strdup` | String duplication | Calls `malloc` |
| `ft_strlcpy` | Safe string copy | Guarantees null-termination |
| `ft_strlcat` | Safe concatenation | Prevents buffer overflow |

### **3. Memory Operations**
| Function | Description | Special Behavior |
|----------|-------------|------------------|
| `ft_memset` | Fill memory | Handles zero-length |
| `ft_memcpy` | Copy memory | Undefined on overlap |
| `ft_memmove` | Safe memory copy | Handles overlap |
| `ft_memchr` | Locate byte in memory | Returns NULL if not found |
| `ft_memcmp` | Compare memory | Unsigned byte comparison |
| `ft_bzero` | Zero memory | Uses `ft_memset` |
| `ft_calloc` | Allocate+zero memory | Checks for overflow |

### **4. Conversion & Output**
| Function | Description | Special Cases |
|----------|-------------|---------------|
| `ft_atoi` | String to int | Skips whitespace, handles signs |
| `ft_itoa` | Int to string | Handles INT_MIN |
| `ft_putchar_fd` | Char output | Uses `write` directly |
| `ft_putstr_fd` | String output | Handles NULL safely |
| `ft_putendl_fd` | String+newline | - |
| `ft_putnbr_fd` | Number output | Recursive implementation |

### **5. String Utilities (42 Extras)**
| Function | Description | Unique Feature |
|----------|-------------|----------------|
| `ft_substr` | Extract substring | Handles out-of-bounds |
| `ft_strjoin` | Concatenate strings | NULL input → empty string |
| `ft_strtrim` | Trim chars from ends | Uses charset lookup |
| `ft_split` | Split string by char | Double-pointer magic |
| `ft_strmapi` | Apply function to chars | Preserves original |
| `ft_striteri` | Iterate with index | Modifies in-place |

### **6. Linked Lists (Bonus)**
```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
```

| Function | Description | Time Complexity |
|----------|-------------|-----------------|
| `ft_lstnew` | Create node | O(1) |
| `ft_lstadd_front` | Prepend node | O(1) |
| `ft_lstsize` | Count nodes | O(n) |
| `ft_lstlast` | Get tail node | O(n) |
| `ft_lstadd_back` | Append node | O(n) |
| `ft_lstdelone` | Delete node | Custom `del` function |
| `ft_lstclear` | Clear list | Recursive free |
| `ft_lstiter` | Apply function | Iterative |
| `ft_lstmap` | Transform list | Creates new list |

---

