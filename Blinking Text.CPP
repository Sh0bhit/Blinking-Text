#include<constream.h>
#include<conio.h>
#include<dos.h>
void menu()
{ for(int i=50;i>0;i--)
   {  delay(120);
    gotoxy(i,2);
   cputs("Welcome ");

   }
   gotoxy(i,20);
   cputs("\n Press Enter for blinking text-->  ");
   getch();
   clrscr();
  }

  void main()
{clrscr();
menu();
constream c;
c<<setclr(1500);
gotoxy(5,2);
c<<"Coded By Shobhit Gupta ";
getch();
}