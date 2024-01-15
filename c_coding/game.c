#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>
int key,x=39,y=12,a=39,b,c,d=2000;
class game
{
    public:
    game()
    {
        _setcursortype(_NOCURSOR);
        textbackground(3);
        clrscr();
        textcolour(7);
        gotoxy(22,12);
        cout<<"loading";
        for(a=30;a<41;a++)
        {
            gotoxy(a,12);
            cout<<"$";
        }
        for(a=30;a<41;a++)
        {
            gotoxy(a,12);
            delay(100);
            cout<"*";
            gotoxy(41,12);
            delay(10);
            cout<<" "<<a+60<<"%";
        }
        for(b=1;b<100;b++)
        {
            clrscr();
            gotoxy(28,12);
            cout<<"A Game By Prince Lakhwani";
            delay(25);
        }
    }
    ~game()
    {
        //  _setcursortype(_NORMALCURSOR);
        //  nosound();
        getch();
    }
    void home()
    {
        gotoxy(1,1);
        cout<<"------";
        gotoxy(1,2);
        cout<<"|";
        gotoxy(5,2);
        cout<<"|";
        gotoxy(1,3);
        cout<<"------";
    }
    void won()
    {
        if((x==3)&&(y==2))
        {
            clrscr();
            gotoxy(35,12);
            cout<<"you won";getch();
            key=27;
        }
    }
    void spider()
    {
        gotoxy(a-10,y);
        cout<<"%";
    }
    void gameover()
    {
        if(a-10==x)
        {
            clrscr()
            gotoxy(31,12);
            cout<<"GAME Over";
            getch();
            key=27;
        }
    }
};
void main()
{
    game obj;
    do
    {
        clrscr();
        obj.home();
        gotoxy(x,y);
        cout<<"#";
        obj.spider();
        key=getch();
        obj.won();
        obj.gameover();
        if(key==75)
        {
            x--;
            a--;
            a--;
        }
        else if(key==80)
        {
            y++;
        }
        else if(key==72)
        {
            y--;
        }
        else if(key==77)
        {
            x++;
            a++;
            a++;
        }
        if(x>80)
        {
            x=1;
        }
        if(y>25)
        {
            y=1;
        }
        if(y<1)
        {
            y=25;
        }
        if(x<1)
        {
            x=80;
        }
        if(a-10>80)
        {
            a=11;
        }
        if(a-10<1)
        {
            a=90;
        }
    }while(key!=27);
    
}
