#include <iostream>
#include <windows.h>            //      Created by:
#include <conio.h>              //   
#include <thread>               //  Aviles, James Luck  
#include <chrono>               //  Bercilla, Kiel
#include <string>               //  Capistrano, Jade Michael
#include <sstream>              //  Hernandez, Allan Jay
#include <math.h>               //  Narvaez, Arjay
#include <vector>


using namespace std;

//=======================================================================================
//  Program Settings:                                                                  ||
//                                                                                     ||
int posX = 0, posY = 0; //Edit this to move the program , no negative numbers          ||
int color_1 = 50;       // cyan     // visit this website for more color options:      ||
int color_2 = 36;       // green    // https://talyian.github.io/ansicolors            ||
int color_3 = 19;       // indigo   //   \x1b["Y"8;5;"X"m                              ||
int color_4 = 255;      // white    //   "X" is your color number, for example         ||
int color_5 = 200;      // pink     //   \x1b["Y"8;5;200m is equal to pink             ||
int txtcolor_1 = 255;   // white    //                                                 ||
int txtcolor_2 = 50;    // cyan     //   change "Y" to 4 if background                 ||
int txtcolor_3 = 200;   // pink     //                 3 if font color                 ||
//=======================================================================================


void goto_xy(int x, int y);
void press_to_continue(int x, int y);
void loading();
void space (int value);
void pixel(int value, int color);
void Background(int lines);
bool Pop_up(string txt);
bool Error_Trap(const string& input);
bool Error_Trap_int(const string& str);
void Error();


void Creator_Hehe();
void Introduction();
void Instruction();
void Header(int num);
int DrawMenu(int num, string OptionNames[], int NumOptions);
void Footer();
void Ending();


void money_f(string a, char b, char c, char d, char e, double f, double g, double h, string i, string j, string k);
void metric_f(string a, string b, double c, double d, double e, string f, string g, string h);
void math_Sqrt();
void math_Power();
void math_Cbrt();
void array_1f();
void array_2f();
void Num_to_words();
void Num_to_roman();


void Animate_Cat();
void Cat_0();
void Cat_1();
void Cat_2();
void Cat_3();


int main() 
{
    string MainOptions[] = {"Money Converter ",
                            "Metric Converter",
                            " Math Functions ",
                            "     Arrays     ",
                            "Number Converter",
                            "      Exit      "};
    string Money[] = {"      Peso      ",
                      "     Dollar     ",
                      "      Yen       ",
                      "      Euro      ",
                      "      Back      "};
    string Metric[] = {"      Yard      ",
                       "     Meter      ",
                       "      Feet      ",
                       "     Inches     ",
                       "      Back      "};
    string Math[] = {"   Square Root  ",
                     "      Power     ",
                     "    Cube Root   ",
                     "      Back      "};
    string Arrays[] = {"  Evn/Odd/+/-   ",
                       "High & Low + Loc", 
                       "      Back      "};
    string Number[] = {"  7 to \'Seven\'  ",
                       "   7 to \'VII\'   ",
                       "      Back      "};

    int NumMainOptions = sizeof(MainOptions) / sizeof(MainOptions[0]);
    int MoneyOptions = sizeof(Money) / sizeof(Money[0]);
    int MetricOptions = sizeof(Metric) / sizeof(Metric[0]);
    int MathOptions = sizeof(Math) / sizeof(Math[0]);
    int ArraysOptions = sizeof(Arrays) / sizeof(Arrays[0]);
    int NumberOptions = sizeof(Number) / sizeof(Number[0]);

    Creator_Hehe();
    Introduction();
    Instruction();
    loading();

    menu:

    while (true)
    {
        int MainSelection = DrawMenu(0, MainOptions, NumMainOptions);

        if (MainSelection == NumMainOptions - 1)    
        {
            if (Pop_up(" Are you sure? (Y/N) "))
            {
                Ending();
                Animate_Cat();
                break;
            }
            else
            {
                goto menu;
            }   
        }
        else if (MainSelection == 0)
        {
            while (true) 
            {
                int MoneySelection = DrawMenu(1, Money, MoneyOptions);

                if (MoneySelection == MoneyOptions - 1) 
                {
                    break;
                }
                else if (MoneySelection == 0)
                {   
                    money_f("Peso", 'P', 'e', '$', 'Y', 0.017, 0.018, 2.57, " Euro", " Dollar", " Yen");
                }
                else if (MoneySelection == 1)
                {
                    money_f("Dollar", '$', 'e', 'P', 'Y', 0.91, 54.90, 140.96, " Euro", " Peso", " Yen");
                }
                else if (MoneySelection == 2)
                {
                    money_f("Yen", 'Y', 'P', '$', 'e', 0.39, 0.0070, 0.0064, " Peso", " Dollar", " Euro");
                }
                else if (MoneySelection == 3)
                {
                    money_f("Euro", 'e', 'P', '$', 'Y', 60.47, 1.1, 155.17, " Peso", " Dollar", " Yen");
                }
            }
        }
        else if (MainSelection == 1)
        {
            while (true) 
            {
                int MetricSelection = DrawMenu(2, Metric, MetricOptions);

                if (MetricSelection == MetricOptions - 1) 
                {
                    break;
                }
                else if (MetricSelection == 0)
                {   
                    metric_f("Yard", "Y", 0.9144, 3, 36, " Meter", " Feet", " Inch");
                }
                else if (MetricSelection == 1)
                {
                    metric_f("Meter", "M", 1.0936, 3.28, 39.37, " Yard", " Feet", " Inch");
                }
                else if (MetricSelection == 2)
                {
                    metric_f("Feet", "Ft", 0.3333, 0.3048, 12, " Yard", " Meter", " Inch");
                }
                else if (MetricSelection == 3)
                {
                    metric_f("Inch", "In", 0.0277, 0.0254, 0.0833, " Yard", " Meter", " Feet");
                }    
            }
        }
        else if (MainSelection == 2)
        {
            while (true) 
            {
                int MathSelection = DrawMenu(3, Math, MathOptions);

                if (MathSelection == MathOptions - 1) 
                {
                    break;
                }
                else if (MathSelection == 0)
                {   
                    math_Sqrt();
                }
                else if (MathSelection == 1)
                {
                    math_Power();
                }
                else if (MathSelection == 2)
                {
                    math_Cbrt();
                }    
            }
        }
        else if (MainSelection == 3)
        {
            while (true) 
            {
                int ArraysSelection = DrawMenu(4, Arrays, ArraysOptions);

                if (ArraysSelection == ArraysOptions - 1) 
                {
                    break;
                }
                else if (ArraysSelection == 0)
                {   
                    array_1f();
                }
                else if (ArraysSelection == 1)
                {
                    array_2f();
                }    
            }
        }
        else if (MainSelection == 4)
        {
            while (true) 
            {
                int NumberSelection = DrawMenu(5, Number, NumberOptions);

                if (NumberSelection == NumberOptions - 1) 
                {
                    break;
                }
                else if (NumberSelection == 0)
                {   
                    Num_to_words();
                }
                else if (NumberSelection == 1)
                {
                    Num_to_roman();
                }   
            }
        }   
    }

    return 0;
}


