#include<stdio.h>

int main()
{
    int process[5], waiting_time[5], turn_around_time[5], burst_time[5], total_time;

    for(int i = 0; i<5; i++)
    {  
        printf("Enter the Burst Time of process %d\n: ", i+1);
        scanf("%d", &burst_time[i]);
        process[i] = burst_time[i];
    }

    printf("Process    Burst Time\n");

    for(int i = 0; i<5; i++)
    {
        printf("%d              %d\n", i+1, burst_time[i]);
    }

    int temp = 0;

    for(int i = 0; i<5; i++)
    {
        for(int j = i+1; j<5; j++)
        {
            if(burst_time[i] > burst_time[j])
                {
                    temp = burst_time[i];
                    burst_time[i] = burst_time[j];
                    burst_time[j] = temp;
                }
        } 
    }

    printf("After sorting: \n");

    printf("Process    Burst Time\n");

    for(int i = 0; i<5; i++)
    {
        printf("%d              %d\n",process[i], burst_time[i]);
    }

    printf("Start Time    End Time     Waiting Time     Turn Around Time\n");

    total_time = 0;
    int arrival_time = 0;
    for(int i = 0; i<5; i++)
    {

        int start_time = total_time;
        waiting_time[i] = start_time - arrival_time;
        total_time += burst_time[i];
        turn_around_time[i] = total_time - start_time;
        printf("%d              %d                    %d                 %d\n", start_time, total_time, waiting_time[i], turn_around_time[i]);
        printf("\n");
    }

    return 0;
}