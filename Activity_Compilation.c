#include<stdio.h>                              //      GINAMIT KO LANG YUNG
#include<math.h>                               //       MATH.H PARA SA POWER FUNCTION

#define clrscr() printf("\e[1;1H\e[2J")        //   
#define bgWhite  "\e[47;1m"                    //       
#define fRed     "\e[31;1m"                    //      LINE 4 TO LINE 10
#define fCyan    "\e[36m"                      //      PARA SA MGA KULAY
#define fMagenta "\e[35;1m"                    //      AT DESIGN
#define fYellow  "\e[33m"                      //
#define reset    "\e[0m"                       // 

int Array[10];                                 //GLOBAL VARIABLE, PARA GUMANA SA MAIN FUNCTION AT SA SELF MADE 

void bgcolor(char a[]);                        //  
void fcolor(char a[]);                         //      LINE 14 TO LINE 49:
void Introduction();                           //           PROTOTYPE FUNCTON PARA MALINIS 
void Closing();                                //           TIGNAN 
void Mainmenu();                               //       LINE 14 T0 15:
void Submenu_A();                              //           PARA MADALI LANG MAG DESIGN
void Submenu_B();                              //       LINE 16 TO 40:
void Submenu_C();                              //           MGA DESIGN PARA MADALI LANG MAG EDIT 
void Submenu_D();                              //           HINDI NA MAHIHIRAPAN MAG HANAP 
void Submenu_E();                              //           SA MAIN FUCNTION        
void Ask_Choice();                             //       LINE 41 TO 49:
void Ask_TryAgain();                           //           DITO KO NILAGAY YUNG MGA SOLUTION NA 
void ErrorCatcher();                           //           MAHABA PARA HINDI MAGULO SA MAIN FUNCTION
void Even_or_Odd_Design();                     // 
void Negative_or_Positive_Design();            //
void Leapyear_or_Not_Design();                 //       
void Fibonacci_Design();                       //
void Squared_Sequence_Design();                //
void Square_Maker_Design();                    //
void List_Even_or_Odd_Design();                //
void Highest_Value_Design();                   //
void Area_of_Square_Design();                  //
void Area_of_Triangle_Design();                //
void Area_of_Circle_Design();                  //
void Factorial_Design();                       //
void Power_Design();                           //
void Converter_Design();                       //
void Even_or_Odd(int num);                     //
void Negative_or_Positive(double num);         //
void Leapyear_or_Not(int year);                //
void Fibonacci(int term);                      //
void Squared_Sequence(int sequence);           //
void Square_Maker(int height, int length);     //
void List_Even_or_Odd();                       //
void Highest_Value();                          //
int Factorial(int num);                        //

