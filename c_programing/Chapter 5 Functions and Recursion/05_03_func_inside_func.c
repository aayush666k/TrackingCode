#include <stdio.h>
void Goodmorning();
void Goodafternoon();
void Goodnight();

int main()
{
    Goodmorning();

    return 0;
}
void Goodmorning()
{
    printf("Good Morming Aayush\n");
    Goodafternoon();
}
void Goodafternoon()
{
    printf("Good Afternoon Aayush\n");
    Goodnight();
}
void Goodnight()
{
    printf("Good Night Aayush\n");
}