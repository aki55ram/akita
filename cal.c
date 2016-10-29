#include <stdio.h>

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main()
{
    enum week today;
    today = wednesday;
if(today==0)
printf("Holiday");
else
printf("Workingday");
    return 0;
}