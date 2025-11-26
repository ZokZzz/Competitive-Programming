# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <math.h>
int main ()
{
unsigned long long int t, s, page , gauss ;
scanf ("%llu ", &t);
while (t--)
{
scanf (" %llu ", &s);
page = (- 1 + ( unsigned long long int ) sqrt (1 + 8 * s) ) / 2;
page ++;
gauss = ( page * ( page + 1) ) / 2;
printf ("%llu %llu\n", gauss - s, page );
}
return 0;
}
