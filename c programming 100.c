#include <stdio.h>
int main() {
    int balance=1000, choice, amount;
    printf("1.Deposit 2.Withdraw 3.Balance\n");
    scanf("%d",&choice);
    if(choice==1){ printf("Enter amount: "); scanf("%d",&amount); balance+=amount; }
    else if(choice==2){ printf("Enter amount: "); scanf("%d",&amount); if(amount<=balance) balance-=amount; else printf("Insufficient funds\n"); }
    printf("Balance=%d",balance);
    return 0;
}
