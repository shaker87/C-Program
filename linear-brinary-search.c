#include<stdio.h>

main()
{
    int A[20], n, o, search, i, j, k, ckey, as_or_des, first, middle, last;


    printf("Press 1 for linear search.\nPress 2 for binary search. \nPress 0 for exit. \n");
    printf("Enter your choice: \n");
    scanf("%d", &ckey);

    if(ckey == 1)
    {
        printf("You have chosen linear search algorithm to solve the problem.\n");

    }
    if(ckey == 2)
    {
        printf("You have chosen binary search algorithm to solve the problem. \n");
        printf("Press 1 for ascending order input.\nPress 2 for descending order input. \nPress 0 for exit. \n");
        printf("Enter your choice: \n");
        scanf("%d", &as_or_des);

    }

    if(as_or_des == 1)
    {
        printf("You have chosen ascending order input for algorithm.\n");

    }
    if(as_or_des == 2)
    {
        printf("You have chosen descending order input for algorithm.\n");

    }



    printf("Enter how many number insert: \n");
    scanf("%d", &n);

    printf("Enter the numbers \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

    }
    printf("Enter the search item: \n");
    scanf("%d", &search);

    if(ckey == 1)
    {
        for(j = 0; j < n; j ++)
        {
            if(search == A[j])
            {
                break;
            }
        }
        if (j < n)
        {
            printf("%d is present at index %d",search, i);
        }
        else
        {
            printf("%d not present", search);
        }
    }

    if(ckey == 2)
    {

        if(as_or_des == 1)
        {
            first = 0;
            last = n - 1;
            middle = (first + last) / 2;
            while(first <= last)
            {
                if(A[middle] < search)
                {
                    first = middle + 1;
                }
                else if(A[middle] == search)
                {
                    printf("%d is present at index %d \n",search, middle + 1);
                    break;
                }
                else
                {
                    last = middle -1;

                }

                middle = (first + last) / 2;
            }

            if(first > last)
            {
                printf("Not found! \n");
            }
        }
        if(as_or_des == 2)
        {

            first = 0;
            last = n - 1;
            middle = first + (last - first) / 2;
            while(first <= last)
            {

                if(A[middle] < search)
                {
                    first = middle + 1;
                    printf("while run if! %d \n", middle);

                }
                else if(A[middle] == search)
                {

                    printf("%d is present at index %d \n", search, middle + 1);
                    break;
                }
                else
                {
                    last = middle - 1;

                }

                middle = first + (last - first) / 2;

            }

            if(first > last)
            {
                printf("Not found! \n");
            }

        }
    }

}



