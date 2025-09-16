#include<stdio.h>
int main()
{
    int cp,sp;
    float profit,loss;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("enter selling price:");
    scanf("%d", &sp);
    profit=((float)(sp - cp) / cp) * 100;
    loss=((float)(cp - sp) / cp) * 100;
    if (sp > cp) 
    {
       
        printf("Profit = %.2f%%\n", profit);
    } 
    else if (cp > sp) {
        
        printf("Loss = %.2f%%\n", loss);
    } 
    else {
        printf("No profit, no loss.\n");
    }
}