#include <iostream>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

#define KOTAK char(178)
#define BATAS_KIRI 16
#define BATAS_KANAN 59
#define BATANG char(219)

using namespace std;

void gotoxy(int x, int y)
{
        COORD koord = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), koord);
}

void Credit()
{
    gotoxy(BATAS_KANAN + 5, 15); cout << "CONTROL";
    gotoxy(BATAS_KANAN + 5, 16); cout << "W : ATAS ";
    gotoxy(BATAS_KANAN + 5, 17); cout << "S : BAWAH";
    gotoxy(BATAS_KANAN + 5, 18); cout << "D : KANAN";
    gotoxy(BATAS_KANAN + 5, 19); cout << "A : KIRI";

}

void gambarLatar()
{
    for(int i = 0; i <= 24; i++)
    {
        gotoxy(BATAS_KIRI + 3, i); cout << BATANG;
        gotoxy(BATAS_KANAN - 2, i); cout << BATANG;
        gotoxy(BATAS_KIRI, i); cout << KOTAK << KOTAK;
        gotoxy(BATAS_KANAN, i); cout << KOTAK << KOTAK;
    }
}
void gambarJalan(int spasi, int awal)
{
      for(int i = awal + 1; i <= 24; i += spasi)
      {
              gotoxy(BATAS_KIRI, i - 1); cout << KOTAK << KOTAK;
              gotoxy(BATAS_KANAN, i - 1); cout << KOTAK << KOTAK;
              gotoxy(BATAS_KIRI, i); cout << "  ";
              gotoxy(BATAS_KANAN, i); cout << "  ";
      }
