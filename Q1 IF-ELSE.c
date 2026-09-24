#include <stdio.h>
int main()
{
    float dis, final, bill, disamo;
    int mem;
    printf("Enter the total bill amount: ");
    scanf("%f", &bill);
    printf("Member (1 for member / 0 for non-member): ");
    scanf("%d", &mem);
    if (bill >= 5000)
    {
        if(mem==1){
            dis= bill* 0.2;
            final= bill - dis;
        }
        else if(mem==0){
            dis= bill * 0.1;
            final = bill - dis;
        }
        else{
            printf("Invalid Input.");
            return 0;
        }
    }
    else {
       if(mem==1){
           dis= bill*0.1;
           final = bill - dis;
       }
       else if(mem==0){
           dis= bill * 0;
           final = bill - dis;
       }
       else{
           printf("Invald Input.");
           return 0;
       }
    }
    printf("\nTotal Bill Amount = %.2f\n", bill);
    printf("\nDiscount= %.2f\n",dis);
    printf("\nDiscounted Amount= %.2f",final);

    return 0;
}

