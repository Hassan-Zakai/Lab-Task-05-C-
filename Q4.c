#include <stdio.h>
int main()
{
    int cat, item;
    printf("\n1.Fast Food\n2. Pakistani Food\n3. Drinks: \n ");
    scanf("%d", &cat);
    switch (cat)
    {

    case 1:
        printf("\n1. Burger\n 2. Pizza\n 3. Fries: ");
        printf("Enter item: ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("You selected Burger.");
            break;
        case 2:
            printf("You selected Pizza.");
            break;
        case 3:
            printf("You selected Fries.");
            break;
        default:
            printf("Invalid choice.");
        }
        break;
    case 2:
        printf("\n1. Biryani\n2. Karahi\n3. Nihari: \n ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("You selected Biryani.");
            break;
        case 2:
            printf("You selected Karhai..");
            break;
        case 3:
            printf("You selected Nihari.");
            break;
        default:
            printf("Invalid choice.");
        }
        break;
    case 3:
        printf("\n1. Coke\n2. Pepsi\n3. Juice: \n ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("You selected Coke.");
            break;
        case 2:
            printf("You selected Pepsi.");
            break;

        case 3:
            printf("You selected Juice.");
            break;
        default:
            printf("Invalid choice.");
        }
        break;
    default:
        printf("Invalid catagory.");
    }
}

