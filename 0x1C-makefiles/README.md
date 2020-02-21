# 0x1C. C - Makefiles

## Learning Objectives


- What are `make`, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

# Tasks

_**0. make -f 0-Makefile**_  
Create your first Makefile.

_**1. make -f 1-Makefile**_  
Requirements:

- name of the executable: `holberton`
- rules: `all`
 - The `all` rule builds your executable
- variables: `CC`, `SRC`
 - `CC`: the compiler to be used
 - `SRC`: the .c files

_**2. make -f 2-Makefile**_  
Create your first useful Makefile.

_**3. make -f 3-Makefile**_  
Requirements:

- name of the executable: `holberton`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
 - `all`: builds your executable
 - `clean`: deletes all Emacs and Vim temporary files along with the executable
 - `oclean`: deletes the object files
 - `fclean`: deletes the Emacs temporary files, the executable, and the object files
 - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
 - `CC`: the compiler to be used
 - `SRC`: the .c files
 - `OBJ`: the .o files
 - `NAME`: the name of the executable
 - `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files

_**4. A complete Makefile**_  

_**5. Island Perimeter**_  
Create a function `def island_perimeter(grid)`: that returns the perimeter of the island described in `grid`.
