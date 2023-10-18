#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	  
	    int len;
	        int len2;
		   /*unsigned int ui;
		    *     void *addr;
		    *
		    *         len = _printf("Let's try to printf a simple sentence.\n");
		    *             len2 = printf("Let's try to printf a simple sentence.\n");
		    *                 printf ("%d\n", len);
		    *                     printf ("%d\n", len2);
		    *                         ui = (unsigned int)INT_MAX + 1024;
		    *                             addr = (void *)0x7ffe637541f0;
		    *                                 _printf("Length:[%d, %i]\n", len, len);
		    *                                     printf("Length:[%d, %i]\n", len2, len2);
		    *                                         _printf("Negative:[%d]\n", -762534);
		    *                                             printf("Negative:[%d]\n", -762534);
		    *                                                 _printf("Unsigned:[%u]\n", ui);
		    *                                                     printf("Unsigned:[%u]\n", ui);
		    *                                                         _printf("Unsigned octal:[%o]\n", ui);
		    *                                                             printf("Unsigned octal:[%o]\n", ui);
		    *                                                                 _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		    *                                                                     printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		    *                                                                         len = _printf("Character:[%c]\n", 'H');
		    *                                                                             printf ("%d\n", len);
		    *                                                                                 printf("Character:[%c]\n", 'H');
		    *                                                                                     _printf("String:[%s]\n", "I am a string !");
		    *                                                                                         printf("String:[%s]\n", "I am a string !");
		    *                                                                                             _printf("Address:[%p]\n", addr);
		    *                                                                                                 printf("Address:[%p]\n", addr);
		    *                                                                                                     _printf("Percent:[%%]\n");
		    *                                                                                                         printf("Percent:[%%]\n");
		    *                                                                                                             _printf("Len:[%d]\n", len);
		    *                                                                                                                 printf("Len:[%d]\n", len2);
		    *                                                                                                                     _printf("Unknown:[%r]\n");
		    *                                                                                                                         printf("Unknown:[%r]\n");
		    *                                                                                                                            _printf("Let's try to printf a simple sentence.\n");
		    *                                                                                                                               printf("Let's try to printf a simple sentence.\n");
		    *                                                                                                                                   _printf("%c\n", 'S');
		    *                                                                                                                                      printf("%c\n", 'S');
		    *                                                                                                                                        _printf("A char inside a sentence: %c. Did it work?\n", 'F');
		    *                                                                                                                                          printf("A char inside a sentence: %c. Did it work?\n", 'F');
		    *                                                                                                                                            _printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
		    *                                                                                                                                              printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
		    *                                                                                                                                               _printf("%%\n");
		    *                                                                                                                                                 printf("%%\n");
		    *                                                                                                                                                 _printf("Should print a single percent sign: %%\n");
		    *                                                                                                                                                 printf("Should print a single percent sign: %%\n");
		    *                                                                                                                                                 _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
		    *                                                                                                                                                 printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
		    *                                                                                                                                                 _printf("css%ccs%scscscs\n", 'T', "Test");
		    *                                                                                                                                                 printf("css%ccs%scscscs", 'T', "Test");
		    *                                                                                                                                                 _putchar('\n');
		    *                                                                                                                                                 putchar('\n');
		    *                                                                                                                                                 _printf(NULL);
		    *                                                                                                                                                 _printf("%c", '\0');
		    *                                                                                                                                                 printf("%c", '\0');
		    *
		    *                                                                                                                                                 _printf("%K\n");
		    *                                                                                                                                                 printf("%K\n");
		    *                                                                                                                                                 printf("%");
		    *                                                                                                                                                 _printf("%");
		    *
		    *
		    *                                                                                                                                                 _printf("Len:[%i]\n", 38);
		    *                                                                                                                                                     printf("Len:[%i]\n", 38);
		    *                                                                                                                                                         _printf("Len:[%i]\n",0);
		    *                                                                                                                                                             printf("Len:[%i]\n", 1000000000);
		    *                                                                                                                                                                  len = _printf("Len:[%i]\n", 10000000);
		    *                                                                                                                                                                      len2 = printf("Len:[%i]\n", 10000000);
		    *                                                                                                                                                                           printf ("%d\n", len);
		    *                                                                                                                                                                                _printf ("%d\n", len);
		    *                                                                                                                                                                                    printf ("%d\n", len2);
		    *                                                                                                                                                                                         printf("NULL");
		    *                                                                                                                                                                                             _printf ("%d\n", len2);
		*                                                                                                                                                                                                 printf("%c", '\0');
		*                                                                                                                                                                                                     _printf("\n");
		*                                                                                                                                                                                                         _printf("%s", " ");*/
			    
			     _printf("Let's try to printf a simple sentence.\n");
		   printf("Let's try to printf a simple sentence.\n");
		       _printf("%c\n", 'S');
		          printf("%c\n", 'S');
			    _printf("A char inside a sentence: %c. Did it work?\n", 'F');
			      printf("A char inside a sentence: %c. Did it work?\n", 'F');
			        _printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
				  printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
				   _printf("%%\n");
				     printf("%%\n");
				     _printf("Should print a single percent sign: %%\n");
				     printf("Should print a single percent sign: %%\n");
				     _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
				     printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
				     _printf("css%ccs%scscscs\n", 'T', "Test");
				     printf("css%ccs%scscscs\n", 'T', "Test");

				         
				           
				          len =_printf ("%d\n", -11111);
					       len2 = printf ("%d\n", -11111);
					            _printf ("%d\n%d\n", len, len2);
						         _printf ("%s", NULL);
							     
							     return (0);
}

