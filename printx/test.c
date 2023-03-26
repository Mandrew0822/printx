#include <printx.h>

int main(void)
{
    char c = 'A';
    const char *s = "Hello, world!";
    printx("Character: %c\n", c);
    printx("String: %s\n", s);
    printx("Percent sign: %%\n");
    return 0;
}

