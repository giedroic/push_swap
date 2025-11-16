# libft

A custom **C library** developed as part of the 42 school curriculum. This project re‑implements selected **standard C library functions**, includes additional utilities for string and memory handling, and supports **linked list operations**.

> The goal of the Libft project is to deepen your understanding of pointers, memory management, static libraries, and C coding standards, while building a library you can reuse across future projects.

---

## Contents

1. [Library Functions (Libc Reimplementations)](#library-functions)
2. [Additional Utility Functions](#additional-utility-functions)
3. [Bonus: Linked List Operations](#bonus-linked-list-operations)
4. [Build & Usage Instructions](#build--usage-instructions)
5. [Makefile Targets](#makefile-targets)
6. [What You Will Learn](#what-you-will-learn)
7. [Next Steps & Enhancements](#next-steps--enhancements)

---

## Library Functions

Recreated from the C Standard Library (all prefixed with `ft_`):

**Character Tests**
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

**String & Memory Handling**
- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_strdup`
- Conversion: `ft_atoi`, Allocation: `ft_calloc`

---

## Additional Utility Functions

Enhance core functionality and output handling:

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`
- String mappers: `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

---

## Bonus: Linked List Operations

Using a `t_list` struct, these bonuses simplify linked list usage:

- Create & Insert: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- Inspect: `ft_lstsize`, `ft_lstlast`
- Delete: `ft_lstdelone`, `ft_lstclear`
- Traverse & Map: `ft_lstiter`, `ft_lstmap`

---

## Build & Usage Instructions

```bash
# Clone the repository
git clone https://github.com/giedroic/libft.git
cd libft

# Compile into a static library
make
