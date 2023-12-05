#include<stdio.h>
#include<math.h>



int main()
{
    double credit;

    int counter = 0;

    double per;

    double payperMonth;

    scanf("%d %d %d",&credit,&per,&payperMonth);

    while(credit > 0)
    {   
        credit = credit * (per + 100) / 100;

        credit -= payperMonth;




        printf("%d\t%d\t%d\n",credit,per,payperMonth);
    }

}