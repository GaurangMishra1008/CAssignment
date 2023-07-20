#include <stdio.h>
int main() {
    int rollNo,p,c,m;
    int total;
    float percentage;
    char division;
    printf("Input the Roll No: ");
    scanf("%d", &rollNo);
    printf("Input the marks of Physics, Chemistry, and Maths: ");
    scanf("%d %d %d", &p, &c, &m);
    total = p + c + m;
    percentage = (float)total / 300*100;
     if(percentage >= 45 && percentage < 50)
        division = 'D';
     else if (percentage >= 50 && percentage < 60)
        division = 'C';
     else if (percentage >= 60 && percentage < 80)
        division = 'B';
     else if (percentage >= 80)
        division = 'A';
     else
        division = 'F';
    printf("RollNo: %d\n", rollNo);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %c\n", division);
    return 0;
}

