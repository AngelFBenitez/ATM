#include "stdio.h"
#include "stdlib.h"


int main() {
// declare int variables
	int choice = 0, pin = 0, c = 0, trys = 0, reci = 0, fcc = 0;
	
// declare double variables
	double Amount = 1000.00, Deposit = 0, Withdraw = 0;

// Welcome prompt
	printf("\t\t\t\tVirtual Bank\n");
	printf("\t\t\t\tWelcome\n");

//  loop, checks PIN
	while (pin != 1234) {
		printf("ENTER YOUR PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1234) {
			printf("Invalid PIN, Try Again\n");
			
			// after 3 tries, the system ends the program. 
			trys++;
			if (trys == 3) {
				printf("Sorry you cannot continue, Please contact your bank for assistance\n");
				system("pause");
				exit(0);
			}
		}

	}
	system("cls");

// program asks if user would like the receipt
	printf("would you like a reciept\n 1. for Yes\n 2. for No\n");
	scanf("%d", &reci);
	if (reci >= 3) {
		printf("ERROR Reciept will not be printed\n");
		system("pause");
	}
	system("cls");

// Main Menu
	do
	{
		system("cls");
		printf("********Welcome to ATM Service**************\n");
		printf("1. Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Fast Cash\n");
		printf("5. Get Card Back\n");
		printf("***********************************************\n\n");
		
		// user input
		printf("Enter your choice: ");
		scanf("%d", &choice);
		system("cls");
		
	//  Instructions for each choice 
		switch (choice)
		{
			// Option 1: Balance
		case 1:
			printf("Your Balance is : %.2lf \n", Amount);
			system("pause");
			break;
			
			// Option 2: Withdraw
		case 2:
			printf("\n How much would you like to Withdrawl: ");
			scanf("%lf", &Withdraw);
			if (Withdraw > Amount)
			{
				printf("\n INSUFFICENT FUNDS...\n");
			}
			else
			{
				Amount = Amount - Withdraw;
				printf("\n\n Withdrawl Accepted...");
				printf("\n Your Current Balance is: %.2lf \n", Amount);
			}
			system("pause");
			break;
			
			// Option 3: Deposit
		case 3:
			printf("How much would you like to Desposit:\n");

			scanf(" %lf", &Deposit);
			Amount = Amount + Deposit;
			printf("Your Current Balance is: %.2lf \n", Amount);
			system("pause");
			break;
			
			// Option 4 : Fast Cash
		case 4:
			printf("You have selected Fast Cash\n");
			printf("Please select one of the following\n");
			// prompt
			printf("1--> $20.00 \t\t 2--> $40.00\n3--> $80.00 \t\t 4--> $100.00\n");
			printf(" \n");
			scanf("%d", &fcc);
			if (fcc == 1) {
				Amount = Amount - 20;
			}
			if (fcc == 2) {
				Amount = Amount - 40;
			}
			if (fcc == 3) {
				Amount = Amount - 80;
			}
			if (fcc == 4) {
				Amount = Amount - 100;
			}
			printf("\n Your Current Balance is: %.2lf \n", Amount);
			system("pause");
			break;
			
			// Option 5 : Get Card Back
		case 5:
			printf("Thank you for using our Virtual Banking System\n");
			printf("GoodBye...\n");
			system("pause");
			c = 1;
			break;
		default:
			printf("Invalid entry\n");
			system("pause");
			break;
		}

	} 
	
	while (!c);

	system("cls");

	if (reci == 1) {
		printf("RECIEPT\nYour Final Balance is %.2lf \n", Amount);
		system("pause");
	}


}

