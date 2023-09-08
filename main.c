#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void rush(int a, int b)
{
    int i = 1;  //sloupec
    int j = 1;  //radek

    while(j <= b)
    {
        while(i <= a)
        {
            if(i == 1 && j == 1 || i == a && j == 1)
            {
                ft_putchar('A');
            }
            else if(i == 1 && j == b || i == a && j == b)
            {
                ft_putchar('C');
            }
            else if(i == 1 || j == 1 || i == a || j == b){
                ft_putchar('B');
            }
            else
            {
                ft_putchar(32);
            }
            i++;
        }
        j++;
        i = 1;
        ft_putchar('\n');
    }
}



int main(void)
{
    rush(4,4);
    return (0);
}