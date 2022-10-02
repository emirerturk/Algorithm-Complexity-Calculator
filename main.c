#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

FILE *dosya;
int fonk = 0;
char s1[100] = "O(n)=";
char s2[100];
char s3[100] = "1";
char arti[100] = {'+'};
int carpimN = 0;
int toplamN = 0;
int max = 255;
int satir = 0;
int kumeAc = 0;
char say0[10] = {'0'};
char say1[10] = {'1'};
char say2[10] = {'2'};
char say3[10] = {'3'};
char say4[10] = {'4'};
char say5[10] = {'5'};
char say6[10] = {'6'};
char say7[10] = {'7'};
char say8[10] = {'8'};
char say9[10] = {'9'};
int fonkSayac = 0;
int i = 0;
int sayac = 0;
int nSayac = 0;
int n2Sayac = 0;
int n3Sayac = 0;
int n4Sayac = 0;
int n5Sayac = 0;

void calisKontrol()
{
    if (fonkSayac == 0)
    {
        if (nSayac == 0)
        {

            if (fonk != 0)
            {
            }
        }
        else
        {

            while (1)
            {
                if (nSayac == 0)
                {
                    break;
                }
                if (nSayac == 1)
                {
                    break;
                }
                if (nSayac == 2)
                {
                    n2Sayac++;
                }
                if (nSayac == 3)
                {
                    n3Sayac++;
                }
                if (nSayac == 4)
                {
                    n4Sayac++;
                }
                if (nSayac == 5)
                {
                    n5Sayac++;
                }
                nSayac = 0;
                break;
            }
        }
    }
}

