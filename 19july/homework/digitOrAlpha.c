#include <stdio.h>
int main() {
    char c;
    printf("Enter a caracter");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("%c is alpha\n", c);
    else if (c >= '0' && c <= '9')
    printf("%c is a digit\n",c);
    else
    printf("%c not a aphabet or digit", c);
    return 0;
}
