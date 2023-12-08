#include <stdio.h>

// 챕터 10
// 도전1
// int main(void)
// {
//     int num, result;
//     printf("16진수로 변환할 10진수 정수를 입력하여 주세요 : ");
//     scanf("%d", &num);
//     printf("%X",num);
// }

// 도전 3
// int main(void)
// {
//     int num1,num2,i,max;
//     printf("두 개의 정수 입력 : ");
//     scanf("%d %d",&num1,&num2);
//     for (i = 1; i<=num1&& i<=num2; ++i)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//             max = i;
//     }
//     printf("%d\n",max);
//     return 0;
// }

// 도전 4
// int main(void)
// {
//     int cream=1, snack=1, coke=1;
//     printf("현재 당신이 소유하고 있는 금액 : 3500원\n");
//     for(cream=1;cream<7;++cream)
//         for(snack=1;snack<5;++snack)
//             for(coke=1;coke<9;++coke)
//             if(cream*500+snack*700+coke*400==3500)
//     printf("빵%d개 과자%d개 콜라%d개\n",cream,snack,coke);
//     printf("어떻게 구입하시겠습니까?");
// }

// 도전 6
// int main(void)
// {
//     int second, h, m, s;
//     printf("초(second)를 입력하세요: ");
//     scanf("%d", &second);
//     h = second / 3600; 
//     int second2 = second % 3600;
//     m = second2 / 60;
//     s = second2 % 60;
//     printf("%d시간 %d분 %d초.\n",h, m, s);
//     return 0;
// }

// ---------------금붕어
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand(time(NULL));
//     int random = 0;
//     int fishcase = 0;
//     int fish = 2, baby = 0, total = 0;
//     int turn=0;
//     int i=0;
//     int fish_kill=rand() % (5-2+1)+2;
//     char name1[50], name2[50];
//     printf("금붕어(남)의 애칭을 입력해주세요.(한글or영어) : ");
//     scanf("%s",&name1);
//     printf("금붕어(여)의 애칭을 입력해주세요.(한글or영어) : ");
//     scanf("%s",&name2);
//     while (fishcase<500)
//     {
//         turn+=1;
//         random = rand() % 5+1;
//         fishcase += random;
//         if (turn>=2)
//             for (i=1;i<=fishcase;i++)
//             {
//                 random = rand() % 5+1;
//                 baby += random;
//             }
//         fishcase += baby;
//         fishcase -=fish_kill;

//     }
//     printf("%s과(와) %s의 새끼들은\n",name1,name2);
//     printf("이 어항에 총 %d 쌍 있습니다.\n",fishcase);
//     printf("어항이 가득찬 턴은 %d 턴입니다.\n",turn);
// }

// 자판기
// int main(void)
// {
//     int total, number,money;
//     printf("돈을 넣어주세요 : ");
//     scanf("%d", &money);
//     while(money > 899)
//     {
//         printf(" 1. 콜라 : 1200원 \n 2. 우주맛 콜라 : 1900원 \n 3.제로콜라 : 1200원 \n 4.스프라이트 : 1100원 \n 5.환타 : 900원 \n 6.닥터페퍼 : 1100 \n 7.몬스터 : 1800원 \n 8.파워에이드 : 1900원 \n 9.네스티 : 1600원 \n 10.글라소 비타민 워터 : 2100원 \n 11.미닛메이드 : 1700원 \n 12.조지아 커피 : 900원 \n 13.암바사 : 900원 \n 14.마테차 : 1700원 \n 15.계산하기 \n 16.종료하기 \n");
//         if (money>899)
//         {
//         total ;
//         printf("원하는 음료의 숫자를 입력해주세요 : ");
//         scanf("%d", &number);
//             if (number == 1)
//                 total += 1200;
//             if (number == 2)
//                 total += 1900;
//             if (number == 3)
//                 total += 1200;
//             if (number == 4)
//                 total += 1100;
//             if (number == 5)
//                 total += 900;
//             if (number == 6)
//                 total += 1100;
//             if (number == 7)
//                 total += 1800;
//             if (number == 8)
//                 total += 1900;
//             if (number == 9)
//                 total += 900;
//             if (number == 10)
//                 total += 2100;
//             if (number == 11)
//                 total += 1700;
//             if (number == 12)
//                 total += 900;
//             if (number == 13)
//                 total += 900;
//             if (number == 14)
//                 total += 1700;
//             if (number == 15)
//                 printf("선택하신 음료와 잔돈 %d 원이 나옵니다.\n",money-total);
//             if (number == 16)
//                 printf("종료합니다. 금액 %d 원을 돌려드립니다.\n",money);
//             if (number > 17)
//                 printf("잘못입력하셨습니다. 다시 입력해주세요.\n");
//             if (total>money)
//                 printf("주문중이신 음료의 값이 넣은 금액보다 많습니다. 종료합니다. 금액 %d원이 반환됩니다.\n",money);           
//         }
//         else
//         printf("돈이 부족합니다. 종료합니다.");
//     }
// }

