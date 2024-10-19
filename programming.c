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
#include <stdio.h>
int main()
{

    char a[5];

    for (int i = 0; i < 5; i++)
    {

        scanf("%c", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%d ", &a[i]);
    }

}