//---------------------------------------------------------------Food Ordering System In C language------------------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

//-----------------------prototypes of functions---------------------------------------------------
void login();
void home();
void veg();
void Nonveg();
void drinks();
void Breakfast();
void orderConfirm();
void addSomthing();
void progress();


//------------------------main function-----------------------------------------------------------
void main()
{
 	FILE *fp;
	fp=fopen("login.txt","r");
	char username[20],userpassword[20],un[20],up[20];
	fscanf(fp,"%s%s",username,userpassword);
	printf("Enter The User Name:\n");
	gets(un);
	printf("Enter The Password:\n");
	gets(up);
	
	if((strcmp(username,un)==0)&&(strcmp(userpassword,up)==0))
	{
//		printf("Login Successfully\n");
		printf("Welcome--------------------------------->%s<----------------------------------\n",un);
		home();
	}
	else
	{
		printf("---------------------------------------------------------------------------------\n");
		printf("Please Enter currect User Id And Password \n");
		printf("---------------------------------------------------------------------------------\n");
		login();
	}
	
    
	getch();
	
}

//------------------------------definations of functions---------------------------------------------
void login()
{
	FILE *fp;
	fp=fopen("login.txt","r");
	char username[20],userpassword[20],un[20],up[20];
	fscanf(fp,"%s%s",username,userpassword);
	printf("Enter The User Name:\n");
	gets(un);
	printf("Enter The Password:\n");
	gets(up);
	
	if((strcmp(username,un)==0)&&(strcmp(userpassword,up)==0))
	{
//		printf("Login Successfully\n");
		printf("Welcome---------------------------------->%s<----------------------------------\n",un);
		home();
	}
	else
	{
		printf("Please Enter currect User Id And Password \n");
	}
}

void home(){
	progress();
	printf("------------------->Welcome To The  Restaurant<----------------------------------\n");
	printf(" 1 .Veg\n");
	printf(" 2 .Non Veg\n");
	printf(" 3 .Breakfast\n");
	printf(" 4 .Drinks\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Enter Your Choice What You Want\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("You Selected Veg\n");
		veg();
		break;
		case 2:printf("You Selected NonVeg\n");
	    Nonveg();
		break;
		case 3:printf("You Selected Breakfast\n");
		Breakfast();
		break;
		case 4:printf("You Selected Drinks\n");
		drinks();
		break;
		default:printf("You Selected Wrong Choice\nPlease Entered Correct Choice\n");
		home();
		break;
	}
}

void veg()
{
	progress();
	printf("---------------------------------------------------------------------------------\n");
	printf(" 1 .Paneer Curry\n");
	printf(" 2 .Kadai Paneer\n");
	printf(" 3 .Daal Fry\n");
	printf(" 4 .Sev Bhaji\n");
	printf(" 5 .Roti\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want:\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("You Selected Paneer Curry\n");
		orderConfirm();
		break;
		case 2:printf("You Selected Kadai Paneer\n");
		orderConfirm();
		break;
		case 3:printf("You Selected Daal Fry\n");
		orderConfirm();
		break;
		case 4:printf("You Selected Sev Bhaji\n");
		orderConfirm();
		break;
		case 5:printf("You Selected Roti\n");
		orderConfirm();
		break;
		default:printf("You Selected Wrong Choice\nPlease Entered Correct Choice\n");
		veg();
		break;
	}
}

void Nonveg()
{
	progress();
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want\n");
	printf(" 1 .Chickan Curry\n");
	printf(" 2 .Chickan Mashala\n");
	printf(" 3 .Fish curry\n");
	printf(" 4 .Fish Fry\n");
	printf(" 5 .Roti\n");
	printf(" 6 .Chawal\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want:\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("You Selected Chickan Curry\n");
		orderConfirm();
		break;
		case 2:printf("You Selected Chickan Mashala\n");
		orderConfirm();
		break;
		case 3:printf("You Selected Fish curry\n");
		orderConfirm();
		break;
		case 4:printf("You Selected Fish Fry\n");
		orderConfirm();
		break;
		case 5:printf("You Selected Roti\n");
		orderConfirm();
		break;
		case 6:printf("You Selected Chawal\n");
		orderConfirm();
		break;
		default:printf("You Selected Wrong Choice\nPlease Entered Correct Choice\n");
		Nonveg();
		break;
	}
}

void Breakfast()
{
	progress();
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want\n");
	printf(" 1 .Poha Sev\n");
	printf(" 2 .Poha Sev Jalabi\n");
	printf(" 3 .Samosa\n");
	printf(" 4 .Cachori\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want:\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("You Selected Poha\n");
		orderConfirm();
		break;
		case 2:printf("You Selected Poha Sev Jalabi\n");
		orderConfirm();
		break;
		case 3:printf("You Selected Samosa\n");
		orderConfirm();
		break;
		case 4:printf("You Selected Cachori\n");
		orderConfirm();
		break;
		default:printf("You Selected Wrong Choice\nPlease Entered Correct Choice\n");
		Breakfast();
		break;
	}
}

void drinks()
{
	progress();
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want\n");
	printf(" 1 .Normal Water\n");
	printf(" 2 .Child Water\n");
	printf(" 3 .Pepsi\n");
	printf(" 4 .Juice\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Select The Option Which You Want:\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("You Selected Normal Water\n");
		orderConfirm();
		break;
		case 2:printf("You Selected Child Water\n");
		orderConfirm();
		break;
		case 3:printf("You Selected Pepsi\n");
		orderConfirm();
		break;
		case 4:printf("You Selected Juice\n");
		orderConfirm();
		break;
		default:printf("You Selected Wrong Choice\nPlease Entered Correct Choice\n");
		drinks();
		break;
	}
}

void orderConfirm()
{
	progress();
	printf("---------------------------------------------------------------------------------\n");
	printf("Confirm Your Oder Just Click Please\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("1.Yes\n");
	printf("2.No\n");
	
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Your Order Is Successfull On The Way\n");
	    addSomthing();
		break;
		case 2:printf("Sorry! Canceled Your Order\n");
		break;
	    default:printf("You Entered Wrong Choice\nPlease Entered Correct Choice\n");
	    orderConfirm();
		break;
	}
	
}

void addSomthing()
{
	progress();
	printf("---------------------------------------------------------------------------------\n");
	printf("Do You Want To Add Somthing Else!\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("1. Yes\n");
	printf("2. No\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	    home();
	    break;
        veg();
        break;
        Nonveg();
        break;
        drinks();
        break;
        Breakfast();
		break;
		case 2: printf("Iteam Added Successfully \n");
		printf("---------------------------------->Visit Again<----------------------------------");
		break;
		default:printf("You Entered Wrong Choice\nPlease Entered Correct Choice\n");
		addSomthing();
		break;
	}
		
}

void progress()
{
		int wait;
	
				for(wait=0;wait<=100000;wait++)
				{
						printf("\rIn progress : %d",wait/1000);

				}
				printf("\n");
	
	
	
}

