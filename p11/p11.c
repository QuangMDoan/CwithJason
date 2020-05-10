#include <stdio.h>

int main()
{
    int ctr;
    int idSearch;
    int found = 0;

    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10]  = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};

    int tempID, inner, outer, didswap, i;
    float tempBal;

    for(outer = 0; outer < 9; outer++)
    {
        int didSwap = 0;
        for(inner = outer; inner < 10; inner++)
        {
            if(custID[inner] <custID[outer])
            {
                tempID = custID[inner];
                tempBal = custBal[inner];
                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1;
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
        }
    }

    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check");
    scanf("%d", &idSearch);

    for(ctr=0; ctr<10;ctr++)
    {
        if(idSearch == custID[ctr])
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        if(custBal[ctr] > 100.00)
        {
            printf("\n** That customer's balance is $%.2f.\n", custBal[ctr]);
            printf("No additional credit.\n");
        }
        else
        {
            printf("\n** The customer's credit is good!\n");
        }
    }
    else
    {
        printf(" You must have typed an incorrect customerID.");
        printf("\n ID %3d was not found in list.\n", idSearch);
    }

    return(0);
}