// 1~10까지 1씩 증가
// int main(void)
// {
//     int i = 1;
    
//     while (i <= 10)
//     {
//         printf("%d\n", i);
//         i++;
//     }
// }

// 10~1까지 1씩 감소
// int main(void)
// {
//     int i = 10;

//     while (i>=1)
//     {
//         printf("%d\n",i);
//         i--;
//     }
    
// }

// 1~100까지 합
// int main(void)
// {
//     int sum = 0;
//     for (int i = 0; i < 101; i++)
//     {
//         sum += i;

//     }
//     printf("%d",sum);
//     return 0;

// }

// 1~100까지 짝수 합
// int main(void)
// {
//     int sum = 0;
//     for (int i = 2; i < 101; i+=2)
//     {
//         sum += i;

//     }
//     printf("%d",sum);
//     return 0;

// }

// 1~100까지 홀수 더하기 짝수 빼기
// int main(void)
// {
//     int sum = 0;
//     int i = 0;
//     for (int i = 1; i < 101; i++)
//     {
//         if (i % 2 == 0)
//             sum -= i;
//         if (i % 2 >= 1)
//             sum += i;

//     }
//     printf("%d",sum);
//     return 0;
// }

// 5의 계승 구하기
// int main(void)
// {
//     int i = 0, total = 1;
//     for (i=1; i < 6; i++)
//     {
//         total = total*i;
//     }
//     printf("5! = %d\n",total);

//     return 0;
// }

// 약수 구하기
// int main(void)
// {
//     int i = 0;
//     for (int i = 1; i < 11; i++)
//     {
//         if (10 % i == 0)
//         printf("%d\n",i);
//     }
// }

// 공약수 구하기
// int main(void)
// {
//     int i = 0;
//     for (i = 1; i<25; i++)
//     {
//         if (24 % i == 0 && 18 % i == 0)
//         printf("%d\n",i);
//     }
//     return 0;
// }

// 두 수 중 큰 수 찾기
// int main(void)
// {
//     int a = 0, b = 0;
//     printf("두개의 정수 입력하세요 : ");
//     scanf("%d %d",&a , &b);

//     if (a>b)
//     {
//         printf("%d",a);
//     }
//     if (a<b)
//     {
//         printf("%d",b);
//     }
//     return 0;

// }

// 양수 음수 판별하기
// int main(void)
// {
//     int a;
//     printf("숫자 하나를 입력하세요 : ");
//     scanf("%d",&a);

//     if (a>0)
//     printf("양수");
//     if (a<0)
//     printf("음수");
//     if (a==0)
//     printf("0");
    
//     return 0;
// }