int main(){

    Introduction();

    start:
    char chc_main, chc_A, chc_B, chc_C, chc_D, chc_E, chc_yn;

    Mainmenu();
    scanf("%s", &chc_main);    
    
    switch (chc_main)
    {
    case 'A':

        case_A:
        Submenu_A();
        scanf("%s", &chc_A);

        if (chc_A=='A')
        {   
            do
            {
                int num;
                Even_or_Odd_Design();
                scanf("%d", &num);
                Even_or_Odd(num);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');
        }
        else if (chc_A=='B')
        {
            do
            {
                double num;
                Negative_or_Positive_Design();
                scanf("%lf", &num);
                Negative_or_Positive(num);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');    
        }
        else if (chc_A=='C')
        {
            do
            {
                int year;
                Leapyear_or_Not_Design();
                scanf("%d", &year);
                Leapyear_or_Not(year);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');
        }
        else if (chc_A=='Z')
        {
            goto start;
        }
        else
        {
            ErrorCatcher();   
        }

        goto case_A;

    case 'B':

        case_B:
        Submenu_B();
        scanf("%s", &chc_B);

        if (chc_B=='A')
        {
            do
            {
                int num;
                Fibonacci_Design();
                scanf("%d", &num);
                Fibonacci(num);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');
        }
        else if (chc_B=='B')
        {
            do
            {
                int num;
                Squared_Sequence_Design();
                scanf("%d", &num);
                Squared_Sequence(num);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');            
        }
        else if (chc_B=='C')
        {
            do
            {   
                int num1, num2;
                Square_Maker_Design();
                scanf("%d",&num1);
                fcolor(fYellow);
                printf("\t\t      Enter length: ");
                bgcolor(reset); 
                scanf("%d",&num2);
                Square_Maker(num1,num2);   
                
                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');
        }
        else if (chc_B=='Z')
        {
            goto start;
        }
        else
        {
            ErrorCatcher();
        }
        
        goto case_B;

    case 'C':

        case_C:
        Submenu_C();
        scanf("%s", &chc_C);

        if (chc_C=='A')
        {
            do
            {
                List_Even_or_Odd_Design();
                for (int i = 0; i < 10; i++)
                {
                    scanf("%d", &Array[i]);
                }
                List_Even_or_Odd();
                
                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }
            } while (chc_yn=='Y');        
        }
        else if (chc_C=='B')
        {
            do
            {
                Highest_Value_Design();
                for (int i = 0; i < 10; i++)
                {
                    scanf("%d", &Array[i]);
                }
                Highest_Value();
                

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }        
        else if (chc_C=='Z')
        {
            goto start;
        }
        else
        {
            ErrorCatcher();
        }
        
        goto case_C;

    case 'D':

        case_D:
        Submenu_D();
        scanf("%s", &chc_D);

        if (chc_D=='A')
        {
            do
            {
                
                double num;
                Area_of_Square_Design();
                scanf("%lf", &num);
                fcolor(fCyan);
                printf("\n\t\t   %.2lf is the area of square", num*num);
                
                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');            
        }
        else if (chc_D=='B')
        {
            do
            {
                double num1, num2;
                Area_of_Triangle_Design();
                scanf("%lf", &num1);
                fcolor(fYellow);
                printf("\t\t\tEnter base: ");
                bgcolor(reset);
                scanf("%lf", &num2);
                fcolor(fCyan);
                printf("\n\t\t  %.2lf is the area of Triangle", num1*num2*0.5);
                
                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }
        else if (chc_D=='C')
        {
            do
            {
                double num;
                Area_of_Circle_Design();
                scanf("%lf", &num);
                fcolor(fCyan);
                printf("\n\t\t    %.2lf is the area of Circle", num*num*3.14);
                
                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }
        else if (chc_D=='D')
        {
            do
            {
                int num;
                Factorial_Design();
                scanf("%d", &num);
                fcolor(fCyan);
                printf("\n\t\t\t    %d! = %d",num, Factorial(num));
                
                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }
        else if (chc_D=='E')
        {
            do
            {
                double num1, num2;
                Power_Design();
                scanf("%lf", &num1);
                fcolor(fYellow);
                printf("\t\t\tEnter Exponent: ");
                bgcolor(reset);
                scanf("%lf", &num2);
                fcolor(fCyan);
                printf("\n\t\t      %.2lf^%.2lf = %.2lf", num1, num2, pow(num1,num2));

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');   
        }
        else if (chc_D=='Z')
        {
            goto start;
        }
        else
        {
            ErrorCatcher();
        }

        goto case_D;

    case 'E':

        case_E:
        Submenu_E();
        scanf("%s", &chc_E);

        if (chc_E=='A')
        {
            do
            {
                double num;
                Converter_Design();
                fcolor(fYellow);    
                printf("\n\n\t\t\tEnter Meter: ");
                bgcolor(reset);
                scanf("%lf", &num);
                fcolor(fCyan);
                printf("\n\t\t     %.2lf Meter = %.0lf cm", num, num*100);
                printf("\n\t\t     %.2lf Meter = %.0lf mm", num, num*1000);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');     
            
        }
        else if (chc_E=='B')
        {
            do
            {
                double num;
                Converter_Design();
                fcolor(fYellow);    
                printf("\n\n\t\t\tEnter Centimeter: ");
                bgcolor(reset);
                scanf("%lf", &num);
                fcolor(fCyan);
                printf("\n\t\t     %.2lf cm = %.2lf Meter", num, num/100);
                printf("\n\t\t     %.2lf cm = %.1lf mm", num, num*10);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');            
        }
        else if (chc_E=='C')
        {
            do
            {
                double num;
                Converter_Design();
                fcolor(fYellow);    
                printf("\n\n\t\t\tEnter Milimeter: ");
                bgcolor(reset);
                scanf("%lf", &num);
                fcolor(fCyan);
                printf("\n\t\t     %.2lf mm = %.4lf Meter", num, num/1000);
                printf("\n\t\t     %.2lf mm = %.3lf cm", num, num/10);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }
        else if (chc_E=='D')
        {
            do
            {
                int num;
                Converter_Design();
                fcolor(fYellow);    
                printf("\n\n\t\t\tEnter Hour: ");
                bgcolor(reset);
                scanf("%d", &num);
                fcolor(fCyan);
                printf("\n\t\t     %d hr = %d min", num, num*60);
                printf("\n\t\t     %d hr = %d sec", num, num*3600);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }
        else if (chc_E=='E')
        {
            do
            {
                int num;
                Converter_Design();
                fcolor(fYellow);    
                printf("\n\n\t\t\tEnter Minute: ");
                bgcolor(reset);
                scanf("%d", &num);
                fcolor(fCyan);

                printf("\n\t\t\t%dm = %dhr, %dm", num, (num*60)/3600, ((num*60)%3600)/60);

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');            
        }
        else if (chc_E=='F')
        {
            do
            {
                int num;
                Converter_Design();
                fcolor(fYellow);    
                printf("\n\n\t\t\tEnter Seconds: ");
                bgcolor(reset);
                scanf("%d", &num);

                fcolor(fCyan);
                printf("\n\t\t\t%ds = %dhr, %dm, %ds", num, num/3600, (num%3600)/60, (num%3600)%60);
            

                Ask_TryAgain();
                scanf("%s", &chc_yn);
                while (chc_yn!='Y' && chc_yn!='N')
                {
                    ErrorCatcher();
                    Ask_TryAgain();
                    scanf("%s", &chc_yn);   
                }

            } while (chc_yn=='Y');
        }
        else if (chc_E=='Z')
        {
            goto start;
        }
        else
        {
            ErrorCatcher();
        }

        goto case_E;
        
    case 'Z':

        Closing();
        break;    

    default:
        ErrorCatcher();
        goto start;
    }

    return 0;
}

void bgcolor(char a[])
{    
    printf("%s",a);       
}
void fcolor(char a[])
{
    printf("%s",a);
}

void Introduction()
{   
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t==============  W E L C O M E  ================");
    printf("\n\t                                               ");
    printf("\n\t We are the Group 9 and we will present a menu ");
    printf("\n\t  program that displays all the laboratory     ");
    printf("\n\t    activities from the first semsester        ");
    printf("\n\t                                               ");
    printf("\n\t================ G R O U P 9 ==================");
    printf("\n\t                                               ");
    printf("\n\t             |================|                ");
    printf("\n\t             |-----LEADER-----|                ");
    printf("\n\t             |     REBATE     |                ");
    printf("\n\t             |-----MEMBER-----|                ");
    printf("\n\t             |     AVILES     |                ");
    printf("\n\t             |     BUSIG      |                ");
    printf("\n\t             |    ESTREMOS    |                ");
    printf("\n\t             |     GECOS      |                ");
    printf("\n\t             |================|                ");
    printf("\n\t                                               ");
    printf("\n\t===============================================");
    printf("\n\t                                               ");
    printf("\n\t               PRESS ANY KEY TO                ");
    printf("\n\t                    CONTINUE                   ");
    bgcolor(reset);
    getch();
}
void Closing()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t================  E N D I N G  ================");
    printf("\n\t                                               ");
    printf("\n\t Thank you for using the program as we showcase");
    printf("\n\t    how each laboratory activity contributed   ");
    printf("\n\t          to our growth and development        ");
    printf("\n\t                  in learning                  ");
    printf("\n\t                 the C language                ");
    printf("\n\t                Until nxt time!                ");
    printf("\n\t                                               ");
    printf("\n\t===============================================");
    printf("\n\t                                               ");  
    bgcolor(reset);                                               
}

void Mainmenu()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |          MAIN MENU          |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |       [A] CONDITIONAL       |        ");
    printf("\n\t        |       [B] LOOPING           |        ");
    printf("\n\t        |       [C] ARRAY             |        ");
    printf("\n\t        |       [D] FUNCTION          |        ");
    printf("\n\t        |       [E] CONVERTER         |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |       [Z] Exit              |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    Ask_Choice();    
}
void Submenu_A()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |         CONDITIONAL         |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |  [A] EVEN OR ODD            |        ");
    printf("\n\t        |  [B] NEGATIVE OR POSITIVE   |        ");
    printf("\n\t        |  [C] LEAP YEAR OR NOT       |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |  [Z] BACK                   |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    Ask_Choice();
}
void Submenu_B()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |           LOOPING           |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |  [A] FIBONACHI              |        ");
    printf("\n\t        |  [B] SQUARED SEQUENCE       |        ");
    printf("\n\t        |  [C] SQUARE MAKER (SHAPE)   |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |  [Z] BACK                   |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    Ask_Choice();
}
void Submenu_C()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |            ARRAY            |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |  [A] LIST OF EVEN OR ODD    |        ");
    printf("\n\t        |  [B] HIGHEST VALUE          |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |  [Z] BACK                   |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    Ask_Choice();
}
void Submenu_D()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |          FUNCTION           |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |    [A] AREA OF SQUARE       |        ");
    printf("\n\t        |    [B] AREA OF TRIANGLE     |        ");
    printf("\n\t        |    [C] AREA OF CIRCLE       |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |    [D] FACTORIAL            |        ");
    printf("\n\t        |    [E] EXPONENT             |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |    [Z] BACK                 |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    Ask_Choice();
}
void Submenu_E()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t        |          CONVERTER          |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |      MEASUREMENT            |        ");
    printf("\n\t        |    [A] METER                |        ");    
    printf("\n\t        |    [B] CENTIMETER           |        ");    
    printf("\n\t        |    [C] MILIMETER            |        "); 
    printf("\n\t        |                             |        ");
    printf("\n\t        |      TIME                   |        ");
    printf("\n\t        |    [D] HOUR                 |        ");
    printf("\n\t        |    [E] MINUTES              |        ");
    printf("\n\t        |    [F] SECONDS              |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        |       [Z] BACK              |        ");
    printf("\n\t        |                             |        ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    Ask_Choice();
}

void Ask_Choice()
{
    fcolor(fYellow);
    printf("\n\n\t\t\tEnter choice: ");
    bgcolor(reset);
}
void Ask_TryAgain()
{
    fcolor(fYellow);
    printf("\n\n\t\tDo you want to try again?(Y/N): ");
    bgcolor(reset);
}
void ErrorCatcher()
{
    fcolor(fRed);
    printf("\n\t\t   Invalid Input! Try again!");
    printf("\n\t\t   Press any key to continue");
    bgcolor(reset);
    getch();
}

void Even_or_Odd_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                   EVEN OR ODD                 ");
    printf("\n\t                                               ");
    printf("\n\t           Enter a number to identify          ");
    printf("\n\t              if it's even or odd              ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t      Enter an integer: ");
    bgcolor(reset);
}
void Negative_or_Positive_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);    
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t              NEGATIVE OR POSITIVE             ");
    printf("\n\t                                               ");
    printf("\n\t           Enter a number to identify          ");
    printf("\n\t          if it's poitive or negative          ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);    
    printf("\n\n\t\t      Enter a number: ");
    bgcolor(reset);
}
void Leapyear_or_Not_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);    
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                LEAP YEAR OR NOT               ");
    printf("\n\t                                               ");
    printf("\n\t           Enter a number to identify          ");
    printf("\n\t            if it's leap year or not           ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);     
    printf("\n\n\t\t      Enter a year: ");
    bgcolor(reset);    
}
void Fibonacci_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);    
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                FIBONACCI  SERIES              ");
    printf("\n\t                                               ");
    printf("\n\t        Enter a number to see the table        ");
    printf("\n\t          and its coresponding term            ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);    
    printf("\n\n\t\t  Enter number of term: ");
    bgcolor(reset);    
}
void Squared_Sequence_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                SQUARED SEQUENCE               ");
    printf("\n\t                                               ");
    printf("\n\t        Enter a number to see the table        ");
    printf("\n\t          and its coresponding squared         ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\tEnter number of sequence: ");
    bgcolor(reset);    
}
void Square_Maker_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                RECTANGLE MAKER                ");
    printf("\n\t                                               ");
    printf("\n\t        Enter a height and length to see       ");
    printf("\n\t         note:  height = height - 1\"|\"         ");
    printf("\n\t                length = length * 3\"-\"         ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t      Enter height: ");
    bgcolor(reset); 
}
void List_Even_or_Odd_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t              LIST OF EVEN OR ODD              ");
    printf("\n\t                                               ");
    printf("\n\t        Enter 10 numbers and the program       ");
    printf("\n\t         will identify if it's even or         ");
    printf("\n\t                     odd                       ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\tEnter 10 numbers: "); 
    bgcolor(reset); 
}
void Highest_Value_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                  HIGHEST VALUE                ");
    printf("\n\t                                               ");
    printf("\n\t        Enter 10 numbers and the program       ");
    printf("\n\t         will identify if the highest          ");
    printf("\n\t                     number                    ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\tEnter 10 numbers: ");  
    bgcolor(reset);  
}
void Area_of_Square_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                  AREA OF SQUARE               ");
    printf("\n\t                                               ");
    printf("\n\t          Enter the side of square and         ");
    printf("\n\t          the program will compute the         ");
    printf("\n\t               the area of square              ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t    Enter length or height: ");
    bgcolor(reset);
}
void Area_of_Triangle_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                AREA OF TRIANGLE               ");
    printf("\n\t                                               ");
    printf("\n\t          Enter the height and base of         ");
    printf("\n\t         triangle and the program will         ");
    printf("\n\t          compute the area of triangle         ");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t\tEnter height: ");
    bgcolor(reset);
}
void Area_of_Circle_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                AREA OF CIRCLE                 ");
    printf("\n\t                                               ");
    printf("\n\t           Enter the radius of circle          ");
    printf("\n\t          and the program will compute         ");
    printf("\n\t              the area of circle               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t\tEnter radius: ");
    bgcolor(reset);
}
void Factorial_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                    FACTORIAL                  ");
    printf("\n\t                                               ");
    printf("\n\t            Enter a integer and the            ");
    printf("\n\t         the program will compute the          ");
    printf("\n\t         the factorial of that integer         ");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t\tEnter a number: ");
    bgcolor(reset);   
}
void Power_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                    EXPONENT                   ");
    printf("\n\t                                               ");
    printf("\n\t            Enter a base and exponent          ");
    printf("\n\t            the program will show the          ");
    printf("\n\t                     result                    ");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
    fcolor(fYellow);
    printf("\n\n\t\t\tEnter base: ");
    bgcolor(reset);     
}
void Converter_Design()
{
    clrscr();
    bgcolor(bgWhite);
    fcolor(fMagenta);
    printf("\n\n");
    printf("\n\t                                               ");
    printf("\n\t        ===============================        ");
    printf("\n\t                   CONVERTER                   ");
    printf("\n\t            Enter a value to convert           ");
    printf("\n\t              it to another value              ");
    printf("\n\t        ===============================        ");
    printf("\n\t                                               ");
    bgcolor(reset);
}

void Even_or_Odd(int num)
{
    fcolor(fCyan);
    printf("\n\t\t      %d is an ", num);
    (num%2==0) ? printf("even") : printf("odd");
    printf(" number");
}
void Negative_or_Positive(double num)
{
    fcolor(fCyan);
    printf("\n\t\t   %.2lf is a ", num);
    (num>=0) ? printf("positive") : printf("negative");
    printf(" number.");
}
void Leapyear_or_Not(int year)
{
    fcolor(fCyan);
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                printf("\n\t\t      %d is a leap year.", year);
            }
            else
            {
                printf("\n\t\t    %d is not a leap year.", year);
            }       
        }
        else
        {
            printf("\n\t\t      %d is a leap year.", year);
        }    
    }
    else
    {
        printf("\n\t\t    %d is not a leap year.", year);
    }    
}
void Fibonacci(int term)
{
    fcolor(fCyan);
    int sum, num1=0, num2=1;

    printf("\n\t\t    Term:\t\tValue:\n");
    for (int i = 0; i <= term; i++)
    {
        printf("\n\t\t      %d \t\t  %d",i, num1);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }   
}
void Squared_Sequence(int sequence)
{
    fcolor(fCyan);
    printf("\n\t\t    Sequence:\tSquared:\n");
    for (int i = 1; i <= sequence; i++)
    {
        printf("\n\t\t      %d \t  %d",i,i*i);
    }   
}
void Square_Maker(int height, int length)
{
    fcolor(fCyan);
    if (height<1 || length<1)
    {
        printf("\n\tThere no such square");
    }
    else
    {      
        height-=1;
        printf("\n\t");
        for(int i=0; i<(length*3); i++)
        {
            printf("-");
        }
        for(int i=0; i<height; i++)
        {
            printf("\n\t|");
            for(int j=0; j<((length*3)-2); j ++){
                printf(" "); 
            }
            printf("|");
        }
        printf("\n\t");        
        for(int i=0; i<(length*3); i++)
        {
            printf("-");
        }
    }    
}
void List_Even_or_Odd()
{
    fcolor(fCyan);
    printf("\n\tEven numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        if (Array[i]%2==0)
        {
            printf("%d  ",Array[i]);
        }
    }
    printf("\n\tOdd numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        if (Array[i]%2!=0)
        {
            printf("%d  ",Array[i]);
        }    
    }
}
void Highest_Value()
{
    fcolor(fCyan);
    int highest;
    for (int i = 0; i < 10; i++)
    {
        if(Array[i]>highest)
        {
            highest=Array[i];
        }
    }
    printf("\n\tThe Highest Value is: %d", highest);    
}
int Factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*Factorial(num-1);

    }
}


