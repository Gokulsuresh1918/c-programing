#include <stdio.h>
int main()
{
    int choose,tobank,accountbalance=1000,frombank,repeat,statement,mini[5],i=0;
    for(;;){
    printf("Welcomes you to the ATM\n\n");
    printf("1 for deposite\n2 for withdraw\n3 for balance enquiry\n4 for mini statement\nplease enter your choose\n\n");
    scanf("%d",&choose);
    switch(choose){
         case 1:
         printf("you choose option for money deposite\n\n");
         printf("how much amount you want to deposite\t\n");
         scanf("%d",&tobank);
         accountbalance=accountbalance+tobank;
         printf("%d is successfully credicted\n\n",tobank);
         printf("account balance : %d\n",accountbalance);
         mini[i]=tobank;
         i++;
         break;
         case 2:
         printf("you choose for withdraw\n");
         printf("Enter the amount you whant to withdraw\n");
         scanf("%d",&frombank);
         accountbalance=accountbalance-frombank;
         printf("%d is succesfully debited\n",frombank);
         printf("account balance : %d\n",accountbalance);
         mini[i]=(frombank*-1);
         i++;
         break;
         case 3:
         printf("you have choosen balance enquiry\n\n");
         printf("Account balance is : %d\n",accountbalance);
         break;
         case 4:
         printf("You have selected for mini statement\n\n");
         for(i=0;i<5;i++){
         printf("%d\n",mini[i]);
 }
         break ;


    }
         printf("Do you whant to countinue? \nYes= 1\nNo= 2\nPleace enter your choose\n\n");
         scanf("%d",&repeat);
         if(repeat==2){
          printf("Thank you visit again");
          break;
         }
    }

   return 0;
}