// 세 수 중 가장 큰 수 찾기
// int main(void)
// {
//     int max, a, b;
//     printf("첫번째 숫자를 입력하세요 : ");
//     scanf("%d", &max);
//     printf("두번째 숫자를 입력하세요 : ");
//     scanf("%d", &a);
//     printf("세번째 숫자를 입력하세요 : ");
//     scanf("%d", &b);    

//     if (a>max)
//     {
//         max = a;
//     }
//     if (b>max)
//     {
//         max = b;
//     }
//     printf("%d", max);
//     return 0;

// }

// 숫자입력하여 홀수 짝수 구하기
// int main(void)
// {
//     int num;
//     printf("숫자를 입력해주세요 : ");
//     scanf("%d", &num);
//     if (num%2==0)
//         printf("짝수");
//     if (num%2>=1)
//         printf("홀수");
//     return 0;

// }

// 숫자 입력하여 3의배수 구분
// int main(void)
// {
//     int num;
//     printf("숫자를 입력해주세요 : ");
//     scanf("%d", &num);
//     if (num%3==0)
//         printf("3의 배수입니다.");
//     if (num%3>=1)
//         printf("3의 배수가 아닙니다.");
//     return 0;
// }

// 나이에 따른 입장료 구하기
// int main(void)
// {
//     int age;
//     printf("나이를 입력해주세요 : ");
//     scanf("%d", &age);

//     if (age<8)
//         printf("요금은 0원 입니다.");
//     if (age>=60)
//         printf("요금은 2,500원 입니다.");
//     else
//         printf("요금은 5,000원 입니다.");
//     return 0;
// }

// 3의 배수이면서 5의 배수 판별하기
// int main(void)
// {
//     int num;
//     printf("3과5의 배수인지 알고싶은 숫자를 입력하세요 : ");
//     scanf("%d", &num);

//     if (num%3==0 && num%5==0)
//         printf("3의 배수이면서 5의 배수입니다.");
//     if (num%3==0 && num%5>=1)
//         printf("3의 배수이나 5의 배수가 아닙니다..");
//     if (num%3>=1 && num%5==0)
//         printf("3의 배수가 아니나 5의 배수입니다.");
//     return 0;
// }

// 공원 입장료 구하기
// int main(void)
// {
//     int age;
//     printf("나이를 입력해 주세요");
//     scanf("%d", &age);

//     if (60>age && age>7)
//     printf("공원 입장료는 5,000원 입니다.");
//     else
//     printf("공원 입장료는 무료입니다.");
//     return 0;
// }

// 별찍기1
// int main(void)
// {
//     int line = 0, star = 0, a = 4;
//     while (line < 6)
//     {
//         while (a>=star)
//         {
//             printf("%s","*");
//             ++star;
//         }
//         star=0;
//         a--;
//         printf("\n");
//         line++;
//     }
//     return 0;
// }

// 별찍기2
// int main(void)
// {
//     int line = 0, white = 0, a = 4, star = 0;
//     int count = 0;

//     while (line < 5)
//     {
//         star = 0;
//         while (a>=white)
//         {
//             printf("%s"," ");
//             ++white;
//         }
//         while (star<=count)
//         {
//             printf("%s","*");
//             star++;
//         }
//         printf("\n");
//         count +=2;
//         white=0;
//         a--;
//         line++;
//     }
//     return 0;
// }

// 별찍기3
// int main(void)
// {
//     int line = 0, white = 0, a = 4, star = 0, count = 0;
//     int line2 = 0, white2 = 0, a2 = 1, star2 = 0, count2 = 0;

//     while (line < 5)
//     {
//         star = 0;
//         while (a>=white)
//         {
//             printf("%s"," ");
//             ++white;
//         }
//         while (star<=count)
//         {
//             printf("%s","*");
//             star++;
//         }
//         line++;
//         printf("\n");
//         count +=2;
//         white=0;
//         a--;
//     }
//     while (line2 < 4)
//     {
//         star2 = 6;
//         while (white2<=a2)
//         {
//             printf("%s"," ");
//             ++white2;
//         }
//         while (count2<=star2)
//         {
//             printf("%s","*");
//             star2--;
//         }
//         line2++;
//         printf("\n");
//         count2 +=2;
//         white2=0;
//         a2++;
//     }
//     return 0;
// }

