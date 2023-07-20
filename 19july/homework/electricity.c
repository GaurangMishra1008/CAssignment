#include <stdio.h>
int main() {
    int u,dis=0,disamt,disamtfinal1;
    int totalunitamt;
    printf("Enter unit.\n");
    scanf("%d",&u);
    totalunitamt = u*10;
    if(u>=1 && u<=10)
    dis=10;
    else if(u>=11 && u<=20)
    dis=15;
    else if(u>=21 && u<=40)
    dis=30;
    else if(u>=40)
    dis=50;
    else
        printf("wrong Unit");
    int amount=u*10;
    totalunitamt=amount-(amount*dis/100);
    printf("Your Total Amount: %d",totalunitamt);

    return 0;
}

