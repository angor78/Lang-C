#include <stdio.h>
#define TAB_SIZE 8
#define MAX_LINE 200
void detab();
void entab();
int get_line();

int main()
{
    char o[MAX_LINE];
    char p[MAX_LINE];

    printf("Символы табуляции и пробелы \n");
    printf("Введите строку:\t1:\t2:\t3:\t4:\t5:\n");
    
    for (int i = 0; i < MAX_LINE; ++i)
        p[i] = 0;

    for (int i = 0; i < MAX_LINE; ++i)
        o[i] = 0;
    int l_length;
    while ((l_length = get_line(p, MAX_LINE)) > 0 && l_length != EOF)
    {
        detab(o, p);
        printf("%s - result programm 20\n", o);
        for (int i = 0; i < MAX_LINE; ++i)
            p[i] = 0;
        entab(p, o);
        printf("%s - result programm 21\n", p);
    }
}

void detab()
{
    int column = 0;
    printf("Замена табов на пробелы.\n");
    printf("Tabs:\t:1\t:2\t:3\t:4\t:5\t:6\t:7\n");
    int c;
    while ((c = getchar()) != '\n')
    {
        if (c == '\t')
        {
            do
            {
                putchar('.');
                ++column;
            } while (column % TAB_SIZE != 0);
        }
        else
        {

            putchar(c);
            ++column;
        }
    }
}
void entab()
{

    int column = 0;
    int spaces = 0;
    int c;
    printf("Замена пробелов на табы.\n");
    printf("Tabs:\t:1\t:2\t:3\t:4\t:5\t:6\t:7\n");
    while ((c = getchar()) != '\n')
    {
        if (c == '\t')
            column += TAB_SIZE - (column % TAB_SIZE);
        else
            ++column;
        if (c == ' ')
        {
            ++spaces;
            if (column % TAB_SIZE == 0)
            {
                putchar('\t');
                spaces = 0;
            }
        }
        else
        {
            while (spaces > 0)
            {
                putchar(' ');
                --spaces;
            }
            putchar(c);
        }
    }
}

int get_line(char s[], int max_line)
{
    int c, i;
    for (i = 0; i < max_line - 1 && (c = getchar()) != '\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}
