#include <stdio.h>

void split_time(long int total_sec, int *hr, int *min, int *sec)
{
  *hr  = total_sec / 3600;
  *min = total_sec % (3600) / 60;
  *sec = total_sec % 60;
}

int main()
{
    long int tot_sec;
    int hrs, mins, secs;

    printf("Input number of seconds from midnight: ");
    scanf("%i", &tot_sec);

    split_time(tot_sec, &hrs, &mins, &secs);

    printf("\nTime after splitting: %i hours, %i minutes, %i seconds", hrs, mins, secs);
}
