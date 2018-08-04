# Printf

## Objective

## Allowed Functions
+ write
+ getlocale
+ malloc
+ free
+ exit
+ The functions of man 3 stdarg

## Mandatory Parts
+ You have to recode the libc’s printf function.
+ Your function will be called ft_printf and will be prototyped similarly to printf.
+ You won’t do the buffer management in the printf function.
+ You have to manage the following conversions: sSpdDioOuUxXcC
+ You must manage %%
+ You must manage the flags #0-+ and space
+ You must manage the minimum field-width
+ You must manage the precision
+ You must manage the flags hh, h, l, ll, j, et z

## Parameters
The printf() function produces output according to a format which is described
below.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %u: Prints unsigned integers
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
+ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
