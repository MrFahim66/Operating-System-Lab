#include<stdio.h>

int main()
{
    int arrival_time[5], waiting_time[5], turn_around_time[5], burst_time[5], total_time, process[5];

    for(int i = 0; i<5; i++)
    {
        
        printf("Enter the Arrival Time: ");
        scanf("%d", &arrival_time[i]);
        printf("Enter the Burst Time: ");
        scanf("%d", &burst_time[i]);

        
    }

    printf("Process     Arrival Time    Burst Time\n");

    for(int i = 0; i<5; i++)
    {
        printf("%d              %d               %d\n", i+1, arrival_time[i], burst_time[i]);
    }

    printf("Process   Start Time    End Time     Waiting Time     Turn Around Time\n");

    total_time = arrival_time[1];
    for(int i = 0; i<5; i++)
    {

        int start_time = total_time;
        waiting_time[i] = total_time - arrival_time[i];
        turn_around_time[i] = waiting_time[i] + burst_time[i];
        
        total_time += burst_time[i];
        printf("%d            %d              %d              %d               %d\n", i+1, start_time, total_time, waiting_time[i], turn_around_time[i]);
        printf("\n");
    }

    return 0;
}