// 별찍기4
// int main(void)
// {
//     int line = 0, white = 0, a = 5, star = 0, count = 0;
//     int line2 = 0, white2 = 0, a2 = 1, star2 = 0, count2 = 0;

//     while (line2 < 4)
//     {
//         star2 = 8;
//         while (white2<=a2)
//         {
//             printf("%s"," ");
//             ++white2;
//         }
//         while (count2<=star2)
//         {
//             printf("%s","*");
//             star2--;
//         }
//         line2++;
//         printf("\n");
//         count2 +=2;
//         white2=0;
//         a2++;
//     }
//     while (line < 5)
//     {
//         star = 0;
//         while (a>=white)
//         {
//             printf("%s"," ");
//             ++white;
//         }
//         while (star<=count)
//         {
//             printf("%s","*");
//             star++;
//         }
//         line++;
//         printf("\n");
//         count +=2;
//         white=0;
//         a--;
//     }
//     return 0;
// }

// 별찍기 연습
// int main(void)
// {
//     int num1 = 6, num2 = 5;

//     while (num1 > 0)
//     {

//         while (num2>num1)
//         {
//             printf("%s","*");
//             num2--;
//         }
//         num2=5;
//         printf("\n");
//         num1--;

//     }
//     return 0;

// }

//  M의 N승 구하기
// int Power(int m, int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return m * Power(m,n-1);
// }
// int main(void)
// {
//     int m, n;
//     printf("M의 N승 구하기. 원하는 M,N의 숫자를 입력하세요. 단 양수만 입력하세요 : ");
//     scanf("%d %d",&m, &n);
//     if (m<0 || n<0)
//     {
//         printf("음수를 입력하셨습니다. 종료합니다.");
//         return 0;
//     }
//     printf("%d의 %d 제곱은 = %d \n",m,n, Power(m,n));
//     return 0;
// }

// 도형 그리기
// int Draw(int n)
// {
//     int i,white,star;
//     for(i=0;i<n;i++)
//     {
//         for(white=n-1;white>i;white--)
//             printf(" ");
//         for(star=0;star<2*i+1;star++)
//             printf("*");
//             printf("\n");
//     }
//     return 0;
// }
// int main(void)
// {
//     int n;
//     printf("원하는 별의 줄 개수를 입력해주세요 : ");
//     scanf("%d",&n);
//     printf("%d\n",Draw(n));
//     return 0;
// }

// double형 숫자 넣고 최대값구하기
// double Max(double a, double b, double c, double d, double e)
// {
//     if (a > b && a > c && a > d && a > e)
//         return a;
//     else if (b > a && b > c && b > d && b > e)
//         return b;
//     else if (c > a && c > b && c > d && c > e)
//         return c;
//     else if (d > a && d > b && d > c && d > e)
//         return d;
//     else
//         return e;
// }
// int main(void)
// {
//     double a, b, c, d, e;
//     printf("다섯개의 실수를 입력하세요.(소수점은 6자리까지 입력 가능합니다.) : ");
//     scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
//     printf("가장 큰 수는 %f 입니다. \n", Max(a, b, c, d, e));
//     return 0;
// }

// 랜덤배열 및 최대값 뽑기
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand(time(NULL));
//     int arr[10];
//     int i,max=0;
//     for (i=0;i<10;i++)
//         arr[i] = rand() % 100+1;
//     for (i=0;i<10;i++)
//     {   if(max<arr[i])
//             max = arr[i];
//     }
//     for (i=0;i<10;i++)
//     printf("%d ",arr[i]);
//     printf("\n그 중 최대값은 %d 입니다. ",max);
//     return 0;
// }

