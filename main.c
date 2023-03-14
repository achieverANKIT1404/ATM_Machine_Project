#include <stdio.h>
#include <stdlib.h>

void message()
{
    printf("^^^^^^^^^^^^^^^^^^^^THANK YOU FOR TRANSACTION..!^^^^^^^^^^^^^^^^^^^^");
    printf("\n");
}
int main()
{
    int p,w,d,cash,total_Bal=50000,choice,total;

    for(int i=0;i<40;i++)
    {
        printf("--");
    }
    printf("\n");
    printf("\n\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 BOI ATM MACHINE \xB3\xB2=\xB2=\xB2-\xB3\n\n");
      for(int i=0;i<40;i++)
    {
        printf("--");
    }
    printf("\n\n");

    printf("\n");
        printf("ENTER YOUR PIN = ");
        scanf("%d",&p);
        printf("_______________________________________\n");
        printf("\n");
        printf("|| PRESS: 1 FOR WITHDRAW CASH ||\n");
        printf("\n");
        printf("|| PRESS: 2 FOR DEPOSITE CASH ||\n");
        printf("\n");
        printf("|| PRESS: 3 FOR CHECK BALANCE ||\n");
        printf("_______________________________________\n");
        printf("\n");

    printf("ENTER YOUR CHOICE = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
         if(p>900)
        {
            printf("\n");
            printf("ENTER CASH TO WITHDRAW = ");
            scanf("%d",&cash);
            printf("\n");
            w=total_Bal-cash;
            printf("TOTAL BALANCE = %d Rs/-\n",w);
            printf("\n");
            message();
             printf("\n");
           }
           else
           {
            printf("INVALID PIN,PLEASE ENTER 4 DIGIT PIN..!");
           }
        break;

        case 2:
         if(p>900)
        {
            printf("\n");
            printf("ENTER CASH TO DEPOSITE = ");
            scanf("%d",&cash);
            printf("\n");
            total=cash/2000;
            printf("%d Notes of 2000 Rs/-\n",total);
            cash=cash-(total*2000);

            total=cash/500;
            printf("%d Notes of 500 Rs/-\n",total);
            cash=cash-(total*500);

            total=cash/200;
            printf("%d Notes of 200 Rs/-\n",total);
            cash=cash-(total*200);

            total=cash/100;
            printf("%d Notes of 100 Rs/-\n",total);
            cash=cash-(total*100);

            printf("\n");
            d=total_Bal+cash;
            printf("TOTAL BALANCE = %d Rs/-\n",d);
            printf("\n");
            message();
            printf("\n");
           }
           else
           {
            printf("INVALID PIN,PLEASE ENTER 4 DIGIT PIN..!");
           }
        break;

        case 3:
        choice==3;
        printf("\n");
        printf("TOTAL BALANCE = %d Rs/-\n",total_Bal);
        printf("\n");
        message();
        printf("\n");
        break;

        default:
         printf("INVALID CHOICE..!,TRY AGAIN!\n");
         printf("\n");
    }

    return 0;
}
