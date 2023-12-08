#include <stdio.h>

// 20장 도전 1

void rotation(int arr[][4]) 
{
    int temp[4][4];

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            temp[j][3 - i] = arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            arr[i][j] = temp[i][j];
        }
    }
}

int main(void) 
{
    int arr[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    printf("회전 이전 배열:\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    rotation(arr);

    printf("\n회전 이후 배열:\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 20장 도전 2
// #include <stdio.h>

// void snail(int n) 
// {
//     int arr[n][n];
//     int num = 1;
//     int start1 = 0, end1 = n - 1;
//     int start2 = 0, end2 = n - 1;

//     while (start1 <= end1 && start2 <= end2) 
//     {
//         for (int i = start2; i <= end2; i++) 
//         {
//             arr[start1][i] = num++;
//         }
//         start1++;

//         for (int i = start1; i <= end1; i++) 
//         {
//             arr[i][end2] = num++;
//         }
//         end2--;

//         for (int i = end2; i >= start2; i--) 
//         {
//             arr[end1][i] = num++;
//         }
//         end1--;

//         for (int i = end1; i >= start1; i--) 
//         {
//             arr[i][start2] = num++;
//         }
//         start2++;
//     }

//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = 0; j < n; j++) 
//         {
//             printf("%2d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() 
// {
//     int n;

//     printf("배열의 크기를 입력하세요: \n");
//     scanf("%d", &n);

//     snail(n);

//     return 0;
// }


// 20장 도전 3

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int i;
//     srand(time(NULL));
//     printf("난수의 범위: 0부터 99까지");
//     for(i = 0; i < 5; i++)
//     {
//         int random_num = rand() % 100;
//         printf("난수 출력: %d ", random_num);
//     }
    
//     return 0;
// }

// 20장 도전 4

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand((unsigned int)time(NULL));

//     printf("주사위 결과: ");
    
//     int dice1 = rand() % 6 + 1; // 첫 번째 주사위 결과 (1부터 6까지)
//     int dice2 = rand() % 6 + 1; // 두 번째 주사위 결과 (1부터 6까지)
//     printf("첫 번째 주사위: %d, 두 번째 주사위: %d ", dice1, dice2);

//     return 0;
// }

// 20장 도전 5

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand((unsigned int)time(NULL));

//     int winCount = 0;
//     int drawCount = 0;

//     while (1) 
//     {
//         int userChoice, computerChoice;

//         printf("가위(1), 바위(2), 보(3) 중 하나를 선택하세요: ");
//         scanf("%d", &userChoice);

//         if (userChoice < 1 || userChoice > 3) 
//         {
//             printf("다시 선택해주세요.");
//             continue;
//         }

//         computerChoice = rand() % 3 + 1;

//         printf("당신은 ");
//         switch (userChoice) 
//         {
//             case 1:
//                 printf("가위");
//                 break;
//             case 2:
//                 printf("바위");
//                 break;
//             case 3:
//                 printf("보");
//                 break;
//         }

//         printf(" 선택, 컴퓨터는 ");
//         switch (computerChoice) 
//         {
//             case 1:
//                 printf("가위");
//                 break;
//             case 2:
//                 printf("바위");
//                 break;
//             case 3:
//                 printf("보");
//                 break;
//         }

//         if (userChoice == computerChoice) 
//         {
//             printf(", 비겼습니다.");
//             drawCount++;
//         } 
//         else if 
//         ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)) 
//         {
//             printf(", 이겼습니다!");
//             winCount++;
//         } 
//         else 
//         {
//             printf(", 졌습니다.");
//             break;
//         }
//     }

//     printf("게임의 결과: %d승, %d무", winCount, drawCount);

//     return 0;
// }

// 20장 도전 6
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void countStrikeAndBall(int computer[], int user[], int* strike, int* ball)
// {
//     strike = 0;
//     ball = 0;

//     for (int i = 0; i < 3; i++) 
//     {
//         if (computer[i] == user[i]) 
//         {
//             (strike)++;
//         } else {
//             for (int j = 0; j < 3; j++) 
//             {
//                 if (computer[i] == user[j]) 
//                 {
//                     (ball)++;
//                     break;
//                 }
//             }
//         }
//     }
// }

// int main(void)
// {
//     srand((unsigned int)time(NULL));

//     int computer[3];
//     int user[3];
//     int strike, ball;
//     int count = 0;

//     for (int i = 0; i < 3; i++) 
//     {
//         computer[i] = rand() % 10;
//         for (int j = 0; j < i; j++) 
//         {
//             if (computer[i] == computer[j]) 
//             {
//                 i--;
//                 break;
//             }
//         }
//     }

//     printf("게임을 시작.\n");

//     while (1) 
//     {
//         count++;

//         printf("세 개의 숫자를 입력하세요 (0에서 9까지): ");
//         scanf("%d %d %d", &user[0], &user[1], &user[2]);

//         int num = 1;
//         for (int i = 0; i < 3; i++) 
//         {
//             if (user[i] < 0 || user[i] > 9) 
//             {
//                 num = 0;
//                 break;
//             }
//         }

//         if (!num) 
//         {
//             printf("유효한 숫자를 입력하세요.\n");
//             continue;
//         }

//         countStrikeAndBall(computer, user, &strike, &ball);

//         printf("%dstrike, %dball\n", strike, ball);

//         if (strike == 3) 
//         {
//             printf("%d번만에 3스트라이크를 얻었습니다.\n", count);
//             break;
//         }
//     }

//     return 0;
// }