// 더블형 배열 최대값 
// double max(double arr[])
// {
//     double max=arr[0];
//     for (int i=0;i<10;i++)
//     {   if(max<arr[i])
//             max = arr[i];
//     }
//     return max;
// }

// int main(void)
// {
//     double arr[] = {2.5, 1.5, 5.2, 4.5, 7.7};
//     printf("가장 큰 수는 %f 입니다. \n", max(arr));
//     return 0;
// }

// 랜덤숫자배열 역순
// #include <stdlib.h>
// #include <time.h>

// void BubbleSort(int ary[], int len);

// int main(void)
// {
//     int i;
//     srand(time(NULL));
//     int arr[10];
//     for (i=0;i<10;i++)
//         arr[i] = rand() % 100+1;
//     BubbleSort(arr, sizeof(arr)/sizeof(int));
//     for(i=0;i<10;i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// void BubbleSort(int ary[], int len)
// {
//     int i, j;
//     int temp;

//     for(i=0; i<len-1 ;i++)
//     {
//         for(j=0; j<(len-i)-1 ;j++)
//         {
//             if(ary[j]<ary[j+1])
//             {
//                 temp=ary[j];
//                 ary[j]=ary[j+1];
//                 ary[j+1]=temp;
//             }
//         }
//     }
// }

// void pattern(int arr[], int num)
// {
//     int size = num/2;
//     int arr[size];

//     if(num%2==0)
//     {
//         for (int i = 0; i < size+1; i++)
//         {
//             arr[size - 1] = 1;
//         }
//         for (int i = 0; i < size-1; i--)
//         {
//             arr[size - 1] = 1;
//         }
//     }    

//     else if(num%2>0)
//     {
//         for (int i = 0; i < size+1; i++)
//         {
//             arr[size - 1] = 1;
//         }
//         for (int i = 0; i < size-1 ; i--)
//         {
//             arr[size - 1] = 1;            
//         }
//     }
        
// }

// int main(void)
// {
//     int num;
//     printf("배열의 크기를 입력해주세요 : ");
//     scanf("%d",&num);
//     int arr[num];

//     pattern(arr,num);

//     for(int i=0; i<num; i++)
//         printf("%d",arr[i]);
//     return 0;
// }

// #include <stdio.h>

// void pattern(int arr[], int num) {
//     int size = num / 2;

//     if (num % 2 == 0) {
//         for (int i = 0; i < size; i++) {
//             arr[size + i] = i + 1;
//             arr[size - i - 1] = i + 1;
//         }
//     } else {
//         for (int i = 0; i <= size; i++) {
//             arr[size + i] = i + 1;
//             arr[size - i] = i + 1;
//         }
//     }
// }

// int main(void) {
//     int num;
//     printf("배열의 크기를 입력해주세요: ");
//     scanf("%d", &num);
//     int arr[num];

//     pattern(arr, num);

//     printf("배열의 요소들의 값: ");
//     for (int i = 0; i < num; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// // 2차원 배열 랜덤 숫자 넣고 최대값 구하기
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int arr[3][5];
//     int max=0;
//     int i,j;
//     srand(time(NULL));
//     for(i=0;i<3;i++)
//     {    for(j=0;j<5;j++)
//             arr[i][j] = rand() % 100+1;
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<5;j++)
//             printf("%d ",arr[i][j]);
//         printf("\n");
//     }
//     max=arr[0][0];
//     for(int i=0;i<3;i++)
//     {   
//         for(j=0;j<5;j++)
//             if(max<arr[i][j])
//                 max = arr[i][j];
//     }
//     printf("배열 중 최대값 : %d",max);
//     return 0;
// }


