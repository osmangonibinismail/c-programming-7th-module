// #include <stdio.h>
// int main(){

//     int a[5];

//     scanf("%d", &a[3]);

//     printf("%d", a[3]);
// }
// #include <stdio.h>
// int main()
// {

//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     printf("%d", a[3]);
// }
// #include <stdio.h>
// int main()
// {

//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%d ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     float a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%f", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%0.2f ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     float a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%f", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%0.2f ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     float a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%f", &a[i]);
//     }

//     a[4] += 250;

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%0.2f ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         a[i] += 100;
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%d ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         a[i] *= 100;
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%d ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     char a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%c", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%c ", a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     char a[5];

//     for (int i = 0; i < 5; i++)
//     {

//         scanf("%c", &a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         printf("%d ", &a[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {

//     int n;

//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {

//         sum += a[i];
//     }

//     printf("%d\n", sum);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {

//     int n;

//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {

//         sum += a[i];
//     }

//     printf("%d\n", sum);

//     double avg = (double) sum / n;

//     printf("%lf\n", avg);

//     return 0;
// }
// #include <stdio.h>
// #include <limits.h>

// int main()
// {

//     int n;

//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     int min = INT_MAX, max = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         if(a[i] < min){
//             min = a[i];
//         }

//         if(a[i] > max){
//             max = a[i];
//         }
//     }

//     printf("Minimum: %d, Maximum: %d\n", min, max);

//     return 0;
// }
#include <stdio.h>
#include <limits.h>

int main()
{

    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0];

    for (int i = 0; i < n; i++)
    {

        if(a[i] < min){
            min = a[i];
        }

        if(a[i] > max){
            max = a[i];
        }

        printf("Min: %d, Max: %d\n", min, max);
    }

    printf("Minimum: %d, Maximum: %d\n", min, max);

    return 0;
}