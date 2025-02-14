#include<stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")

#define bgWhite "\e[47;1m"

#define fRed "\e[31;1m"
#define fCyan "\e[36m"
#define fMagenta "\e[35;1m"
#define fYellow "\e[33m"

#define reset "\e[0m"

void bgcolor(char a[]);  
void fcolor(char a[]);
void displaymenu();
void displayfood();
void displaydrinks();
void displaydessert();
void greetings();
void goodbye();
void askchc();
void tryagn();
void askqty();
void invldinpt();
void grtr15();
void YNyn();
void anyelse();
void wntRct();
void wntPrgrm();
void wntMenu();

int main(){
    char program; // choice kung gusto nya gamitin ulit yung program

    do{
        char menu; // choice kung gusto nya makita menu
        char wntresibo; // choice kung gusto nya ng resibo
        char order[12][40] = {"Pork sisig-----------125.50",    // para ma print out resibo
                            "Dinuguan--------------40.00",
                            "Caldereta------------140.25",
                            "Rice------------------20.00",
                            "Coke------------------16.50",
                            "H2O(mineral)----------20.00",
                            "Orange soda-----------25.75",
                            "Fruit Juice-----------35.00",
                            "Iced tea--------------22.00",
                            "Coffe Jelly-----------30.25",
                            "Graham float----------57.35",
                            "Halo-Halo-------------80.00"};

        double price[12] = {125.50, 40.00, 140.25, 20.00,       // array para d nakaklito sa dulo ng nested
                            16.50, 20.00, 25.75, 35.00,
                            22.00, 30.25, 57.35, 80.00};

        int ttlqty[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};  // para makuha lahat ng total tmpqty
        double ttlprice[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // para makuha lahat ng tmpprice
        double ovrlprice = 0; // total lahat ng ttlprice
        int ovrlqty = 0; // total lahat ng ttlqty

        double payment; //bayad ng costumer
        double change; //sukli ng costumer

        greetings();
        getch();
        wntMenu();
        scanf(" %s", &menu);
        while (menu!='y'&&menu!='Y'&&menu!='n'&&menu!='N')
        {
            YNyn();
            getch();
            wntMenu();
            scanf(" %s", &menu);
        }
        if (menu == 'y'||menu=='Y')
        {
            while(menu!='n'&&menu!='N')
            {
                int tmpqty[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //dito ko nilagay para mag reset ng 0
                double tmpprice[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //same reason                
                int chc_menu, chc_drinks=0, chc_food=0, chc_dessert=0;   //  sulution ko sa bug:
                menu='b';// para mag excecute yung while loop 

                displaymenu();
                askchc();
                scanf("%d", &chc_menu);
                
                if (chc_menu==1)
                {
                    do{                        
                        displayfood();
                        askchc();
                        scanf("%d", &chc_food);
                                                
                        if (chc_food==1)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[0]);
                                if (tmpqty[0]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[0]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[0]>-1 && tmpqty[0]<16)
                                {
                                    tmpprice[0] = price[0]*tmpqty[0];
                                }
                            } while (tmpqty[0]<0 || tmpqty[0]>15);                            
                        }
                        else if (chc_food==2)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[1]);
                                if (tmpqty[1]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[1]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[1]>-1 && tmpqty[1]<16)
                                {
                                    tmpprice[1] = price[1]*tmpqty[1];
                                }
                            } while (tmpqty[1]<0 || tmpqty[1]>15);
                        }
                        else if (chc_food==3)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[2]);
                                if (tmpqty[2]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[2]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[2]>-1 && tmpqty[2]<16)
                                {
                                    tmpprice[2] = price[2]*tmpqty[2];
                                }
                            } while (tmpqty[2]<0 || tmpqty[2]>15);                        
                        }
                        else if (chc_food==4)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[3]);
                                if (tmpqty[3]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[3]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[3]>-1 && tmpqty[3]<16)
                                {
                                    tmpprice[3] = price[3]*tmpqty[3];
                                }
                            } while (tmpqty[3]<0 || tmpqty[3]>15);
                        }
                        else if (chc_food!=0)
                        {
                            invldinpt();
                            getch();
                        }                        
                    } while (chc_food<0 || chc_food>4);    
                }
                else if (chc_menu==2)
                {
                    do{
                        displaydrinks();
                        askchc();
                        scanf("%d", &chc_drinks);

                        if (chc_drinks==1)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[4]);
                                if (tmpqty[4]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[4]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[4]>-1 && tmpqty[4]<16)
                                {
                                    tmpprice[4] = price[4]*tmpqty[4];
                                }
                            } while (tmpqty[4]<0 || tmpqty[4]>15);                        
                        }
                        else if (chc_drinks==2)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[5]);
                                if (tmpqty[5]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[5]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[5]>-1 && tmpqty[5]<16)
                                {
                                    tmpprice[5] = price[5]*tmpqty[5];
                                }
                            } while (tmpqty[5]<0 || tmpqty[5]>15);                        
                        }
                        else if (chc_drinks==3)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[6]);
                                if (tmpqty[6]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[6]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[6]>-1 && tmpqty[6]<16)
                                {
                                    tmpprice[6] = price[6]*tmpqty[6];
                                }
                            } while (tmpqty[6]<0 || tmpqty[6]>15);
                        }
                        else if (chc_drinks==4)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[7]);
                                if (tmpqty[7]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[7]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[7]>-1 && tmpqty[7]<16)
                                {
                                    tmpprice[7] = price[7]*tmpqty[7];
                                }
                            } while (tmpqty[7]<0 || tmpqty[7]>15);                       
                        }
                        else if (chc_drinks==5)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[8]);
                                if (tmpqty[8]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[8]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[8]>-1 && tmpqty[8]<16)
                                {
                                    tmpprice[8] = price[8]*tmpqty[8];
                                }
                            } while (tmpqty[8]<0 || tmpqty[8]>15);
                        }
                        else if (chc_drinks!=0)
                        {
                            invldinpt();
                            getch();
                        }                                                
                    } while (chc_drinks<0 || chc_drinks>5);    
                }
                else if (chc_menu==3)
                {
                    do{
                        displaydessert();
                        askchc();
                        scanf("%d", &chc_dessert);
                       
                        if(chc_dessert==1)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[9]);
                                if (tmpqty[9]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[9]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[9]>-1 && tmpqty[9]<16)
                                {
                                    tmpprice[9] = price[9]*tmpqty[9];
                                }
                            } while (tmpqty[9]<0 || tmpqty[9]>15);                        
                        }
                        else if (chc_dessert==2)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[10]);
                                if (tmpqty[10]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[10]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[10]>-1 && tmpqty[10]<16)
                                {
                                    tmpprice[10] = price[10]*tmpqty[10];
                                }
                            } while (tmpqty[10]<0 || tmpqty[10]>15);
                        }
                        else if (chc_dessert==3)
                        {
                            do{
                                askqty();
                                scanf("%d", &tmpqty[11]);
                                if (tmpqty[11]<0)
                                {
                                    invldinpt();
                                    getch();
                                }
                                else if (tmpqty[11]>15)
                                {
                                    grtr15();
                                    getch();
                                }                                
                                else if(tmpqty[11]>-1 && tmpqty[11]<16)
                                {
                                    tmpprice[11] = price[11]*tmpqty[11];
                                }
                            } while (tmpqty[11]<0 || tmpqty[11]>15);
                        }
                        else if (chc_dessert!=0)
                        {
                            invldinpt();
                            getch();
                        }                        
                    } while (chc_dessert<0 || chc_dessert>3);
                }
                else
                {   
                    while (menu!='y'&&menu!='Y'&&menu!='n'&&menu!='N')
                    {
                        YNyn(); 
                        tryagn();
                        scanf(" %s", &menu);    
                    }    
                }

                for (int i = 0; i < 12; i++)   // loop para makuha yun total quantity
                {
                    ttlqty[i] += tmpqty[i];
                }
                for (int i = 0; i < 12; i++)   // loop para makuha yung total price
                {
                    ttlprice[i] += tmpprice[i];
                }
                                                                
                if (chc_food!=0 || chc_drinks!=0 || chc_dessert!=0)  // not equal yung mga choice dito para hindi mag eexecute pag nagkaron ng value yung isang choice
                {
                    anyelse();
                    scanf(" %s", &menu);
                    while (menu!='y'&&menu!='Y'&&menu!='n'&&menu!='N')
                    {
                        YNyn();
                        getch();
                        anyelse();
                        scanf(" %s", &menu);
                    }           
                }                        
            }  

            //code here pagtapos nag no sa is there anything else;
            //code here pag nag no sa you want see menu?

            for (int i = 0; i < 12; i++) // loop para makuha yung ovrlprice
            {
                ovrlprice += ttlprice[i];
            }
            for (int i = 0; i < 12; i++) // loop para makuha yung ovrlqty
            {
                ovrlqty += ttlqty[i];
            }
                        
            if (ovrlprice!=0) // para magskip to pag walang inorder yung user
            {
                do{
                    clrscr();
                    printf("\n\tPhp.%.2lf is the amount of all your order", ovrlprice);
                    printf("\n\tEnter your Payment: ");
                    scanf("%lf", &payment);
                    change = payment - ovrlprice;

                    if(payment<ovrlprice) // kung kulang yung bayad ni user
                    {
                        printf("\n\tSir kulang bayad nyo, ulet");
                        getch();
                    }
                } while (payment<ovrlprice);
                
                wntRct();
                scanf(" %s", &wntresibo);
                while (wntresibo!='y'&&wntresibo!='Y'&&wntresibo!='n'&&wntresibo!='N')
                {
                    YNyn();
                    getch();
                    wntRct();
                    scanf(" %s", &wntresibo);
                }
                

                if (wntresibo =='y'||wntresibo=='Y')
                {
                    // code sa resibo
                    clrscr();
                    fcolor(fMagenta);
                    bgcolor(bgWhite);

                    printf("\n\n");
                    printf("\n\t                                               ");                                   
                    printf("\n\t        ===============================        ");    
                    printf("\n\t        |      KAINAN NI JOKTAN       |        ");        
                    printf("\n\t        |       JOKTAN'S EATERY       |        ");    
                    printf("\n\t        ===============================        ");    
                    printf("\n\t                                               ");
                    printf("\n\t                                               ");                                      
                    printf("\n\t                R E C E I P T                  ");                                       
                    printf("\n\t===============================================");
                    printf("\n\t Qnty:   Item(s):            Price:    Total:  \n\t");
                    for (int i = 0; i < 12; i++)
                    {
                        if(ttlqty[i]==0)
                        {
                            continue;
                        }
                        else
                        {   
                            if (ttlqty[i]>9)
                            {
                                printf("  %d", ttlqty[i]);
                            }
                            else
                            {
                                printf("  %d ", ttlqty[i]);
                            }
                            printf("    %s", order[i]);
                            if(ttlprice[i]>99){
                                printf("    %.2lf  ", ttlprice[i]); 
                            }
                            else if (ttlprice[i]>999)
                            {
                                printf("   %.2lf  ", ttlprice[i]);
                            }
                            else 
                            {
                                printf("     %.2lf  ", ttlprice[i]);
                            }
                            printf("\n\t");                                
                        }
                    }
                    printf("                                               ");
                    printf("\n\t===============================================");
                    if (ovrlprice>999)
                    {
                        printf("\n\t  T O T A L  A M O U N T:         Php.%.2lf  ", ovrlprice);
                    }
                    else if (ovrlprice>99)
                    {
                        printf("\n\t  T O T A L  A M O U N T:          Php.%.2lf  ", ovrlprice);
                    }
                    else
                    {
                        printf("\n\t  T O T A L  A M O U N T:           Php.%.2lf  ", ovrlprice);
                    }
                    if (ovrlqty>9)
                    {
                        printf("\n\t  T O T A L  I T E M:                  %d      ", ovrlqty);
                    }
                    else
                    {
                        printf("\n\t  T O T A L  I T E M:                   %d      ", ovrlqty);
                    }

                    if (payment>999)
                    {
                        printf("\n\t  P A Y M E N T:                  Php.%.2lf  ", payment);
                    }
                    else if (payment>99)
                    {
                        printf("\n\t  P A Y M E N T:                   Php.%.2lf  ", payment);
                    }
                    else
                    {
                        printf("\n\t  P A Y M E N T:                    Php.%.2lf  ", payment); 
                    }

                    if (change>999)
                    {
                        printf("\n\t  C H A N G E:                    Php.%.2lf  ", change);
                    }
                    else if (change>99)
                    {
                        printf("\n\t  C H A N G E:                     Php.%.2lf  ", change);
                    }
                    else if (change<10)
                    {
                        printf("\n\t  C H A N G E:                       Php.%.2lf  ", change);
                    }
                    else
                    {
                        printf("\n\t  C H A N G E:                      Php.%.2lf  ", change);
                    }                                        
                    printf("\n\t===============================================");
                    printf("\n\t                                               ");                                        
                    printf("\n\t   Served by: JOKTAN                           ");
                    printf("\n\t                                               ");
                    printf("\n\t                T H A N K  Y O U,              ");
                    printf("\n\t        P L E A S E  C O M E  A G A I N        ");
                    printf("\n\t                                               ");
                    printf("\n\t        ===============================        ");
                    printf("\n\t        |      KAINAN NI JOKTAN       |        ");
                    printf("\n\t        |       JOKTAN'S EATERY       |        ");
                    printf("\n\t        ===============================        ");
                    printf("\n\t                                               ");
                    bgcolor(reset);
                }
                else
                {
                    printf("\n\tHere is your change: Php.%.2lf", change);
                }
            }    
        }
        
        // code here if in "no" in you want see  menu? 
        // and after receit 
        
        printf("\n\n\tThank you for coming");
        wntPrgrm();  
        scanf(" %s", &program);
        while (program!='y'&&program!='Y'&&program!='n'&&program!='N')
        {
            YNyn();
            getch();
            wntPrgrm();
            scanf(" %s", &program);
        }
    } while (program =='y');    
    
    goodbye();
    
    return 0;
}

