#include<stdio.h>
int main(){
	int choice,amo,bal=50000;
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Exit\n");
	printf("Enter the choice: ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\nCurrent Balance= %d",bal);
	}
	else if(choice==2){
		printf("\nEnter the amount you want to deposit: ");
		scanf("%d",&amo);
		bal=bal+amo;
		printf("\nCurrent Balance= %d",bal);
	}
	else if(choice==3){
		printf("\nEnter the amount you want to withdraw: ");
		scanf("%d",&amo);
		if(amo<=bal){
			bal=bal-amo;
			printf("Current Balance= %d",bal);
		}
		else{
		printf("\nInsufficient Balance.");
		}
	}
	else if(choice==4){
		printf("Thank you for using the ATM");
	}
else{
printf("Invalid Option.");
]
	return 0;
}
