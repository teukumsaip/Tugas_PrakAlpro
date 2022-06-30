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
    gotoxy(BATAS_KANAN + 5, 10); cout << "CONTROL";
    gotoxy(BATAS_KANAN + 5, 11); cout << "W : ATAS ";
    gotoxy(BATAS_KANAN + 5, 12); cout << "S : BAWAH";
    gotoxy(BATAS_KANAN + 5, 13); cout << "D : KANAN";
    gotoxy(BATAS_KANAN + 5, 14); cout << "A : KIRI";
    gotoxy(BATAS_KANAN + 5, 16); cout << "Twitter";
    gotoxy(BATAS_KANAN + 5, 17); cout << "@mhdsaip";
    gotoxy(BATAS_KANAN + 5, 18); cout << "Instagram";
    gotoxy(BATAS_KANAN + 5, 19); cout << "@ahmd.saip";
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
}

int abs(int a)
{
    if(a < 0) return -a;
}

void batangDarah(int a)
{
    gotoxy(1, 4);
    cout << "HEALTH BAR : ";
    gotoxy(1, 5);
    for(int i = 1; i <= a / 10; i++)
    {
        cout << BATANG;
    }
    for(int i = 1; i <= 10 - (a / 10); i++)
    {
        cout << KOTAK;
    }
}

void jarak(int iJarak)
{
    gotoxy(1, 7);
    cout << "JARAK :";
    gotoxy(1, 8);
    cout << iJarak;
}

void Speed(int speed)
{
    gotoxy(1, 10);
    cout << "LEVEL :";
    gotoxy(1, 11);
    cout << "    ";
    gotoxy(1, 11);
    cout << speed;
}

