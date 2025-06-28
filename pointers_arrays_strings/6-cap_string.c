#include "main.h"



char *cap_string(char *str)
{
char separate [] = " \t\n,;.(){}!\"?";
int i = 0;
int p = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		{
		str[0] -= 32;
		}
		for (; str[i] != '\0'; i++)
			{
			for(p = 0; separate[p] != '\0'; p++)
				{
				if (str[i] == separate[p])
					{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						{
						str[i + 1] -= 32;
						}
						break;
					}
				}
			}
			return(str);
}