void YerKarmHesapla(char aktar[satir][max])
{
    int esitSayac = 0;
    int virgul = 0;
    int intSayac = 0;
    int shortSayac = 0;
    int floatSayac = 0;
    int doubleSayac = 0;
    int charSayac = 0;
    int diziintSayac = 0;
    int dizishortSayac = 0;
    int dizifloatSayac = 0;
    int dizidoubleSayac = 0;
    int dizicharSayac = 0;
    int matrischarSayac = 0;
    int matrisintSayac = 0;
    int matrisshortSayac = 0;
    int matrisfloatSayac = 0;
    int matrisdoubleSayac = 0;
    int sayacFonk = 0;

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if (aktar[i][j] == 'i' && aktar[i][j + 1] == 'n' && aktar[i][j + 2] == 't' && aktar[i][j + 3] != 'f')
            {
                if (aktar[i][j + 4] == 'm' && aktar[i][j + 5] == 'a' && aktar[i][j + 6] == 'i' && aktar[i][j + 7] == 'n')
                {
                    break;
                }

                intSayac++;
                for (int x = 0; x < max; x++)
                {
                    if (aktar[i][x] == '{')
                    {
                        intSayac--;
                        sayacFonk++;
                        i = i + 1;
                        break;
                    }
                    if (aktar[i + 1][x] == '{')
                    {
                        intSayac--;
                        sayacFonk++;
                        i = i + 2;
                        break;
                    }
                    if (aktar[i][x] == '=')
                    {
                        esitSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '=')
                            {
                                esitSayac++;
                            }
                        }

                        for (int z = x; z < max; z++)
                        {
                            if (aktar[i][z] == ',' && esitSayac != 0)
                            {
                                esitSayac--;
                                break;
                            }
                        }
                    }
                    if (aktar[i][x] == ',')
                    {
                        virgul++;
                    }
                    if (aktar[i][x] == '[')
                    {
                        intSayac--;
                        diziintSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '[')
                            {
                                diziintSayac--;
                                matrisintSayac++;
                            }
                        }
                        break;
                    }
                }
            }
            intSayac = intSayac + virgul;
            virgul = 0;
            esitSayac = 0;
            if (aktar[i][j] == 's' && aktar[i][j + 1] == 'h' && aktar[i][j + 2] == 'o' && aktar[i][j + 3] == 'r' && aktar[i][j + 3] == 't')
            {

                if (aktar[i][j + 4] == 'm' && aktar[i][j + 5] == 'a' && aktar[i][j + 6] == 'i' && aktar[i][j + 7] == 'n')
                {
                    break;
                }

                shortSayac++;
                for (int x = 0; x < max; x++)
                {
                    if (aktar[i][x] == '{')
                    {
                        shortSayac--;
                        sayacFonk++;
                        i = i + 1;
                        break;
                    }
                    if (aktar[i + 1][x] == '{')
                    {
                        shortSayac--;
                        sayacFonk++;
                        i = i + 2;
                        break;
                    }
                    if (aktar[i][x] == '=')
                    {
                        esitSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '=')
                            {
                                esitSayac++;
                            }
                        }

                        for (int z = x; z < max; z++)
                        {
                            if (aktar[i][z] == ',' && esitSayac != 0)
                            {
                                esitSayac--;
                                break;
                            }
                        }
                    }
                    if (aktar[i][x] == ',')
                    {
                        virgul++;
                    }
                    if (aktar[i][x] == '[')
                    {
                        dizishortSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '[')
                            {
                                dizishortSayac--;
                                matrisshortSayac++;
                            }
                        }
                        break;
                    }
                }
            }
            shortSayac = shortSayac + virgul;
            virgul = 0;
            esitSayac = 0;

            if (aktar[i][j] == 'd' && aktar[i][j + 1] == 'o' && aktar[i][j + 2] == 'u' && aktar[i][j + 3] == 'b' && aktar[i][j + 4] == 'l' && aktar[i][j + 5] == 'e')
            {
                if (aktar[i][j + 4] == 'm' && aktar[i][j + 5] == 'a' && aktar[i][j + 6] == 'i' && aktar[i][j + 7] == 'n')
                {
                    break;
                }

                doubleSayac++;
                for (int x = 0; x < max; x++)
                {
                    if (aktar[i][x] == '{')
                    {
                        i = i + 1;
                        doubleSayac--;
                        sayacFonk++;

                        break;
                    }
                    if (aktar[i + 1][x] == '{')
                    {
                        doubleSayac--;
                        sayacFonk++;
                        i = i + 2;
                        break;
                    }
                    if (aktar[i][x] == '=')
                    {
                        esitSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '=')
                            {
                                esitSayac++;
                            }
                        }

                        for (int z = x; z < max; z++)
                        {
                            if (aktar[i][z] == ',' && esitSayac != 0)
                            {
                                esitSayac--;
                                break;
                            }
                        }
                    }
                    if (aktar[i][x] == ',')
                    {
                        virgul++;
                    }
                    if (aktar[i][x] == '[')
                    {
                        dizidoubleSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '[')
                            {
                                dizidoubleSayac--;
                                matrisdoubleSayac++;
                            }
                        }
                        break;
                    }
                }
            }
            doubleSayac = doubleSayac + virgul;
            virgul = 0;
            esitSayac = 0;
            if (aktar[i][j] == 'f' && aktar[i][j + 1] == 'l' && aktar[i][j + 2] == 'o' && aktar[i][j + 3] == 'a' && aktar[i][j + 4] == 't')
            {

                if (aktar[i][j + 4] == 'm' && aktar[i][j + 5] == 'a' && aktar[i][j + 6] == 'i' && aktar[i][j + 7] == 'n')
                {
                    break;
                }

                floatSayac++;
                for (int x = 0; x < max; x++)
                {
                    if (aktar[i][x] == '{')
                    {
                        floatSayac--;
                        sayacFonk++;
                        i = i + 1;
                        break;
                    }
                    if (aktar[i + 1][x] == '{')
                    {
                        floatSayac--;
                        sayacFonk++;
                        i = i + 2;
                        break;
                    }
                    if (aktar[i][x] == '=')
                    {
                        esitSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '=')
                            {
                                esitSayac++;
                            }
                        }

                        for (int z = x; z < max; z++)
                        {
                            if (aktar[i][z] == ',' && esitSayac != 0)
                            {
                                esitSayac--;
                                break;
                            }
                        }
                    }
                    if (aktar[i][x] == ',')
                    {
                        virgul++;
                    }
                    if (aktar[i][x] == '[')
                    {
                        dizifloatSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '[')
                            {

                                dizifloatSayac--;
                                matrisfloatSayac++;
                            }
                        }
                        break;
                    }
                }
            }
            esitSayac = 0;
            floatSayac = floatSayac + virgul;
            virgul = 0;
            if (aktar[i][j] == 'c' && aktar[i][j + 1] == 'h' && aktar[i][j + 2] == 'a' && aktar[i][j + 3] == 'r')
            {

                if (aktar[i][j + 4] == 'm' && aktar[i][j + 5] == 'a' && aktar[i][j + 6] == 'i' && aktar[i][j + 7] == 'n')
                {
                    break;
                }

                charSayac++;
                for (int x = 0; x < max; x++)
                {
                    if (aktar[i][x] == '{')
                    {
                        i = i + 1;
                        charSayac--;
                        sayacFonk++;
                        break;
                    }
                    if (aktar[i + 1][x] == '{')
                    {
                        charSayac--;
                        sayacFonk++;
                        i = i + 2;
                        break;
                    }
                    if (aktar[i][x] == '=')
                    {
                        esitSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '=')
                            {

                                esitSayac++;
                            }
                        }

                        for (int z = x; z < max; z++)
                        {
                            if (aktar[i][z] == ',' && esitSayac != 0)
                            {

                                esitSayac--;
                                break;
                            }
                        }
                    }
                    if (aktar[i][x] == ',')
                    {

                        virgul++;
                    }
                    if (aktar[i][x] == '[')
                    {
                        dizicharSayac++;
                        for (int z = x + 1; z < max; z++)
                        {
                            if (aktar[i][z] == '[')
                            {
                                dizicharSayac--;
                                matrischarSayac++;
                            }
                        }
                        break;
                    }
                }
            }
            charSayac = charSayac + virgul;
            virgul = 0;
            esitSayac = 0;
        }
    }

    printf("\nYer karmasikligi=(%dn2+%dn+%d", ((4 * matrisintSayac) + (8 * matrisdoubleSayac) + (matrischarSayac) + (2 * matrisshortSayac) + (4 * matrisfloatSayac)), ((4 * diziintSayac) + (8 * dizidoubleSayac) + (dizicharSayac) + (2 * dizishortSayac) + (4 * dizifloatSayac) + sayacFonk), ((4 * intSayac) + (8 * doubleSayac) + (charSayac) + (2 * shortSayac) + (4 * floatSayac)));
}

