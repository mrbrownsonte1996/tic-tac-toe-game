#include <stdio.h>
#include <string.h>
int k[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
int f;

void w()
{
    printf("\t\t\t\t****tic tac toe****\n");
}


void katakati_print()
{
    int x,y;

    for(x = 0; x<3; x++)
    {
        printf("\n\n\n\n\t\t\t");
        for(y = 0; y<3; y++)
        {

            if(f >= 1 && f<=9)
                {
                    switch(f)
                    {
                    case 1:
                        k[0][0] = 30;
                        break;

                    case 2:
                        k[0][1] = 30;
                        break;

                    case 3:
                        k[0][2] = 30;
                        break;

                    case 4:
                        k[1][0] = 30;
                        break;

                    case 5:
                        k[1][1] = 30;
                        break;

                    case 6:
                        k[1][2] = 30;
                        break;

                    case 7:
                        k[2][0] = 30;
                        break;

                    case 8:
                        k[2][1] = 30;
                        break;

                    case 9:
                        k[2][2] = 30;
                        break;
                    }

                }

            if(f>=11 && f<=19)
            {
                switch(f)
                {
                    case 11:
                        k[0][0] = 40;
                        break;

                    case 12:
                        k[0][1] = 40;
                        break;

                    case 13:
                        k[0][2] = 40;
                        break;

                    case 14:
                        k[1][0] = 40;
                        break;

                    case 15:
                        k[1][1] = 40;
                        break;

                    case 16:
                        k[1][2] = 40;
                        break;

                    case 17:
                        k[2][0] = 40;
                        break;

                    case 18:
                        k[2][1] = 40;
                        break;

                    case 19:
                        k[2][2] = 40;
                        break;

                }
            }

            printf("\t%d", k[x][y]);

        }
    }
}
int checker_p1(int p1)
{


    switch(p1)
    {
        case 1:
            f = 1;
            break;

        case 2:
            f = 2;
            break;

        case 3:
            f = 3;
            break;

        case 4:
            f = 4;
            break;

        case 5:
            f = 5;
            break;

        case 6:
            f = 6;
            break;

        case 7:
            f = 7;
            break;

        case 8:
            f = 8;
            break;

        case 9:
            f = 9;
            break;
        default:
            printf("Error: Wrong Input");
    }
}
int checker_p2(int p2)
{


    switch(p2)
    {
        case 1:
            f = 11;
            break;

        case 2:
            f = 12;
            break;

        case 3:
            f = 13;
            break;

        case 4:
            f = 14;
            break;

        case 5:
            f = 15;
            break;

        case 6:
            f = 16;
            break;

        case 7:
            f = 17;
            break;

        case 8:
            f = 18;
            break;

        case 9:
            f = 19;
            break;
        default:
            printf("Error: Wrong Input");
    }
}
int game_check()
{
    int bf;

    if(k[0][0] == 30 && k[0][1] ==  30 && k[0][2] == 30){bf = 1;}
    else if(k[0][0] == 30 && k[1][0] == 30 && k[2][0] == 30){bf = 1;}
    else if(k[0][0] == 30 && k[1][1] == 30 && k[2][2] == 30){bf = 1;}
    else if(k[0][0] == 30 && k[1][1] == 30 && k[2][2] == 30){bf = 1;}
    else if(k[1][0] == 30 && k[1][1] == 30 && k[1][2] == 30){bf = 1;}
    else if(k[2][0] == 30 && k[2][1] == 30 && k[2][2] == 30){bf = 1;}
    else if(k[0][1] == 30 && k[1][1] == 30 && k[1][2] == 30){bf = 1;}
    else if(k[0][2] == 30 && k[1][2] == 30 && k[2][2] == 30){bf = 1;}
    else if(k[0][2] == 30 && k[1][1] == 30 && k[2][2] == 30){bf = 1;}
    else if(k[0][2] == 30 && k[1][1] == 30 && k[2][0] == 30){bf = 1;}
    else if(k[0][0] == 40 && k[0][1] == 40 && k[0][2] == 40){bf = 2;}
    else if(k[0][0] == 40 && k[1][0] == 40 && k[2][0] == 40){bf = 2;}
    else if(k[0][0] == 40 && k[1][1] == 40 && k[2][2] == 40){bf = 2;}
    else if(k[0][0] == 40 && k[1][1] == 40 && k[2][2] == 40){bf = 2;}
    else if(k[1][0] == 40 && k[1][1] == 40 && k[1][2] == 40){bf = 2;}
    else if(k[2][0] == 40 && k[2][1] == 40 && k[2][2] == 40){bf = 2;}
    else if(k[0][1] == 40 && k[1][1] == 40 && k[1][2] == 40){bf = 2;}
    else if(k[0][2] == 40 && k[1][2] == 40 && k[2][2] == 40){bf = 2;}
    else if(k[0][2] == 40 && k[1][1] == 40 && k[2][2] == 40){bf = 2;}
    else if(k[0][2] == 40 && k[1][1] == 40 && k[2][0] == 40){bf = 2;}

    return bf;
}

int main()
{

    int break_flag;

    int p1, p2;
    int move_flag;
    int flag = 0;




  while(flag == 0)
  {



    w();
    katakati_print();
    printf("\n\nplayer 1(30):\nEnter Move> ");
    scanf(" %d", &p1);

    move_flag = checker_p1(p1);
    katakati_print();
    system("cls");
    break_flag = game_check();
    if(break_flag == 1){
        printf("\n\n\n\t\t\t***PLAYER 1 WINS!***");
        break;
    }



    w();
    katakati_print();
    printf("\n\nPlayer 2(40):\nEnter Move> ");
    scanf(" %d", &p2);

    move_flag = checker_p2(p2);
    katakati_print();
    system("cls");
    break_flag = game_check();
    if(break_flag == 2){
        printf("\n\n\n\t\t\t***PLAYER 2 WINS!***");
        break;

    }
  }



}
