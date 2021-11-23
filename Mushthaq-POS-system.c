/*Billing machine to calculate the total cost 
with the given scenarios*/

//header standard library
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void bye (void);
void FAQ (void);
void barline (void);
float toTal (float total);

//defining gst to be 7%
#define GST 1.07
void main()
{
    // declaration
    int quantity;
    float total    = 0.00;
    float subprice = 0.00;
    char repli;
    int item,ans;
    float totalA,p1,p2;
    const char product[9][150]={"Milo","Americano","Cappuccino","Mocha","Expresso","Latte","Frappuccino","Mcflurry","Water"};
    const float price[9]={1.20,3.50,3.00,2.50,3.20,4.00,5.00,2.80,0.80};
    
   
    
    
    //declaration for payment type//
    int cash       = 1;
    int mastercard = 2;
    int nets       = 3;
    int amex       = 4;
    float total1;
      
    //declaration for membership//
    char reply ;
    
    //declaration for animation//
    int x; double y;
    char text1[]=   "\n\n \t\t\t Welcome to Mush cafe";
    char text2[]=   "\n\n \t\t\t by ";
    char text3[]=   "\n\n \t\t\t Mushthaq";
    
    
    
    //output of animation
  
    printf("\n\n");
    for(x=0;text1[x]!=NULL;x++)
    {
        printf("%c",text1[x]);
        for(y=0;y<=6666666; y++);
        {
        }
    }
            printf("\n\n");
            for(x=0;text2[x]!=NULL; x++)
            {
                printf("%c",text2[x]);
                for(y=0; y<=7777777;y++);
            }
            {
            }
            printf("\n\n");
            for(x=0;text3[x]!=NULL; x++)
            {
                printf("%c",text3[x]);
                for(y=0;y<=8888888;y++);
                {
                }
            }
        
           
       
    
   
           
             {
      
                 barline();
                 system("start C:\\AllyLocal\\music.mp3");
    printf("\n\n\n\t\tWELCOME TO THE MENU PAGE\n\n\n");
    printf("1.Milo       -- $1.20            6.Latte       -- $4.00\n");
    printf("2.Americano  -- $3.50            7.Frappuccino -- $5.00\n");
    printf("3.Cappuccino -- $3.00            8.Mcflurry    -- $2.80\n");
    printf("4.Mocha      -- $2.50            9.Water       -- $0.80\n");
    printf("5.Expresso   -- $3.20             \n ");
    printf("\n");
    
}
    
    // welcoming//
    
        barline();
    
        printf("\n\n\n Billing Software for MUSH'S CAFE\n");
    
    
       barline();
    
       // user input//
      
      do
      { 
        
        printf("\n\nSelect the Product number:");
        scanf("%d",&item);
        
     
        

       switch(item)
       {
         case 1: 
           printf("\nSelect the quantity :");
           scanf("%d",&quantity);
           printf("\n%s\n",product[item-1]);
           printf("%.2f",price[item-1]);
           subprice = quantity*price[item-1];
           printf("\nprice of %s is $%.2f",product[item-1],subprice);
           total = (total+subprice)*GST;
           printf("\nEnter 0 to proceed with payment\n");
           
           break;
           
         case 2:
            printf("\nSelect the quantity :");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 proceed with payment\n");
            break;
            
          case 3:
            printf("\nSelect the quantity : ");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
            
          case 4:
            printf("\nSelect the quantity : ");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
            
          case 5:
            printf("\nSelect the quantity : ");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
            
          case 6:
            printf("\nSelect the quantity :");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
            
          case 7:
            printf("\nSelect the quantity :");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
            
          case 8:
            printf("\nSelect the quantity :");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
            
          case 9:
            printf("\nSelect the quantity :");
            scanf("%d",&quantity);
            printf("\n%s\n",product[item-1]);
            printf("%.2f",price[item-1]);
            subprice = quantity*price[item-1];
            printf("\nprice of %s is $%.2f",product[item-1],subprice);
            total = (total+subprice)*GST;
            printf("\nEnter 0 to proceed with payment\n");
            break;
           
            printf("TOTAL WILL BE = $%.2f",total);
           break;
           
           
        } 
       
    }
    
  while(item!=0 || item<0) ;
 

  printf("Total(inclusive of GST) will be $%.2f", total);
       
    printf("\n\n\nDo you have membership? (Y/N) \n");
    fflush(stdin);// to clear the keyboard characters in order to prompt the user to input Y or N
    scanf("%c",&reply);
    
    //membership
    
    
    if ( reply=='Y' || reply=='y')
    {
        printf("\nThank You ! you will receive more membership points and redeem gifts with it!\n");
        int x1;
        x1 = srand(x1)%10;
        printf("Congratulations! Your lucky number is %d\n",x1);
        if (x1==0)
            printf("SIKE!!!, No prizes! UNLUCKY\n");
        if (x1==1)
            printf("you have won a free Caramel Frappe!\n");
        if (x1==2)
            printf("You have won a $5 voucher!\n");
        if (x1==3)
            printf("You have won a freeflow ticket for 24 hours!\n");
        if (x1==4)
            printf("You have won $10 Mushcafe voucher!\n");
        if (x1==5)
            printf("You receive a bonus membership points of 300!\n");
        if (x1==6)
            printf("You are selected as our favourite customer and will be feautered in our insta page!\n");
        if (x1==7)
            printf("You can have a free mocha!\n");
        if (x1==8)
            printf("You won a free movie ticket to toy story 5!\n");
        if (x1==9)
            printf("Have a wonderful day!\n");
        
        getch();
    }
    if ( reply=='N' || reply=='n')
    {
        printf("Sorry, You can't redeem gifts for free\n\n");
        printf("Do you wish to be a member[Y/N] ?\n");
        scanf("%s",&repli);
        fflush(stdin);
        if (repli=='Y' || repli=='y')
        {
            printf("Please pay $5 to enjoy gifts for every purchase!");
            p1 = toTal(total);
            printf("You have to pay $%.2f",p1);
           
        }
    }
        
        

    //checkout
        barline();
        printf("\t\t\n These are the payment methods ");
        printf("\n1.cash\n2.mastercard\n3.nets\n4.amex \n");
        printf("Please enter your payment method: ");
        scanf("%d",&cash,&mastercard,&nets,&amex);
    
   
        if (1 == cash && repli=='y')
        {
            printf("\nTotal would be $%.2f\n",p1);
            barline();
            bye();
        } 
        
        
        else if(1==cash && repli=='N')
        {
            printf("\nTotal would be $%.2f\n",total);
            barline();
            bye();
        }
        
        
        else if (1==cash && reply=='Y')
        {
            printf("\n Total would be $%.2f\n",total);
            barline();
            bye();
        }
        
        
        else if (mastercard ==2 && repli=='Y')
            {
            printf("You have 5%% off the whole purchase\n");
        total1 = total*(95.0/100);
        p2     = total1+5;
        printf("\nTotal would be $%.2f\n",p2);
        barline();
        bye();
            }
    
    
        else if (2== mastercard && repli =='N')
            {
        printf("You have 5%% off the whole purchase\n");
        total1 = total*(95.0/100);
        printf("\nTotal would be %.2f",total1);
        barline();
        bye();
            }
    
    
        else if (2==mastercard && reply =='Y')
            {
        printf("You have 5%% off the whole purchase\n");
        total1 = total*(95.0/100);
        printf("\nTotal would be $%.2f\n",total1);
        barline();
        bye();
            }
    
    
        else if (3 == nets && repli=='Y')
            {   
               printf("You have 5%% off the whole purchase\n");
            total1 = total*(95.0/100);
            p2     = total1+5;
            printf("\nTotal would be $%.2f\n",p2);
            barline();
            bye();
            }
        
        
        else if (3 == nets && repli =='N')
            {
            printf("You have 5%% off the whole purchase");
            total1 = total*(95.0/100);
            printf("\nTotal would be $%.2f\n",total1);
            barline();
            bye();   
            }
        
        
        else if (3==nets && reply=='Y')
            {
            printf("You have 5%% off the whole purchase");
            total1 = total*(95.0/100);
            printf("\nTotal would be $%.2f\n",total1);
            barline();
            bye();
            }
        
        
        else if (4 == amex && repli =='N')
            {
            printf("You have 5%% off the whole purchase");
            total1 = total*(90.0/100);
            printf("\nTotal would be $%.2f\n",total1);
            barline();
            bye();
            }
        
        
        else if (4 == amex && repli=='Y')
        { 
        printf("You have 10%% off the whole purchase");
        total1 = total*(90.0/100);
        p2     = total1+5;
        printf("\nTotal would be $%.2f\n",p2);
        barline();
        bye();
        }
    
    
        else if (4==amex && reply=='Y')
        {
        printf("You have 10%% off the whole purchase\n");
        total1 = total*(90.0/100);
        printf("\nTotal would be $%.2f\n",total1);
        barline();
        bye();
        }
   
    FAQ ();
}
void bye (void)
{
    
    printf("Wishing you to have a great day ahead!\n");
    printf("Do visit us again!");
}
void FAQ (void)
{
    printf("If you want to know more about our delivery, kindly contact this number: +65 9001 1009\n");
    printf("Please follow us on Instagram to get the latest updates and new arrivals!\n");
}
float toTal (float total)
{
    float t;
    t = total+5;
    return t;
}
void barline (void)
{
    printf("\n\n===================================\n");
}
