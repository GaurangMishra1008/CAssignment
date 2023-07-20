#include <stdio.h>
int main() {
    int h,e,m,s,c;
    int total=0;
    float percentage;
    char grade;
    printf("Enter marks for 5 subjects.\n");
    scanf("%d%d%d%d%d",&h,&e,&m,&s,&c);
    total = h+e+m+s+c;
    percentage = ((float)total/500)*100;
    if (percentage < 25)
        grade = 'F';
    else if (percentage >= 25 && percentage < 45)
        grade = 'E';
    else if (percentage >= 45 && percentage < 50)
        grade = 'D';
    else if (percentage >= 50 && percentage < 60)
        grade = 'C';
    else if (percentage >= 60 && percentage < 80)
        grade = 'B';
    else
        grade = 'A';

    printf("\nPercentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

