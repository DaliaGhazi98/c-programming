#include "Function.h"

int main(void)
{
    char *s = "hello All";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
