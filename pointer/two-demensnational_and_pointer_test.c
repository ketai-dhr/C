#include <stdio.h>
#include <string.h>

// int main()
// {
//         char matrix[3][5] = {
//                 'I', 'l', 'o', 'v', 'e',
//                 'F', 'i', 's', 'h', 'C',
//                 '.', 'c', 'o', 'm', '!'
//         };
//         char *p;

//         p = &matrix[0][3];

//         printf("%c", *p);
//         printf("%c", *p++);
//         printf("%c", *++p);
//         printf("\n");

//         return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include<math.h>

// int main(int argc, char *argv[])
// {
//     int i, j;
//     int num_arg = argc - 1;
//     int num_arg_count = sqrt(num_arg);
//     // printf("%d", num_arg_count);

//     // if ((num_arg_count * num_arg_count) < num_arg)
//     // {
//     //     num_arg_count += 1;
//     // }
//     // printf("%d\n", num_arg_count * num_arg_count);

//     for (i = 0; i < num_arg_count; i++)
//     {
//         for (j = 0; j < num_arg_count; j++)
//         {
//             // printf("%s", argv[i*3+j]);
//             // printf("\n");
//             printf("%d ", atoi(argv[i * num_arg_count + j + 1]));
//         }
//         printf("\n");
//     }

//     return 0;
// }

int main()
{
    float guangzhou[][12] = {
        {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5},
        {59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
        {34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0}
    };

    char query_data;
    char *split_input;
    // const char string = "_";

    // float *list_guangzhou = &guangzhou;

    printf("Please enter the month which you want to query: ");
    scanf("%s", &query_data);

    split_input = strtok(&query_data, "-");
    
	while ( split_input != NULL ) 
	{
		printf("%s\n", split_input);
		split_input = strtok(NULL, "-");
	}


}