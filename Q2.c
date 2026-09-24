#include<stdio.h>
int main(){
    int amount, distance,charge,total;
    printf("Enter the Delivery amount: ");
    scanf("%d",&amount);
    printf("Enter the delivery distance: ");
    scanf("%d",&distance);{
    if(amount<0 || distance<0){
    	printf("Invalid Input.");
	}	
	else{

	    if(amount>=5000){
	        printf("\nDelivery: Free delivery.");
	    }
	    else {
 	       if(distance<=5){
 	           charge=150;
 	       }
 	       else if(distance>=6 && distance<=10){
  	          charge=250;
 	       }
  	      else if(distance>=11 && distance<=20){
      	      charge=400;
      	  }
      	  else {
        	charge=600;
        	}
    	}
    	}
	}
	total= amount + charge;
   	printf("\nShopping amount= %d",amount);
   	printf("\nDelivery charges= %d",charge);
   	printf("\nTotal Payable Amount= %d",total);
   	return 0;
}