// 2차원 배열 랜덤 숫자 넣고 최대값 구하기
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int arr[3][5];
//     int max1=0,max2=0,max3=0;
//     int i,j;
//     srand(time(NULL));
//     for(i=0;i<3;i++)
//     {    for(j=0;j<5;j++)
//             arr[i][j] = rand() % 100+1;
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<5;j++)
//             printf("%d ",arr[i][j]);
//         printf("\n");
//     }
//     max1=arr[0][0];
//     max2=arr[1][0];
//     max3=arr[2][0];
//     for(int i=0;i<3;i++)
//     {   
//         for(int j=0;j<5;j++)
//             if(max1<arr[0][j])
//                 max1 = arr[0][j];
//         for(int j=0;j<5;j++)
//             if(max2<arr[1][j])
//                 max2 = arr[1][j];
//         for(int j=0;j<5;j++)
//             if(max3<arr[2][j])
//                 max3 = arr[2][j];
//     }
//     printf(" 1열 중 최대값 : %d \n",max1);
//     printf(" 2열 중 최대값 : %d \n",max2);
//     printf(" 3열 중 최대값 : %d \n",max3);
//     return 0;
// }

// a + b + c = 1000이 되는 피타고라스 수

// int main(void)
// {
//     int a=1, b=2, c=3;
//     for(a=1;a<333;++a)
//         for(b=2;b<333;++b)
//             for(c=3;c<333;++c)
//                 if((a*a)+(b*b)==(c*c))
//     printf("%d %d %d \n",a,b,c);
// }

// int mian(void)
// {
//     int arr[]={};
// }

// 15장 도전 1
// void one(int arr[10])
// {
//     arr[10];
//     int i;
//     for(i=0;i<10;i++)
//     {
//         if(arr[i]%2>0)
//         printf("%d ",arr[i]);
//     }
// }

// void two(int arr[10])
// {
//     arr[10];
//     int i;
//     for(i=0;i<10;i++)
//     {
//         if(arr[i]%2==0)
//         printf("%d ",arr[i]);
//     }
// }

// int main(void)
// {
//     int arr[10];
//     int i;
//     for(i=0;i<10;i++)
//     {
//         printf("%d 번째 정수 입력 : ",i+1);
//         scanf("%d",&arr[i]);

//     }
//     one(arr);
//     printf("\n");
//     two(arr);
//     return 0;
// }

// 15장 도전 2
// int main(void)
// {
//     int num;
//     int count=0;
//     int arr[10]={0,};
//     int i=0;
//     printf("정수를 입력해 주세요 : " );
//     scanf("%d", &num);

//     for(int i=0;num>0;i++)
//     {
//         arr[i]=num%2;
//         num=num/2;
//         count++;

//     }
//     for (int i = count-1; i >= 0; i--)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// 15장 도전 3
// void one(int arr[10])
// {
//     int temp;
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (arr[i] % 2 > 0 && arr[j] % 2 > 0 && arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 > 0)
//             printf("%d ", arr[i]);
//     }
// }

// void two(int arr[10])
// {
//     int temp;
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//             printf("%d ", arr[i]);
//     }
// }
// int main(void)
// {
//     int arr[10];
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d 번째 정수 입력 : ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     one(arr), two(arr);

//     return 0;
// }

// 15장 도전 4
// int main(void)
// {
//     char word[]={};
//     printf("회문인지 알고싶은 단어를 입력하세요 : ");
//     scanf("%c", &word);
//     for(int i=0;i<i+1;i++)
//         printf("%s", word[i]);
// }


// 도형 그리기
// int Draw(int n)
// {
//     int i,white,star;
//     for(i=0;i<n;i++)
//     {
//         for(white=n-1;white>i;white--)
//             printf(" ");
//         for(star=0;star<2*i+1;star++)
//             printf("*");
//             printf("\n");
//     }
//     return 0;
// }
// int main(void)
// {
//     int n;
//     printf("원하는 별의 줄 개수를 입력해주세요 : ");
//     scanf("%d",&n);
//     printf("%d\n",Draw(n));
//     return 0;
// }