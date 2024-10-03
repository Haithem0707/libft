# 📚 Libft - Your First C Library!

Welcome to **Libft**, where you will build your very own C library from scratch! This project includes re-implementations of common C standard library functions, additional utility functions, and a bonus part for manipulating linked lists. The repository is structured into **mandatory** and **bonus** sections, with detailed descriptions for each function.

## 🌟 Project Overview

- **Program Name**: `libft.a`
- **Turn in Files**: `Makefile`, `libft.h`, `ft_*.c`
- **Objective**: Create a collection of C functions that will be a useful toolkit for future projects.
- **Technical Considerations**:
  - No global variables allowed.
  - Helper functions must be defined as `static`.
  - The library must be created using the `ar` command.
  - All `.c` files must compile with the flags `-Wall -Wextra -Werror`.

---

## 📖 Chapter III: Mandatory Part

### 🔧 Technical Requirements

- Implement a set of functions that mimic the behavior of the standard C library.
- Use the `ft_` prefix for each function name (e.g., `strlen` becomes `ft_strlen`).
- Do not use the `restrict` keyword or compile with the `-std=c99` flag.

### 🛠️ Implemented Libc Functions

The following functions are re-implementations of the standard C library functions:

1. **Character Functions**
   - `ft_isalpha`: Checks if a character is alphabetic.
   - `ft_isdigit`: Checks if a character is a digit.
   - `ft_isalnum`: Checks if a character is alphanumeric.
   - `ft_isascii`: Checks if a character is an ASCII character.
   - `ft_isprint`: Checks if a character is printable.

2. **String Functions**
   - `ft_strlen`: Computes the length of a string.
   - `ft_strchr`: Locates the first occurrence of a character in a string.
   - `ft_strrchr`: Locates the last occurrence of a character in a string.
   - `ft_strncmp`: Compares two strings up to a specified number of characters.
   - `ft_strnstr`: Locates a substring in a string.
   - `ft_atoi`: Converts a string to an integer.

3. **Memory Functions**
   - `ft_memset`: Fills memory with a constant byte.
   - `ft_bzero`: Sets all bytes of a memory area to zero.
   - `ft_memcpy`: Copies memory area.
   - `ft_memmove`: Copies memory area with overlapping support.
   - `ft_memchr`: Locates a byte in memory.
   - `ft_memcmp`: Compares memory areas.

4. **Case Conversion Functions**
   - `ft_toupper`: Converts a character to uppercase.
   - `ft_tolower`: Converts a character to lowercase.

### ✨ Additional Functions

These functions are not part of the libc but are useful utilities for future projects:

1. `ft_calloc`: Allocates memory and sets it to zero.
2. `ft_strdup`: Duplicates a string.
3. `ft_substr`: Creates a substring from a string.
4. `ft_strjoin`: Joins two strings into a new one.
5. `ft_strtrim`: Trims characters from the beginning and end of a string.
6. `ft_split`: Splits a string into an array of strings using a specified delimiter.
7. `ft_itoa`: Converts an integer to a string.
8. `ft_strmapi`: Applies a function to each character of a string.
9. `ft_striteri`: Applies a function to each character of a string by reference.
10. `ft_putchar_fd`: Outputs a character to a file descriptor.
11. `ft_putstr_fd`: Outputs a string to a file descriptor.
12. `ft_putendl_fd`: Outputs a string followed by a newline to a file descriptor.
13. `ft_putnbr_fd`: Outputs an integer to a file descriptor.

---

## 🔥 Chapter IV: Bonus Part

If you have completed the mandatory part, you can implement the following functions to manipulate linked lists. This bonus part will only be evaluated if the mandatory part is perfect.

### 🔗 Bonus Functions for Linked Lists

1. **Node Management Functions**
   - `ft_lstnew`: Creates a new node with specified content.
   - `ft_lstadd_front`: Adds a node at the beginning of a list.
   - `ft_lstadd_back`: Adds a node at the end of a list.
   - `ft_lstsize`: Returns the number of nodes in a list.
   - `ft_lstlast`: Returns the last node of a list.

2. **Node Deletion Functions**
   - `ft_lstdelone`: Deletes a single node’s content and frees its memory.
   - `ft_lstclear`: Deletes and frees the memory of a list and its successors.

3. **List Iteration Functions**
   - `ft_lstiter`: Applies a function to the content of each node.
   - `ft_lstmap`: Creates a new list by applying a function to each node’s content.

---

## 📝 Project Structure

- **Makefile**: Contains the rules for compiling the library.
  - `NAME`: Creates the `libft.a` library.
  - `all`: Compiles all the source files.
  - `clean`: Removes all object files.
  - `fclean`: Removes all object files and the library.
  - `re`: Recompiles everything from scratch.
- **libft.h**: Contains all the function prototypes and the `t_list` structure definition.
- **Source Files**: Each function implementation is in its corresponding `ft_*.c` file.

---

## 🎨 Presentation and Code Style

- **Static Functions**: Helper functions are defined as `static` to limit their scope.
- **No Global Variables**: No global variables are used in any part of the library.
- **Compilation Flags**: The project compiles with the flags `-Wall -Wextra -Werror` to ensure high code quality and catch potential issues.

---

## 📚 Summary and Key Learnings

- This project helps in understanding the fundamentals of the C programming language and implementing core concepts like string manipulation, memory management, and linked list handling.
- Through this library, you get hands-on experience with code modularity, reusability, and good programming practices.
- **Key Learning**: Writing a library from scratch emphasizes the importance of understanding function implementation, code structure, and compilation processes.

---

## 🔑 Key Takeaways

- 🔍 **Understanding of libc Functions**: How to implement essential C functions with a deep understanding of their behavior.
- 📐 **Modular Code**: Each function is separate and reusable, enhancing code maintainability.
- 💾 **Memory Management**: Extensive use of dynamic memory allocation and deallocation.
- 🛠️ **Linked List Manipulation**: Introduction to handling linked lists, which is crucial for data structure understanding.

---

🚀 **Enjoy building your very own Libft library and mastering the basics of C programming!**
