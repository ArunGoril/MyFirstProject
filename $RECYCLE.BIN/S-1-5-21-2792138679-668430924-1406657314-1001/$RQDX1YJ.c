#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, s, choice;
    clrscr();
    printf("\n 1. Addition");
    printf("\n 2. Odd Even");
    printf("\n 3. Printing n no");

    printf("enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("enter two no: ");
            scanf("%d %d",&a,&b);
            s = a + b;
            printf("\n Sum is %d",s);
            break;
        case 2:
            printf("enter a no: ");
            scanf("%d",&a);
            if (a % 2 == 0)
                printf("Even");
            else 
                printf("Odd");
            break;
        case 3:
            printf("enter a no: ");
            scanf("%d",&a);
            for(int i = 1; i <= a; i++)
                printf("%d",i);
            break;
        default:
            printf("invalid choice");
    }
}