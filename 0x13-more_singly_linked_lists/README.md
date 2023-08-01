0x13. C - More singly linked lists
C
Algorithm
Data structure
 By: Julien Barbier
 Weight: 1
 Project will start Jul 31, 2023 6:00 AM, must end by Aug 2, 2023 6:00 AM
 Checker will be released at Jul 31, 2023 6:00 PM
 An auto review will be launched at the deadline

Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

0. Print list
Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);

1. List length
Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);

2. Add node
Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);

3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

4. Free list
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

5. Free
Write a function that frees a listint_t list.
Prototype: void free_listint2(listint_t **head);

6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);

7. Get node at index
Write a function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.
Prototype: int sum_listint(listint_t *head);

9. Insert
Write a function that inserts a new node at a given position.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);

11. Reverse list
Write a function that reverses a listint_t linked list.
Prototype: listint_t *reverse_listint(listint_t **head);

12. Print (safe version)
Write a function that prints a listint_t linked list.
Prototype: size_t print_listint_safe(const listint_t *head);

13. Free (safe version)
Write a function that frees a listint_t list.
Prototype: size_t free_listint_safe(listint_t **h);

14. Find the loop
Write a function that finds the loop in a linked list.
Prototype: listint_t *find_listint_loop(listint_t *head);