void goto_xy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void press_to_continue(int x, int y)
{
    string text = "Press any key to continue...";
    int delay = 1000; // 1000 = to 1 seconds

    goto_xy(posX + x, posY + y);
    
    while (!_kbhit()) 
    {
        cout << text << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
        for (size_t i = 0; i < text.length(); ++i) 
        {
            cout << '\b' << ' ' << '\b';
        }
        this_thread::sleep_for(chrono::milliseconds(delay));
    }

    _getch();
}
void loading() 
{
    system("cls");
    
    int delay = 30; 
    int barWidth = 40;
    
    for (int i = 0; i <= 100; ++i) 
    {
        int pos = barWidth * 0.01 * i;

        goto_xy(posX + 5,posY + 7);
        cout << "\x1b[38;5;50m";
        cout << "-=<{|";

        for (int j = 0; j < barWidth; ++j) 
        {
            cout << "\x1b[38;5;200m";

            if (j < pos) cout << "#";
            else if (j == pos) cout << "\x1b[38;5;50m>";
            else cout << " ";
        }

        cout << "\x1b[38;5;50m";
        cout << "|}>=- ";

        goto_xy (posX + 22, posY + 11);
        cout << "Loading... " << i << "%";

        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}
void space (int value)
{
    for (int i = 0; i < value; i++)
    {
        cout << " ";
    }
}
void pixel(int value, int color)
{
    cout << "\x1b[48;5;" << color << "m";
    for (int i = 0; i < value; i++)
    {
        cout << " ";
    }
    cout <<"\033[0m";
}
void Background(int lines) 
{
    system("cls");

    int distance = posX + 3;

    goto_xy(distance,posY);
    // Line 1
    space(1);
    pixel(50,color_1);
    cout<<"\n";
    // Line 2
    space(distance);
    pixel(2,color_1);
    pixel(48,color_2);
    pixel(2,color_1);
    cout<<"\n";
    // Line 3
    space(distance);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(46,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    cout<<"\n";

    for (int i = 0; i < lines - 4; i++)
    {
        space(distance);
        pixel(1,color_1);
        pixel(1,color_2);
        pixel(48,color_3);
        pixel(1,color_2);
        pixel(1,color_1);
        cout<<"\n";
    }

    // You know this
    space(distance);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(46,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Before last line
    space(distance);
    pixel(2,color_1);
    pixel(48,color_2);
    pixel(2,color_1);
    cout<<"\n";
    // Last line
    space(distance);
    space(1);
    pixel(50,color_1);
    cout<<"\n";
}
bool Pop_up(string txt)
{
    start:

    system("cls");

    char chc;
    
    // Line 1
    goto_xy(posX + 14 ,posY+7);
    pixel(1,color_2);
    pixel(28,color_1);
    pixel(1,color_2);
    // Line 2
    goto_xy(posX + 12 ,posY+8);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(28,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    // Line 2
    goto_xy(posX + 12 ,posY+9);
    pixel(1,color_1);
    pixel(1,color_2);
    pixel(30,color_3);
    pixel(1,color_2);
    pixel(1,color_1);
    // Line 2
    goto_xy(posX + 12 ,posY+10);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(28,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    // Last Line 
    goto_xy(posX + 14 ,posY+11);
    pixel(1,color_2);
    pixel(28,color_1);
    pixel(1,color_2);
    
    // Text
    cout << "\x1b[48;5;19m";
    goto_xy(posX + 18, posY + 9);
    cout << "\x1b[48;5;19m";
    cout << "\033[37;1;4m";
    cout << txt; 
    cin >> chc;
    cout << "\033[0m";

    if (chc == 'y' || chc == 'Y')
    {
        return true;
    }
    else if (chc == 'n' || chc == 'N')
    {
        return false;
    }
    else
    {
        Error();
        goto start;   
    }
       
}
bool Error_Trap(const string& input) 
{
    istringstream iss(input);
    double num;
    return (iss >> num) && iss.eof();
}
bool Error_Trap_int(const string& str) 
{
    if (str.empty() || ((!isdigit(str[0])) && (str[0] != '-') && (str[0] != '+')))
    {
        return false;
    }
       
    char* end;
    strtol(str.c_str(), &end, 10);

    return (*end == '\0');
}
void Error()
{
    int color_1s = 184, color_2s = 196, color_3s = 232;
 
    // Line 1
    goto_xy(posX + 14 ,posY+7);
    pixel(1,color_2s);
    pixel(28,color_1s);
    pixel(1,color_2s);
    // Line 2
    goto_xy(posX + 12 ,posY+8);
    pixel(1,color_1s);
    pixel(2,color_2s);
    pixel(28,color_3s);
    pixel(2,color_2s);
    pixel(1,color_1s);
    // Line 2
    goto_xy(posX + 12 ,posY+9);
    pixel(1,color_1s);
    pixel(1,color_2s);
    pixel(30,color_3s);
    pixel(1,color_2s);
    pixel(1,color_1s);
    // Line 2
    goto_xy(posX + 12 ,posY+10);
    pixel(1,color_1s);
    pixel(2,color_2s);
    pixel(28,color_3s);
    pixel(2,color_2s);
    pixel(1,color_1s);
    // Last Line 
    goto_xy(posX + 14 ,posY+11);
    pixel(1,color_2s);
    pixel(28,color_1s);
    pixel(1,color_2s);
    
    // Text
    goto_xy(posX + 19, posY + 9);
    cout << "\x1b[48;5;232m";
    cout << "\x1b[38;5;196m";
    cout << "   Invalid Input!\033[0m"; 
    _getch();  
}


void Creator_Hehe()
{
    system("cls");

    int width = 10;
    int height = 8;
    int lines = 0;

     

    auto cyanblack = [&]() 
    {
        cout << "\x1b[48;5;" << color_1 << "m  \033[0m";
        cout << "\x1b[48;5;" << color_2 << "m  \033[0m";	
    };
    auto blackcyan = [&]() 
    {
        cout << "\x1b[48;5;" << color_2 << "m  \033[0m";
        cout << "\x1b[48;5;" << color_1 << "m  \033[0m";	
    };
    auto pattern_1 = [&]()
    {
        for (int i = 0; i < width; i++)
        {
            cyanblack();
        }
        
    };
    auto pattern_2 = [&]()
    {
        for (int i = 0; i < width; i++)
        {
            blackcyan();
        }
        
    };
    auto pattern_3 = [&]()
    {
        cyanblack();
        for (int i = 0; i < width*2 - 4; i++)
        {
            cout << "\x1b[48;5;" << color_3 << "m  \033[0m";
        }
        cyanblack();   
    };
    auto pattern_4 = [&]()
    {
        blackcyan();
        for (int i = 0; i < width*2 - 4; i++)
        {
            cout << "\x1b[48;5;" << color_3 << "m  \033[0m";
        }
        blackcyan();   
    };

    goto_xy(posX + 10,posY);
    pattern_1();
    goto_xy(posX + 10,posY + 1);
    pattern_2();
    for ( int i = 0; i < height*2; i++)
    {
        if (i % 2 == 0)
        {
            goto_xy(posX + 10,posY + i + 2);
            pattern_3();
        }
        else
        {
            goto_xy(posX + 10,posY + i + 2 );
            pattern_4();
        }

        lines = i;   
    }
    goto_xy(posX + 10, posY+lines + 3);
    pattern_1();
    goto_xy(posX + 10, posY+lines + 4);
    pattern_2();

    

    goto_xy(posX + 10 + 13 ,posY + 4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\033[3m\033[4m\033[1m\033[97m E A R I S T \033[0m";


    goto_xy(posX + 10 + 13 ,posY + 15);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\033[3m\033[4m\033[1m\033[97m SY: 2022-23 \033[0m";

    this_thread::sleep_for(chrono::milliseconds(2000));
    goto_xy(posX + 10 + 13 ,posY + 7);
    cout << "\x1b[48;5;" << color_3 << "m";
    
    cout << "\033[3m\033[1m\033[97m Presented by:\033[0m";

    this_thread::sleep_for(chrono::milliseconds(1500));
    goto_xy(posX + 10 + 11 ,posY + 9);
    cout << "\x1b[48;5;" << color_3 << "m";
    
    cout << "\033[3m\033[4m\033[1m\033[97m Group Masigasig \033[0m";
    
    this_thread::sleep_for(chrono::milliseconds(1500));
    goto_xy(posX + 10 + 13 ,posY + 11);
    cout << "\x1b[48;5;" << color_3 << "m";
    
    cout << "\033[3m\033[1m\033[97m From BSCS-1 \033[0m";
    
    this_thread::sleep_for(chrono::milliseconds(3000));   
}
void Introduction() 
{
    system("cls");

    int row = 17;
    int column = 58;

    int colors[] = {0, 200, 255, 50};
    int pattern[row][column] = {
        {0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3},
        {1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0},
        {1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 3, 0, 0, 0},
        {1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 3, 0, 0, 0},
        {1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 0, 0, 0},
        {1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //
        {0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0}, 
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0},
        {1, 2, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0},
        {0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0},
        {0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0}
    };

    for (int i = 0; i < row; i++) 
    {
        goto_xy(posX,posY + i);

        for (int j = 0; j < column; j++) 
        {
            int colorIndex = pattern[i][j];
            
            cout << "\x1b[48;5;" << colors[colorIndex] << "m \033[0m";  
        }
    }
    
    press_to_continue(16, 18);
}
void Instruction()
{
    Background(20);

    // Text 1
    goto_xy(posX + 10,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "INSTRUCTION ON HOW TO USE THE PROGRAM:\033[0m";
    _getch();

    // Text 2
    goto_xy(posX + 15,posY+6);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "TO NAVIGATE THE MENU OPTIONS";
    _getch();

    // Text 3
    goto_xy(posX + 20,posY+8);
    cout << "USE ARROW KEY \"UP\"";
    _getch();

    // Text 4
    goto_xy(posX + 19,posY+10);
    cout << "USE ARROW KEY \"DOWN\"";
    _getch();

    // Text 5
    goto_xy(posX + 27,posY+12);
    cout << "AND";
    _getch();

    // Text 6
    goto_xy(posX + 15,posY+14);
    cout << "USE \"ENTER\" KEY WHEN SELECTING";
    goto_xy(posX + 22,posY+15);
    cout << "FROM MENU OPTIONS.";
    _getch();

    // Text 7
    goto_xy(posX + 24,posY+17);
    cout << "\033[37;1;4m";
    cout << "ALL RIGHT?\033[0m";
    _getch();
    _getch();  
}
void Header(int num)
{
    system("cls");

    string Headername[] = {"      MENU      ",
                           "Money Converter ",
                           "Metric Converter",
                           " Math Functions ",
                           "     Arrays     ",
                           "Number Converter"};
    
    int distance = posX + 3;

    auto design = [&]()
    {
        cout << "\x1b[48;5;" << color_3 << "m";
        cout << "\x1b[38;5;" << txtcolor_3 << "m";
        cout << "\"-#A=v-: ";
        cout << "\033[37;1;4m";
        cout << Headername[num];
        cout <<"\033[0m";
        cout << "\x1b[48;5;" << color_3 << "m";
        cout << "\x1b[38;5;" << txtcolor_3 << "m";
        cout << " :-v=A#-\"";
    };
    
    goto_xy(distance,posY);

    // Line 1
    space(1);
    pixel(50,color_1);
    cout<<"\n";
    // Line 2
    space(distance);
    pixel(2,color_1);
    pixel(48,color_2);
    pixel(2,color_1);
    cout<<"\n";
    // Line 3 The normal Line
    space(distance);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(46,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 4 The Title Line
    space(distance);
    pixel(1,color_1);
    pixel(1,color_2);
    pixel(7,color_3);
    design();
    pixel(7,color_3);
    pixel(1,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 5
    space(distance);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(46,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 6
    space(distance);
    space(1);
    pixel(1,color_1);
    pixel(48,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 7
    space(distance);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(46,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 8
    space(distance);
    pixel(1,color_1);
    pixel(1,color_2);
    pixel(48,color_3);
    pixel(1,color_2);
    pixel(1,color_1);
    cout<<"\n";
}
int DrawMenu(int num, string OptionNames[], int NumOptions)
{
    int selection = 0;
    char key;

    Header(num);
    while (true)
    {  
        for (int i = 0; i < NumOptions; i++)
        {
            goto_xy(posX + 3, posY + 8 + i);

            if (i == selection)
            {
                cout << "\x1b[48;5;" << color_1 << "m ";
                cout << "\x1b[48;5;" << color_2 << "m ";
                cout << "\x1b[48;5;" << color_3 << "m           ";
                cout << "\x1b[38;5;" << txtcolor_3 << "m ->> ";
                cout << "\x1b[38;5;" << txtcolor_2 << "m";
                cout << OptionNames[i];
                cout << "\x1b[38;5;" << txtcolor_3 << "m <<-            ";
                cout << "\x1b[48;5;" << color_2 << "m ";
                cout << "\x1b[48;5;" << color_1 << "m \033[0m";
            }
            else
            {
                cout << "\x1b[48;5;" << color_1 << "m ";
                cout << "\x1b[48;5;" << color_2 << "m ";
                cout << "\x1b[48;5;" << color_3 << "m                ";
                cout << "\x1b[38;5;" << txtcolor_1 << "m";
                cout << OptionNames[i] << "                ";
                cout << "\x1b[48;5;" << color_2 << "m ";
                cout << "\x1b[48;5;" << color_1 << "m \033[0m";
            }   
        }

        Footer();
        key = _getch();

        if (key == 72) // Arrow Up 
        { 
            if (selection > 0) 
            {
                selection--;
            } 
            else 
            {
                selection = NumOptions - 1;
            }
        } 
        else if (key == 80) // Arrow Down
        { 
            if (selection < NumOptions - 1) 
            {
                selection++;
            } 
            else 
            {
                selection = 0;
            }
        } 
        else if (key == '\r') // Enter key
        { 
            return selection;
        }            
    }   
}
void Footer ()
{
    int distance = posX + 3;   
    // Line 1
    cout<<"\n";
    space(distance);
    pixel(1,color_1);
    pixel(1,color_2);
    pixel(48,color_3);
    pixel(1,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 2
    space(distance);
    pixel(1,color_1);
    pixel(2,color_2);
    pixel(46,color_3);
    pixel(2,color_2);
    pixel(1,color_1);
    cout<<"\n";
    // Line 3
    space(distance);
    pixel(2,color_1);
    pixel(48,color_2);
    pixel(2,color_1);
    cout<<"\n";
    // Line 4
    space(distance);
    space(1);
    pixel(50,color_1);
    cout<<"\n";
}
void Ending() 
{
    system("cls");

    int row = 17;
    int column = 48;

    int colors[] = {0, 200, 255, 50}; 
    int pattern[row][column] = {
        {0, 0, 1, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 3},
        {0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3},
        {1, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0},
        {1, 2, 2, 3, 0, 1, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0},
        {1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 1, 2, 3, 0, 1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0},
        {1, 2, 2, 3, 0, 0, 1, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 1, 2, 3, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0},
        {0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3},
        {0, 0, 1, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //
        {0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0}, 
        {0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0},
        {0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0},
        {0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0},
        {0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0},
        {0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 0, 0, 1, 2, 2, 3, 0, 0},
        {0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0},
        {0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 2, 3, 0, 0, 0, 1, 2, 2, 3, 0}
    };

    for (int i = 0; i < row; i++) 
    {
        if (i == 8)
        {
            this_thread::sleep_for(chrono::milliseconds(1000));
        } 
        goto_xy(posX + 5,posY + i);
        for (int j = 0; j < column; j++) 
        {
            int colorIndex = pattern[i][j];

            cout << "\x1b[48;5;" << colors[colorIndex] << "m \033[0m";  
        }     
    }

    this_thread::sleep_for(chrono::milliseconds(2000));
}


void money_f(string a, char b, char c, char d, char e, double f, double g, double h, string i, string j, string k) 
{
    start:

    string input;  

    Background(18);

    // Text 1
    goto_xy(posX+12,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter the value of " << a << " to convert";
    goto_xy(posX+19,posY+5);
    cout << "to another currency.\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter "<< a << " (" << b << "): ";
    cin >> input;
    cout << "\033[0m";

    if (Error_Trap(input)) 
    {
        double number = stod(input);
        if (number < 0 )
        {
            Error();
            goto start;
        }
        goto_xy(posX+18,posY+11);
        cout << "\x1b[48;5;" << color_3 << "m";
        cout << "\x1b[38;5;" << txtcolor_1 << "m";
        cout << b << " " << number << " = " << c << " " << number * f << i;
        goto_xy(posX+18,posY+13);
        cout << b << " " << number << " = " << d << " " << number * g << j;
        goto_xy(posX+18,posY+15);
        cout << b << " " << number << " = " << e << " "  << number * h << k <<"\033[0m";

        _getch();

        if (Pop_up("Wanna try again? (Y/N)"))
        {
            goto start;
        }    
    } 
    else 
    {
        Error();
        goto start;
    }
}
void metric_f(string a, string b, double c, double d, double e, string f, string g, string h)
{
    start:

    string input;  

    Background(18);

    // Text 1
    goto_xy(posX+12,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter the value of " << a << " to convert";
    goto_xy(posX+19,posY+5);
    cout << "to another measurement.\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter "<< a << " (" << b << "): ";
    cin >> input;
    cout << "\033[0m";

    if (Error_Trap(input)) 
    {
        double number = stod(input);
        if (number < 0 )
        {
            Error();
            goto start;
        }
        goto_xy(posX+18,posY+11);
        cout << "\x1b[48;5;" << color_3 << "m";
        cout << "\x1b[38;5;" << txtcolor_1 << "m";
        cout << number << " " << b  << " = " << number * c << f;
        goto_xy(posX+18,posY+13);
        cout << number << " " << b  << " = " << number * d << g;
        goto_xy(posX+18,posY+15);
        cout << number << " " << b  << " = " << number * e << h <<"\033[0m";

        _getch();

        if (Pop_up("Wanna try again? (Y/N)"))
        {
            goto start;
        }    
    } 
    else 
    {
        Error();
        goto start;
    }
}
void math_Sqrt()
{
    start:

    string input;  

    Background(14);

    // Text 1
    goto_xy(posX+12,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter the value for which you wish";
    goto_xy(posX+19,posY+5);
    cout << "to calculate the root.\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter value here: ";
    cin >> input;
    cout << "\033[0m";

    if (Error_Trap(input)) {
        double number = stod(input);
        if (number < 0 )
        {
            Error();
            goto start;
        }
        goto_xy(posX+16,posY+10);
        cout << "\x1b[48;5;" << color_3 << "m"; 
        cout << "\x1b[38;5;" << txtcolor_1 << "m"; 
        cout << "The Squaroot of " << number << " is " << sqrt(number);
        cout << "\033[0m";
        _getch();

        if (Pop_up("Wanna try again? (Y/N)"))
        {
            goto start;
        }    
    } 
    else 
    {
        Error();
        goto start;
    }
}
void math_Power()
{
    start:

    string input, input_2;  

    Background(15);

    // Text 1
    goto_xy(posX+12,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter the base and index/exponent";
    goto_xy(posX+19,posY+5);
    cout << "to calculate the power.\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter base here: ";
    cin >> input;
    goto_xy(posX+16,posY+9);
    cout << "Enter exponent here: ";
    cin >> input_2;
    cout << "\033[0m";

    if (Error_Trap(input) && Error_Trap(input_2)) {
        double number = stod(input);
        double number_2 = stod(input_2);

        goto_xy(posX+16,posY+11);
        cout << "\x1b[48;5;" << color_3 << "m"; 
        cout << "\x1b[38;5;" << txtcolor_1 << "m"; 
        cout << "Answer: " << number << "^" << number_2 << " = " << pow(number, number_2);
        cout << "\033[0m";
        _getch();

        if (Pop_up("Wanna try again? (Y/N)"))
        {
            goto start;
        }    
    } 
    else 
    {
        Error();
        goto start;
    }
}
void math_Cbrt()
{
    start:

    string input;  

    Background(14);

    // Text 1
    goto_xy(posX+12,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter the value for which you wish";
    goto_xy(posX+16,posY+5);
    cout << "to calculate the cuberoot.\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter value here: ";
    cin >> input;
    cout << "\033[0m";

    if (Error_Trap(input)) {
        double number = stod(input);

        goto_xy(posX+16,posY+10);
        cout << "\x1b[48;5;" << color_3 << "m"; 
        cout << "\x1b[38;5;" << txtcolor_1 << "m"; 
        cout << "The Cuberoot of " << number << " is " << cbrt(number);
        cout << "\033[0m";
        _getch();

        if (Pop_up("Wanna try again? (Y/N)"))
        {
            goto start;
        }    
    } 
    else 
    {
        Error();
        goto start;
    }
}
void array_1f()
{
    start:

    string input[10];
    double num[10];
    int count[4] = {0, 0, 0, 0};

    auto none = [&](int num)
    {
        if (count[num] == 0)
        {
            cout <<" None";
        }   
    };

    Background(19);

    // Text 1
    goto_xy(posX+11,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter 10 numbers to identify if it\'s";
    goto_xy(posX+12,posY+5);
    cout << "Even, Odd, Positive, and Negative.";

    goto_xy(posX+10,posY+6);
    cout << "Put space after a number and hit enter";
    goto_xy(posX+20,posY+7);
    cout << "after 10th number.\033[0m";
    
    // Prompt user
    goto_xy(posX+16,posY+9);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter 10 numbers below: ";
    goto_xy(posX+10,posY+10);
    for (int i = 0; i < 10; i++)
    {
        cin >> input[i];
    }
    cout << "\033[0m";
    for (int i = 0; i < 10; i++)
    {
        if (Error_Trap(input[i])) {
            num[i] = stod(input[i]);    
        } 
        else 
        {
            Error();
            goto start;
        }
    }


    // Output
    goto_xy(posX+10,posY+12);
    cout << "\x1b[48;5;" << color_3 << "m"; 
    cout << "\x1b[38;5;" << txtcolor_1 << "m"; 
    cout << "The even are: ";
    for (int i = 0; i < 10; i++)
    {
        if (Error_Trap_int(input[i]))
        {
            int intgr = stoi(input[i]);
            if (intgr % 2 == 0)
            {
                cout << intgr << " ";
                count[0]++;
            }
        }      
    }
    none(0);

    goto_xy(posX+10,posY+13);
    cout << "The odd are: ";
    for (int i = 0; i < 10; i++)
    {
        if (Error_Trap_int(input[i]))
        {
            int intgr = stoi(input[i]);
            if (intgr % 2 == 1)
            {
                cout << intgr << " ";
                count[1]++;
            }
        }    
    }
    none(1);

    goto_xy(posX+10,posY+15);
    cout << "The + are: ";
    for (int i = 0; i < 10; i++)
    {
        if (num[i] >= 0)
        {
            cout << num[i] << " ";
            count[2]++;
        }   
    }
    none(2);

    goto_xy(posX+10,posY+16);
    cout << "The - are: ";
    for (int i = 0; i < 10; i++)
    {
        if (num[i] < 0)
        {
            cout << num[i] << " ";
            count[3]++;
        }   
    }
    none(3);

    cout << "\033[0m";
    _getch();

    if (Pop_up("Wanna try again? (Y/N)"))
    {
        goto start;
    }
}
void array_2f()
{
    start:

    string input[10];
    double num[10]; 

    double highest = num[0], lowest = num[1];
    int loc_h=0, loc_l=0; 

    Background(19);

    // Text 1
    goto_xy(posX+9,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter 10 numbers to identify the Highest";
    goto_xy(posX+14,posY+5);
    cout << "and Lowest and their location.";

    goto_xy(posX+10,posY+6);
    cout << "Put space after a number and hit enter";
    goto_xy(posX+20,posY+7);
    cout << "after 10th number.\033[0m";
    
    // Prompt user
    goto_xy(posX+16,posY+9);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter 10 numbers below: ";
    goto_xy(posX+10,posY+10);
    for (int i = 0; i < 10; i++)
    {
        cin >> input[i];
    }
    cout << "\033[0m";
    for (int i = 0; i < 10; i++)
    {
        if (Error_Trap(input[i])) {
            num[i] = stod(input[i]);    
        } 
        else 
        {
            Error();
            goto start;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] > highest)
        {
            highest = num[i];
            loc_h = i;
        } 

        if (num[i] < lowest)
        {
            lowest = num[i];
            loc_l = i; 
        }     
    }

    // Output
    goto_xy(posX+10,posY+12);
    cout << "\x1b[48;5;" << color_3 << "m"; 
    cout << "\x1b[38;5;" << txtcolor_1 << "m"; 
    cout << "The Highest number is: "<< highest;

    goto_xy(posX+10,posY+13);
    cout << "Location: "<< loc_h + 1;

    goto_xy(posX+10,posY+15); 
    cout << "The Lowest number is: "<< lowest;

    goto_xy(posX+10,posY+16);
    cout << "Location: "<< loc_l + 1 ;

    cout << "\033[0m";
    _getch();

    if (Pop_up("Wanna try again? (Y/N)"))
    {
        goto start;
    }       
}
void Num_to_words()
{
    start:

    string input;  

    auto num_to_word = [&](int num) -> string
    {
        if (num == 0) {
        return "zero";
        }

        string ones[] = 
        {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
        };

        string teens[] = {
            "eleven", "twelve", "thirteen", "fourteen",
            "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
        };

        string tens[] = {
            "", "", "twenty", "thirty", "forty",
            "fifty", "sixty", "seventy", "eighty", "ninety"
        };

        string words;

        if (num < 0) {
            words += "negative ";
            num = abs(num);
        }

        if (num >= 1000) {
            words += ones[num / 1000] + " thousand ";
            num %= 1000;
        }

        if (num >= 100) {
            words += ones[num / 100] + " hundred ";
            num %= 100;
        }

        if (num >= 20) 
        {
            words += tens[num / 10] + " ";
            num %= 10;
        } 
        else if (num >= 11 && num <= 19) 
        {
            words += teens[num - 11] + " ";
            num = 0;
        }

        if (num > 0) {
            words += ones[num] + " ";
        }

        return words;
    };

    Background(14);

    // Text 1
    goto_xy(posX+16,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter an Integer to convert";
    goto_xy(posX+15,posY+5);
    cout << "to words. (-2000 to 2000 only)\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter here: ";
    cin >> input;
    cout << "\033[0m";

    if (Error_Trap(input)) 
    {
        if (Error_Trap_int(input))
        {
            int integer = stoi(input);

            if (integer >= -2000 && integer <= 2000)
            {
                goto_xy(posX+8,posY+10);
                cout << "\x1b[48;5;" << color_3 << "m"; 
                cout << "\x1b[38;5;" << txtcolor_1 << "m";
                cout << integer << " = " << num_to_word(integer) << "\033[0m";
                           
                _getch();

                if (Pop_up("Wanna try again? (Y/N)"))
                {
                    goto start;
                }
            }
            else
            {
                Error();
                goto start;
            } 
        }
        else
        {
            Error();
            goto start;
        }
    }
    else
    {
        Error();
        goto start;
    }
}
void Num_to_roman()
{
    start:

    string input;  

    auto num_to_roman = [&](int num) -> string
    {
        struct RomanNumeral {
            int value;
            string symbol;
        };

        vector <RomanNumeral> romanNumerals = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result;

        for (const auto& numeral : romanNumerals) {
            while (num >= numeral.value) {
                result += numeral.symbol;
                num -= numeral.value;
            }
        }

        return result;
    };

    Background(14);

    // Text 1
    goto_xy(posX+14,posY+4);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_2 << "m";
    cout << "Enter a Natural number to convert";
    goto_xy(posX+12,posY+5);
    cout << "to Roman Numerals. (1 to 2000 only)\033[0m";
    // Text 2 
    goto_xy(posX+16,posY+8);
    cout << "\x1b[48;5;" << color_3 << "m";
    cout << "\x1b[38;5;" << txtcolor_1 << "m";
    cout << "Enter number here: ";
    cin >> input;
    cout << "\033[0m";

    if (Error_Trap(input)) 
    {
        if (Error_Trap_int(input))
        {
            int integer = stoi(input);

            if (integer >= 1 && integer <= 2000)
            {
                goto_xy(posX+25,posY+10);
                cout << "\x1b[48;5;" << color_3 << "m"; 
                cout << "\x1b[38;5;" << txtcolor_1 << "m";
                cout << integer << " = " << num_to_roman(integer) << "\033[0m";
                _getch();

                if (Pop_up("Wanna try again? (Y/N)"))
                {
                    goto start;
                }
            }
            else
            {
                Error();
                goto start;
            } 
        }
        else
        {
            Error();
            goto start;
        }
    }
    else
    {
        Error();
        goto start;
    }
}


void Animate_Cat()
{
    int delay = 1; // In milliseconds
    int iterate = 8;

    Cat_0();

    for (int i = 0; i < iterate; i++)
    {
        Cat_2();
        this_thread::sleep_for(chrono::milliseconds(delay));
        Cat_3();
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    this_thread::sleep_for(chrono::milliseconds(500));
    Cat_2();
    this_thread::sleep_for(chrono::milliseconds(500));
    Cat_1();    
}
void Cat_0()
{
    system("cls");

    int row = 10;
    int column = 32;

    int colors[] = {0, 232, 117, 69 ,210, 255};
    int pattern[row][column] = {    
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 5, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 2, 2, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 5, 2, 2, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 5, 5, 5, 2, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 1, 0, 0, 0}
        
    };

    for (int i = 0; i < row; i++)
    {
        goto_xy(posX,posY+i);
        for (int j = 0; j < column; j++)
        {
            int colorIndex = pattern[i][j];

            cout << "\x1b[48;5;" << colors[colorIndex] << "m  \033[0m";
        }    
    }     
}
void Cat_1()
{
    Cat_0();

    int row = 8;
    int column = 32;

    int colors[] = {0, 232, 117, 69 ,210, 255};
    int pattern[row][column] = { 
        {0, 1, 1, 1, 1, 2, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0},
        {1, 5, 5, 5, 5, 1, 2, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 2, 1, 1, 1, 1, 3, 2, 2, 2, 1, 0},
        {1, 5, 4, 2, 4, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 1, 5, 5, 5, 5, 1, 3, 2, 2, 1, 0},
        {1, 2, 2, 2, 2, 2, 5, 2, 5, 5, 1, 5, 1, 5, 1, 5, 5, 5, 5, 5, 2, 1, 5, 4, 2, 4, 5, 1, 3, 2, 2, 1},
        {1, 4, 2, 4, 4, 2, 2, 2, 2, 5, 1, 1, 5, 1, 1, 5, 5, 5, 5, 2, 2, 1, 2, 2, 2, 2, 2, 5, 1, 3, 2, 1},
        {0, 1, 2, 4, 4, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 2, 4, 4, 2, 2, 5, 2, 2, 1},
        {0, 0, 1, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 1, 2, 4, 4, 2, 2, 2, 2, 2, 1},
        {0, 0, 0, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 3, 3, 3, 3, 3, 3, 3, 1}      
    };

    for (int i = 0; i < row; i++)
    {
        goto_xy(posX,posY+i+10);
        for (int j = 0; j < column; j++)
        {
            int colorIndex = pattern[i][j];

            cout << "\x1b[48;5;" << colors[colorIndex] << "m  \033[0m";
        } 

    }  

    goto_xy(posX+12, posY+19);
    cout<<"\x1b[38;5;50m                     Aviles, James Luck       \033[0m";
    goto_xy(posX+12, posY+20);
    cout<<"\x1b[38;5;223m                     Bercilla, Kiel           \033[0m";
    goto_xy(posX+12, posY+21);  
    cout<<"Presented by:";
    cout<<"\x1b[38;5;162m        Capistrano, Jade Michael \033[0m";
    goto_xy(posX+12, posY+22);
    cout<<"\x1b[38;5;155m                     Hernandez, Allan Jay     \033[0m";
    goto_xy(posX+12, posY+23);
    cout<<"\x1b[38;5;255m                     Narvaez, Arjay           \033[0m\n\n\n\n\n\n\n\n\n\n";
}
void Cat_2()
{
    int row = 14;
    int column = 32;

    int colors[] = {0, 232, 117, 69 ,210, 255};
    int pattern[row][column] = { 
        {0, 1, 1, 1, 1, 2, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0},
        {1, 5, 5, 5, 5, 1, 2, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0},
        {1, 5, 4, 2, 4, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0},
        {1, 2, 2, 2, 2, 2, 5, 2, 5, 5, 1, 5, 1, 5, 1, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 4, 2, 4, 4, 2, 2, 2, 2, 5, 1, 1, 5, 1, 1, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {0, 1, 2, 4, 4, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {0, 0, 1, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 1, 5, 5, 2, 2, 2, 2, 2, 2, 2, 1},
        {0, 0, 0, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 5, 5, 5, 2, 2, 2, 3, 3, 3, 3, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 2, 2, 3, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 2, 2, 3, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 2, 2, 3, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}   
    };

    for (int i = 0; i < row; i++)
    {
        goto_xy(posX,posY+i+10);
        for (int j = 0; j < column; j++)
        {
            int colorIndex = pattern[i][j];

            cout << "\x1b[48;5;" << colors[colorIndex] << "m  \033[0m";
        }   
    }    
}
void Cat_3()
{
    int row = 24;
    int column = 32;

    int colors[] = {0, 232, 117, 69 ,210, 255};
    int pattern[row][column] = { 
        {0, 0, 0, 0, 1, 2, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 2, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 2, 1, 1, 1, 1, 3, 2, 2, 2, 1, 0},
        {0, 0, 0, 0, 1, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 1, 5, 5, 5, 5, 1, 3, 2, 2, 1, 0},
        {0, 0, 0, 0, 1, 5, 5, 2, 5, 5, 1, 5, 1, 5, 1, 5, 5, 5, 5, 5, 2, 1, 5, 4, 2, 4, 5, 1, 3, 2, 2, 1},
        {0, 0, 0, 0, 1, 5, 2, 2, 2, 5, 1, 1, 5, 1, 1, 5, 5, 5, 5, 2, 2, 1, 2, 2, 2, 2, 2, 5, 1, 3, 2, 1},
        {0, 0, 0, 1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 2, 4, 4, 2, 2, 5, 2, 2, 1},
        {0, 0, 0, 1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 1, 2, 4, 4, 2, 2, 2, 2, 2, 1},
        {0, 0, 0, 1, 2, 5, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 3, 3, 3, 3, 3, 3, 3, 1},
        {0, 0, 1, 2, 5, 5, 5, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 2, 5, 5, 5, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 2, 5, 5, 5, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}   
    };

    for (int i = 0; i < row; i++)
    {
        goto_xy(posX, posY+i+10);
        for (int j = 0; j < column; j++)
        {
            int colorIndex = pattern[i][j];

            cout << "\x1b[48;5;" << colors[colorIndex] << "m  \033[0m";
        }    
    }    
}


