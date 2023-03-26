#include <stdarg.h>
#include <stdio.h>

int printx(const char *format, ...)
{
    int num_chars = 0;
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            switch (*(format + 1)) {
                case 'c':
                    num_chars += printf("%c", va_arg(args, int));
                    format += 2;
                    break;
                case 's':
                    num_chars += printf("%s", va_arg(args, const char*));
                    format += 2;
                    break;
                case '%':
                    num_chars += printf("%%");
                    format += 2;
                    break;
                default:
                    putchar(*format++);
                   break;
            }
        } else {
            putchar(*format++);
        }
    }

    va_end(args);
    return num_chars;
}
 