void sayacKontrol()
{
    if (fonkSayac == 0)
    {
        if (carpimN == 0)
        {

            if (fonk != 0)
            {
            }
        }
        else
        {
            s2[0] = 'n';
            strcat(s1, s2);
            while (1)
            {
                if (carpimN == 0)
                {
                    break;
                }
                if (carpimN == 1)
                {
                    strcat(s1, say1);
                }
                if (carpimN == 2)
                {
                    strcat(s1, say2);
                }
                if (carpimN == 3)
                {
                    strcat(s1, say3);
                }
                if (carpimN == 4)
                {
                    strcat(s1, say4);
                }
                if (carpimN == 5)
                {
                    strcat(s1, say5);
                }
                if (carpimN == 6)
                {
                    strcat(s1, say6);
                }
                if (carpimN == 7)
                {
                    strcat(s1, say7);
                }
                if (carpimN == 8)
                {
                    strcat(s1, say8);
                }
                if (carpimN == 9)
                {
                    strcat(s1, say9);
                }
                carpimN = 0;
                break;
            }
            strcat(s1, arti);
        }
    }
}
void calismaSuresiniBul()
{
    FILE *rfile = fopen("code.txt", "r");
    FILE *wfile = fopen("code.c", "w");
    char line[1000];
    while (fgets(line, sizeof(line), rfile))
    {
        fprintf(wfile, "%s", line);
    }
    fclose(rfile);
    fclose(wfile);
    clock_t start, end;
    start = clock();
    system("gcc code.c && start a.exe && pause");
    end = clock();
    printf("Calisma suresi : %f", (double)(end - start) / CLOCKS_PER_SEC);
}
void karmasiklikHesapla(char aktar[satir][max], int c)
{

    for (i = c; i < satir; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if (aktar[i][j] == 'v' && aktar[i][j + 1] == 'o' && aktar[i][j + 2] == 'i' && aktar[i][j + 3] == 'd')
            {

                if (aktar[i][j + 5] == 'm' && aktar[i][j + 6] == 'a' && aktar[i][j + 7] == 'i' && aktar[i][j + 7] == '8')
                {
                    break;
                }
                if (aktar[i][j] == '{')
                {
                    karmasiklikHesapla(aktar, i + 1);
                }
                for (int a = 0; a < max; a++)
                {
                    if (aktar[i + 1][a] == '{')
                    {
                        karmasiklikHesapla(aktar, i + 2);
                    }
                }
            }
            if (aktar[i][j] == 'i' && aktar[i][j + 1] == 'n' && aktar[i][j + 2] == 't')
            {

                if (aktar[i][j + 4] == 'm' && aktar[i][j + 5] == 'a' && aktar[i][j + 6] == 'i' && aktar[i][j + 7] == 'n')
                {
                    break;
                }
                for (int z = 0; z < max; z++)
                {
                    if (aktar[i][z] == '{')
                    {
                        carpimN++;
                        fonkSayac++;
                        karmasiklikHesapla(aktar, i + 1);
                    }
                    if (aktar[i + 1][z] == '{')
                    {
                        carpimN++;
                        fonkSayac++;
                        karmasiklikHesapla(aktar, i + 2);
                    }
                }
            }
            if (aktar[i][j] == 'f' && aktar[i][j + 1] == 'l' && aktar[i][j + 2] == 'o' && aktar[i][j + 3] == 'a' && aktar[i][j + 4] == 't')
            {
                for (int z = 0; z < max; z++)
                {
                    if (aktar[i][z] == '{')
                    {
                        carpimN++;
                        fonkSayac++;
                        karmasiklikHesapla(aktar, i + 1);
                    }
                    if (aktar[i + 1][z] == '{')
                    {
                        carpimN++;
                        fonkSayac++;
                        karmasiklikHesapla(aktar, i + 2);
                    }
                }
            }
            if (aktar[i][j] == 'd' && aktar[i][j + 1] == 'o' && aktar[i][j + 2] == 'u' && aktar[i][j + 3] == 'b' && aktar[i][j + 4] == 'l' && aktar[i][j + 5] == 'e')
            {
                for (int z = 0; z < max; z++)
                {
                    if (aktar[i][z] == '{')
                    {
                        carpimN++;
                        fonkSayac++;
                        karmasiklikHesapla(aktar, i + 1);
                    }
                    if (aktar[i + 1][z] == '{')
                    {
                        carpimN++;
                        fonkSayac++;
                        karmasiklikHesapla(aktar, i + 2);
                    }
                }
            }
            if (aktar[i][j] == '{')
            {

                fonkSayac++;
                karmasiklikHesapla(aktar, i + 1);
            }
            if (aktar[i][j] == 'f' && aktar[i][j + 1] == 'o' && aktar[i][j + 2] == 'r')
            {
                carpimN++;

                if (aktar[i + 1][j] == 'f' && aktar[i + 1][j + 1] == 'o' && aktar[i + 1][j + 2] == 'r')
                {

                    carpimN++;
                    i++;
                }
                for (int x = i; x < satir; x++)
                {
                    for (int y = 0; y < max; y++)
                    {
                        if (aktar[x][y] == '{')
                        {

                            fonkSayac++;
                            karmasiklikHesapla(aktar, x + 1);

                            sayacKontrol();
                        }
                    }
                }
            }
            if (aktar[i][j] == '}')
            {
                fonkSayac--;
                sayacKontrol();
                break;
            }

            if (aktar[i][j] == 'd' && aktar[i][j + 1] == 'o')
            {
                int doKumeGir, doKumeCik;
                int x, y;
                for (x = i; x < satir; x++)
                {
                    for (y = 0; y < max; y++)
                    {
                        if (aktar[x][y] == '{' || aktar[x + 1][y] == '{')
                        {
                            doKumeGir++;
                        }
                        if (aktar[x][y] == '}' && doKumeGir != 0)
                        {
                            doKumeGir--;
                            doKumeCik++;
                            i = x;
                            break;
                        }
                    }
                    if (aktar[x][y] == '}' && doKumeGir != 0)
                    {
                        doKumeGir--;
                        doKumeCik++;
                        i = x;
                        break;
                    }
                }

                for (int k = i; k < satir; k++)
                {

                    for (int l = 0; l < max; l++)
                    {
                        if (aktar[k][l] == 'w' && aktar[k][l + 1] == 'h' && aktar[k][l + 2] == 'i' && aktar[k][l + 3] == 'l' && aktar[k][l + 4] == 'e')
                        {
                            carpimN++;

                            for (int m = k; m < satir; m++)
                            {
                                for (int n = 0; n < max; n++)
                                {
                                    if (aktar[m][n] == '{')
                                    {

                                        fonkSayac++;
                                        karmasiklikHesapla(aktar, m + 1);
                                    }
                                    else
                                    {
                                        karmasiklikHesapla(aktar, m);
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if (aktar[i][j] == 's' && aktar[i][j + 1] == 'w' && aktar[i][j + 2] == 'i' && aktar[i][j + 3] == 't' && aktar[i][j + 4] == 'c' && aktar[i][j + 5] == 'h')
            {
                carpimN++;
                for (int x = c; x < satir; x++)
                {
                    for (int y = 0; y < max; y++)
                    {

                        if (aktar[x][y] == '{')
                        {

                            fonkSayac++;
                            karmasiklikHesapla(aktar, x + 1);
                        }
                    }
                }
            }
        }
    }

    if (i == satir)
    {

        char enBuyuk = '0';

        for (int x = 0; x < max; x++)
        {
            if (s1[x] == 'n')
            {
                if (enBuyuk < s1[x + 1])
                {
                    enBuyuk = s1[x + 1];
                }
            }
        }
        if (enBuyuk == '0')
        {

            strcpy(s1, "O(n)=O(1)");
            printf("\nZaman karmasikligi: %s", s1);
        }
        else
        {

            strcpy(s1, "O(n)=n");
            printf("\nZaman karmasikligi: %s", s1);
            printf("%c\n", enBuyuk);
        }
        YerKarmHesapla(aktar);
        printf(" O(n%c)", enBuyuk);
        printf("\n");
        fonkSayac = 0;
        calismaSuresiniBul();

        exit(1);
    }
}

int main()
{
    char x[max];
    char aktar[1000][max];
    dosya = fopen("code.txt", "r");
    if (dosya == NULL)
    {
        puts("Dosya acilamadi");
        exit(1);
    }
    else
    {
        while (fgets(x, max, dosya))
        {
            for (int i = 0; i < max; i++)
            {
                aktar[satir][i] = x[i];
            }
            satir++;
        }
    }

    fclose(dosya);
    karmasiklikHesapla(aktar, 0);
    return 0;
}
