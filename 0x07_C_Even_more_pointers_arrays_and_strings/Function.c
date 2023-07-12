#include "Function.h"

/*------------------------------------------------------------------------------*/
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/*------------------------------------------------------------------------------*/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/*------------------------------------------------------------------------------*/
/**
 *  function that fills memory with a constant byte.
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
/*------------------------------------------------------------------------------*/
/**
 * function that copies memory area.
 *_memcpy - function copies n bytes from memory area src to memory area dest.
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed (pointer to dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int r = 0;
    int i = n;

    for (; r < i; r++)
    {
        dest[r] = src[r];
        n--;
    }
    return (dest);
}

/*------------------------------------------------------------------------------*/
/**
 * _strchr - function that locates a character in a string.
 * @s: Pointer to Put The Constant.
 * @c: Constant
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    for (; s[i] >= '\0'; i++)
    {
        if (s[i] == c)
            return (&s[i]);
    }
    return (0);
}

/*------------------------------------------------------------------------------*/
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string
 * @accept: Byte
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

/*------------------------------------------------------------------------------*/
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string to Match
 * Return: pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

/*------------------------------------------------------------------------------*/
/**
 * function that locates a substring.
 * _strstr - function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

/*------------------------------------------------------------------------------*/
/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i , j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');

	}

}
/*------------------------------------------------------------------------------*/
/**
 * print_diagsums -  function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

/*------------------------------------------------------------------------------*/
/**
 *  function that sets the value of a pointer to a char.
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
/*------------------------------------------------------------------------------*/
/*******************************************************************************
 * static void ftoa(float value_f, uint8_t *res_uc) 
 *
 * API to convert float to ascii for debug purpose
 *  
 * @param value_f: Float value, *res_us: output ascii result, n: 1 for new line
 * @return void
 ******************************************************************************/
static void ftoa(float value_f, uint8_t *res_uc) 
{
    if (value_f < 0) {
        *res_uc++ = '-';
        value_f = -value_f;
    }
    sprintf((char*) res_uc, "%lu.%02u", (long) value_f, (int) ((value_f - (long) value_f) * 100. + 0.5));
}

/*------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------*/
