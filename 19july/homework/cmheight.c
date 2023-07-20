#include <stdio.h>
int main() {
    int h_m,h_c;
    printf("Enter the height in meter: ");
    scanf("%d",&h_m);
    h_c = h_m*100;
    printf("%d",h_c);
    if (h_c < 500)
        printf("Low\n");
    else if (h_c >= 500 && h_c < 800)
        printf("Mid\n");
    else
        printf("High\n");
    return 0;
}
