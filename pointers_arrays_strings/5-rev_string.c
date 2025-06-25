#include "main.h"
/**
 * rev_string - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)

{
    int right = _strlen(s) - 1;
    int left = 0;
    char tmp;
    while (left < right)
{
    tmp = s[left];
    s[left] = s[right];
    s[right] = tmp;
    
    left++;
    right--;
}


}