void displaymenu()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fRed);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t       N|            MENU             |N       ");
    printf("\n\t       N|                             |N       ");
    printf("\n\t       N|         [1] FOOD            |N       ");
    printf("\n\t       N|         [2] DRINKS          |N       ");
    printf("\n\t       N|         [3] DESSERT         |N       ");
    printf("\n\t       N|                             |N       ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);

}
void displayfood()
{
    clrscr();
    printf("\n\n");
    printf("\t================================================\n");
    printf("\t\tAVAILABLE FOOD\n");
    printf("\n\t\t[1] Pork sisig-----------125.50");
    printf("\n\t\t[2] Dinuguan--------------40.00");
    printf("\n\t\t[3] Caldereta------------140.25");
    printf("\n\t\t[4] Rice------------------20.00");
    printf("\n\n\t\t[0] Back to \"MENU\"");
    printf("\n\n\t================================================");
    printf("\n\n");
}
void displaydrinks()
{
    clrscr();
    printf("\n\n");
    printf("\t===============================\n");
    printf("\t\tAVAILABLE DRINKS\n");
    printf("\n\t[1] Coke------------------16.50");
    printf("\n\t[2] H2O(mineral)----------20.00");
    printf("\n\t[3] Orange soda-----------25.75");
    printf("\n\t[4] Fruit Juice-----------35.00");
    printf("\n\t[5] Iced tea--------------22.00");
    printf("\n\n\t[0] Back to \"MENU\"");
    printf("\n\n\t===============================");
    printf("\n\n");
}
void displaydessert()
{
    clrscr();
    printf("\n\n");
    printf("\t\t===============================\n");
    printf("\t\t\tAVAILABLE DESSERT\n");
    printf("\n\t\t[1] Coffe Jelly-----------30.25");
    printf("\n\t\t[2] Graham float----------57.35");
    printf("\n\t\t[3] Halo-Halo-------------80.00");
    printf("\n\n\t\t[0] Back to \"MENU\"");
    printf("\n\n\t\t===============================");
    printf("\n\n");
}
void greetings()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fRed);
    
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |      KAINAN NI JOKTAN       |        ");
    printf("\n\t        |       JOKTAN'S EATERY       |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");    
    bgcolor(reset);
    fcolor(fCyan);
    printf("\n\t                                               ");
    getch();
    printf("\n\t          Welcome to Joktan's Eatery!");
    getch();
    printf("          ");
    printf("\n\t      We're glad you made it here,");
    getch();
    printf(" We know you ");
    printf("\n\t  have been looking for a place that serves up ");
    printf("\n\t  the best food in town,");
    getch();
    printf(" and we want to let you");
    printf("\n\t  know that we're here for you.");
    getch();
    printf(" Come on in and ");
    printf("\n\t  let us show you what Joktan's Eatery has to  ");
    printf("\n\t  offer.                                       ");  
    bgcolor(reset);
}
void goodbye()
{
    clrscr();
    printf("\n\n");
    printf("\t===============================\n");
    printf("\t|    THANK YOU FOR USING      |");
    printf("\n\t|        THE PROGRAM          |");
    printf("\n\t===============================");
    printf("\n\n");
}
void askchc()
{
    fcolor(fYellow);
    printf("\n\n");
    printf("\n\tWhat's your NUMBER of choice?: ");
    bgcolor(reset);
}
void tryagn()
{
    printf("\n\tNot in the menu, try again? ");
}
void askqty()
{
    printf("\n\tHow many?: ");
}
void invldinpt() 
{
    printf("\n\tInvalid input!\n\tTry again!");
}
void grtr15()
{
    printf("\n\tSir 15 lang available, order nalng ulit kayo mamaya\n");
}
void YNyn()
{
    printf("\n\tPlease select y/Y for yes or n/N for no only");
}
void anyelse()
{
    printf("\n\tIs there anything else?: ");
}
void wntRct()
{
    printf("\n\tDo you want the Receipt?(y/n): ");
}
void wntPrgrm()
{
    printf("\n\tDo you want to use the program again?: ");
}
void wntMenu()
{
    fcolor(fYellow);
    printf("\n\n");
    printf("\n\tWould you like to see the MENU?: ");   
    bgcolor(reset); 
}
void bgcolor(char a[])
{    
    printf("%s",a);       
}
void fcolor(char a[])
{
    printf("%s",a);
}