class mobil
{
    public :
    int x,y,darah, kebal;
    bool exis;
    string gambar[5];
    mobil()
    {
        x = 25;
        y = 20;
        exis = false;
        darah = 100;
        kebal = 0;
        gambar[0] = " - ";
        gambar[1] = "0+1";
        gambar[2] = " + ";
        gambar[3] = "0+1";
    }
    void setPos(int a, int b)
    {
        x = a;
        y = b;
    }
    void keKiri()
    {
        if(x > 20)
        {
            hapus();
            x -= 1;
        }
    }
    void keKanan()
    {
        if(x + 2 < 56)
        {
            hapus();
            x += 1;
        }
    }
    void keBawah()
    {
        if(y + 3 <= 23)
        {
            hapus();
            y += 1;
        }
    }
    void keAtas()
    {
        if(y + 3 > 3)
        {
            hapus();
            y -= 1;
        }
    }
    void hapus()
    {
        gotoxy(x+1, y);   cout << " ";
        gotoxy(x, y+1);   cout << "   ";
        gotoxy(x+1, y+2); cout << " ";
        gotoxy(x, y+3);   cout << "   ";
    }
    bool cekTabrakan(mobil a)
    {
        if((a.y >= y && a.y <= y+3) && (abs(a.x - x) < 3))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void gores()
    {
        for(int i = y; i <= (y + 3); i++)
        {
            gotoxy(x, i);
            for(int j = 0; j < gambar[i - y].length(); j++)
            {
                if(gambar[i - y][j] == '0') cout << char(221); else
                if(gambar[i - y][j] == '1') cout << char(222); else
                if(gambar[i - y][j] == '+') cout << BATANG; else
                if(gambar[i - y][j] == '-') cout << char(220); else
                cout << " ";
            }
        }
    }
    void buatGambar()
    {
        if(kebal == 0)
        {
            gores();
        }
        else
        {
            if(kebal % 2 == 0)
            {
                gores();
            }
            else
            {
                hapus();
            }
        }
    }
};

void tulisTengah(string s, int y)
{
    gotoxy(40 - (s.length() / 2), y);
    cout << s;
}

void tidur(int a)
{
    time_t now = clock();
    while((clock() - now) < a) {};
}

void opening()
{
    tulisTengah("Bersedia", 10);
    tidur(1000);
    tulisTengah("        ", 10);
    tulisTengah("3", 10);
    tidur(1000);
    tulisTengah("2", 10);
    tidur(1000);
    tulisTengah("1", 10);
    tidur(1000);
    tulisTengah(" ", 10);
}

int main()
{
    system("color f0");
    int spk = 0;
    float fSpk = 0;
    while(spk <= 0)
    {
        system("cls");
        tulisTengah("==============================", 7);
        tulisTengah("NASCAR RUMBLE by Teuku Muhammad Saif", 8);
        tulisTengah("NIM : 1217050138 | Kelas : Teknik Informatika C | Fakultas SAINS dan Teknologi", 9);
        tulisTengah("UIN Sunan Gunung Djati Bandung", 10);
        tulisTengah("==============================", 11);
        tulisTengah("Masukkan Tingkat Kesulitan [Berupa Angka]", 12);
        tulisTengah("Kecepatan Sesuai Dengan Tingkat Kesulitan", 13);
        tulisTengah("Minimal 1", 14);
        tulisTengah("Follow Me :",19);
        tulisTengah("Twitter : @mhdsaip | Fb : Saif Muhammad Asy-Syafii | WA : 082374535639", 20);
        tulisTengah("ID Line : 0405160703| IG : @ahmd.saip | ID Discord : saip#1649", 21);
        tulisTengah("Masukkan angka [ kecil dari 99 ]: ", 15);
        
        cin >> fSpk;
        spk = (int) fSpk;
    }
    system("cls");
    srand(clock());
    mobil pemainUtama;
    mobil enemy[4];
    char control = ' ';
    enemy[0].setPos(20 + rand()%34, 0);
    enemy[1].setPos(20 + rand()%34, 0);
    enemy[2].setPos(20 + rand()%34, 0);
    enemy[0].exis = true;
    bool mulai = false;
    int spasi = 8, awal = 0, nMusuh = 0, iJarak = 0;
    batangDarah(pemainUtama.darah);
    float before = clock();
    gambarLatar();
    Credit();
    while(pemainUtama.darah > 0 && (spk - iJarak / 200) > 0)
    {
        Speed(spk - iJarak / 200);
        iJarak++;
        if(awal > 8) awal = 0;
        gambarJalan(spasi, awal);
        awal++;
        if(kbhit())
        {
            control = getch();
            control = toupper(control);
        }
        switch (control)
        {
            case 'W' : pemainUtama.keAtas(); break;
            case 'S' : pemainUtama.keBawah(); break;
            case 'D' : pemainUtama.keKanan(); break;
            case 'A' : pemainUtama.keKiri(); break;
        }
        pemainUtama.buatGambar();

        for(int i = 0; i <= 2; i++)
        {
            if(enemy[i].exis == true)
            {
                enemy[i].keBawah();
                enemy[i].buatGambar();
                if(enemy[i].y > 20)
                {
                    enemy[i].hapus();
                    enemy[i].y = 0;
                    enemy[i].x = 20 + rand()%34;
                    enemy[i].exis = false;
                    nMusuh++;
                }
                if(enemy[i].cekTabrakan(pemainUtama))
                {
                    if(pemainUtama.kebal == 0)
                    {
                        pemainUtama.darah -= 10;
                        pemainUtama.kebal = 45;
                        batangDarah(pemainUtama.darah);
                    }
                }
            }
            else
            {
                nMusuh = i - 1;
                if(nMusuh < 0) nMusuh = 3;
                if(enemy[nMusuh].y >= 7)
                {
                    enemy[i].exis = true;
                }
            }
            if(pemainUtama.kebal > 0)
            {
                pemainUtama.kebal--;
            }
            jarak(iJarak);
        }
        if(mulai == false)
        {
            opening();
            mulai = true;
        }
        control = ' ';
        tidur(spk - iJarak / 200);
    }
    spk -= iJarak / 200;
    system("cls");
    gotoxy(20, 12); cout << "Game Berakhir Score Anda : " << (iJarak / spk) + pemainUtama.darah * 100;
    gotoxy(20, 13); cout << "Total Waktu Bermain      : " << (clock() - before) / 1000 << " Detik";
    tulisTengah("=========================================", 16);
    tulisTengah("Terimakasih telah bermain.", 17);
    tulisTengah("=========================================", 18);
    tidur(5000);
    getch();
}
