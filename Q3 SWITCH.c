#include<stdio.h>
int main(){
	int choice,amo,bal=50000;
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Exit\n");
	printf("Enter the choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nCurrent Balance= %d",bal);
			break;
		case 2:
		printf("\nEnter the amount you want to deposit: ");
		scanf("%d",&amo);
		bal=bal+amo;
		printf("\nCurrent Balance= %d",bal);
		break;
		case 3:
		printf("\nEnter the amount you want to withdraw: ");
		scanf("%d",&amo);
		if(amo<=bal){
			bal=bal-amo;
			printf("Current Balance= %d",bal);
		}
		else{
		printf("\nInsufficient Balance.");
		}
		break;
		case 4:
		printf("Thank you for using the ATM");
		break;
	default:
		printf("Invalid Option.");
	}
	return 0;
}
