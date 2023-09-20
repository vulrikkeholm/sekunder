#include <stdio.h>
#include <math.h>

int main(void){
int sekunder,
    minutter,
    timer,
    dage,
    uger;

printf("Indtast antal sekunder:\n"); 
scanf("%d", &sekunder);

minutter = sekunder / 60;
timer = minutter / 60;
dage = timer / 24;
uger = dage / 7;

sekunder %= 60;
minutter %= 60;
timer %= 24;
dage %= 7;

printf("%d", uger);
printf(" uge(r), ");
printf("%d", dage);
printf(" dag(e), ");
printf("%d", timer);
printf(" time(r), ");
printf("%d", minutter);
printf(" minut(ter) og ");
printf("%d", sekunder);
printf(" sekund(er)\n");
return 0;
}