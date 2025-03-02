#include<stdio.h> //282.1
#include<math.h>
int main()
{
    const int n = 10;
    int a[n];        
    int i, imax, imin, ibeg, iend, counter;

    printf("Введите %d элементов массива:\n", n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for(i = imax = imin = 0; i < n; i++)
    {
        if(a[i] > a[imax]) imax = i;
        if(a[i] < a[imin]) imin = i;
    }
    printf("\n max = %d\t min = %d\t \n", a[imax],a[imin]);
    ibeg = imax < imin ? imax : imin;
    iend = imax < imin ? imin : imax;
    printf("\n ibeg=%d\t iend=%d\n", ibeg, iend);
    // for(counter = 0, i = ibeg + 1; i < iend; i++)
    for(counter = 0, i = 0; i < 10; i++)
    {
        if(a[i] > 0) {
          counter++;  
        }
    }
    printf("\n The number of positive elements = %d\n", counter);
    return 0;
}