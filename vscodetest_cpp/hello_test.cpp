#include <stdio.h>

// int main(void)
// {
    // int result1;
    // int result2;
    // int num1, num2;

    // printf("두 개의 정수 입력: ");
    // scanf("%d %d", &num1, &num2);
    // result1 = num1*num2;
    // result2 = num1 - num2;
    // printf("%d * %d = %d \n", num1, num2, result1);
    // printf("%d - %d = %d \n", num1, num2, result2);
    // return 0;

    // int result;
    // int num1, num2, num3;

    // printf("세 개의 정수 입력: ");
    // scanf("%d %d %d", &num1, &num2, &num3);
    // result = num1 * num2 + num3;
    // printf("%d * %d + %d = %d \n", num1, num2, num3, result);
    // return 0;
    
    // int result;
    // int num1;

    // printf("하나의 정수 입력: ");
    // scanf("%d",&num1);

    // result = num1*num1;
    // printf("%d \n", result);
    // return 0;

    // int result1;
    // int result2;
    // int num1, num2;

    // printf("두 개의 정수 입력 : ");
    // scanf("%d %d", &num1, &num2);

    // result1 = num1 / num2;
    // result2 = num1 % num2;
    // printf("몫 : %d , 나머지 : %d \n", result1, result2);
    // return 0;

    // int result;
    // int num1, num2, num3;

    // printf("세 개의 정수 입력 : ");
    // scanf("%d %d %d", &num1, &num2, &num3);

    // result = (num1-num2)*(num2+num3)*(num3%num1);   
    // printf("%d", result);
    // return 0;

    // int num1 = 2;
    // int num2 = 3;

    // int result1 = num1 & num2;
    // int result2 = num1 | num2;
    // int result3 = num1 ^ num2;

    // printf("and계산 : %d\n", result1);
    // printf("or 계산 : %d\n", result2);
    // printf("xor계산 : %d\n", result3);
    // return 0;

// #include <stdio.h>

// int main(void)
// {
//     char ch=9;
//     int inum=1052;
//     double dnum=3.1415;

//     printf("변수 ch의 크기 : %d \n", sizeof(ch));
//     printf("변수 inum의 크기 : %d \n", sizeof(inum));
//     printf("변수 dnum의 크기 : %d \n", sizeof(dnum));

//     printf("char의 크기 : %d \n", sizeof(char));
//     printf("int의 크기 : %d \n", sizeof(int));
//     printf("long의 크기 : %d \n", sizeof(long));
//     printf("long long의 크기 : %d \n", sizeof(long long));
//     printf("float의 크기 : %d \n", sizeof(float));
//     printf("double의 크기 : %d \n", sizeof(double));
//     return 0;

// }

#include <stdio.h>

// int main(void)
// {
//     double rad;
//     double area;
//     printf("원의 반지름 입력 : ");
//     scanf("%lf", &rad);

//     area = rad*rad*3.1415;
//     printf("원의 넓이 : %f \n", area);
//     return 0;
    
// }

// int main(void)
// {
//     char ch1 = 'A', ch2 = 65;
//     int ch3 = 'Z' , ch4 = 90;

//     printf("%c %d \n", ch1+32, ch1);
//     printf("%c %d \n", ch2, ch2);
//     printf("%c %d \n", ch3+32, ch3);
//     printf("%c %d \n", ch4, ch4);
//     return 0;
// }

// int main(void)
// {
//     int rad1;
//     int rad2;
//     int rad3;
//     int rad4;
//     int area;
//     printf("첫번째 x,y 값 입력. 단 y값이 x값보다 커야함. : ");
//     scanf("%d %d" , &rad1 , &rad2);
//     printf("두번째 x,y 값 입력. 단 y값이 x값보다 커야함. : ");
//     scanf("%d %d" , &rad3 , &rad4);

//     area = (rad2 - rad1)*(rad4-rad3);
//     printf("이 직사각형의 넓이는 %d 입니다.", area);
//     return 0;
// }

// int main(void)
// {
//     double num1;
//     double num2;

//     printf("두 개의 수 입력 : ");
//     scanf("%lf %lf", &num1 , &num2);

//     printf("두수의 덧셈 : %f\n" , num1+num2);
//     printf("두수의 뺄셈 : %f\n" , num1-num2);
//     printf("두수의 곱셈 : %f\n" , num1*num2);
//     printf("두수의 나눗셈 : %f\n" , num1/num2);
// }

// int main(void)
// {

//     // int asc;
//     // printf("아스키 코드로 변환할 숫자 입력: ");
//     // scanf("%d", &asc);
//     // printf("아스키 문자 : %c \n", asc);
//     // return 0;

//     int ch;
//     printf("숫자로 변환할 아스키 문자 입력: ");
//     scanf("%c", &ch);
//     printf("아스키 문자의 숫자 : %d", ch);
//     return 0;

// }

// int main(void)
// {
//     int num1, num2, num3;
//     printf("세 개의 정수 입력하세요 : ");
//     scanf("%d %o %x", &num1, &num2, &num3);

//     printf("입력된 정수 10진수 출력: ");
//     printf("%d %d %d \n", num1, num2, num3);
//     return 0;

// }

// int main(void)

// {
//     float num1;
//     double num2;
//     long double num3;

//     printf("실수 입력1(e 표기법으로): ");
//     scanf("%f", &num1);
//     printf("입력된 실수 %f \n", num1);

//     printf("실수 입력2(e 표기법으로): ");
//     scanf("%lf", &num2);
//     printf("입력된 실수 %f \n", num2);

//     printf("실수 입력3(e 표기법으로): ");
//     scanf("%Lf", &num3);
//     printf("입력된 실수 %Lf \n", num3);
//     return 0;

// }

// int main(void)
// {
//     int dan=0, num=1;
//     printf("몇 단을 원하시나요? : ");
//     scanf("%d", &dan);

//     while (num<10)
//     {
//         printf("%d X %d = %d \n", dan , num , dan*num);
//         num++;
//     }
//     return 0;

// }

// 7-1-1
// int main(void)
// {
//     int num = 0;
//     int a = 0;
//     printf("몇 번 출력할까요? : ");
//     scanf("%d", &num);
//     while(a<=num-1)
//     {
//         printf("Hello World!");
//         a++;
    
//     }
//     return 0;
// }

// 7-1-2
// int main(void)
// {
//     int num = 0;
//     int a = 1;
//     printf("양의 정수를 하나 입력해주세요 : ");
//     scanf("%d", &num);
//     while (num >= a)
//     {
//         printf("%d\n" , 3*a);
//         a++;
//     }
//     return 0;
// }

// 책 구구단
// int main(void)
// {
//     int cur=2;
//     int is=0;

//     while (cur<10)
//     {
//         is=1;
//         while (is<10)
//         {
//             printf("%d X %d = %d \n", cur, is, cur*is);
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }

// 7-1-3
// int main(void)
// {
//     int num = 1;
//     int tnum = 0;
//     while (num > 0)
//     {
//         printf("정수 하나를 입력하세요 : ");
//         scanf("%d", &num);
//         tnum += num;
//     }
//     printf("총 합은 %d입니다.", tnum);
// }


// 7-1-4
// int main(void)
// {
//     int dan = 0, num = 9;
//     printf("원하는 구구단을 입력해주세요 : ");
//     scanf("%d", &dan);

//     while (num>0)
//     {
//         printf("%d X %d = %d \n" , dan , num , dan*num);
//         num--;

//     }
//     return 0;
// }

// 7-1-5
// int main(void)
// {
//     int num = 0;
//     int numa = 0, numb = 0;

//     printf("몇개의 정수를 입력할 것인가요? : ");
//     scanf("%d", &num);
//     while (num<0)
//     {
//         printf("원하는 정수를 입력하세요 : ")
//         scanf("")
        
//     }
    
// }



// int main(void)
// {
//     int total=0, num=0;

//     do
//     {
//         printf("정수 입력(0 to quit): ");
//         scanf("%d", &num);
//         total += num;
//     } while (num!=0);
//     printf("합계 : %d \n", total);
//     return 0;
    
// }

// int main(void)
// {
//     int total = 0;
//     int i, num;
//     printf("0부터 num까지의 덧셈, num은? ");
//     scanf("%d", &num);
    
//     for(i=0; i<num+1; i++)
//         total +=i;
    
//     printf("0부터 %d까지 덧셈 결과: %d \n",num, total);
//     return 0;

// }

// int main(void)
// {
//     double total=0.0;
//     double input=0.0;
//     int num;

//     for( ; input>=0.0 ;)
//     {
//         total+=input;
//         printf("실수 입력(minus to quit) : ");
//         scanf("%lf", &input);
//         num++;

//     }
//     printf("평균 : %f \n ", total/(num-1));
//     return 0;
// }

// int main(void)
// {
//     int cur, is;

//     for(cur=2; cur<10; cur++)
//     {
//         for(is=1; is<10; is++)
//             printf("%d X %d = %d \n", cur, is, cur*is);
//         printf("\n");
//     }
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

// 8-1-1
// int main(void)
// {
//     int num;
//     for (num = 1; num < 100; num++)
//         if (num%7==0)
//             printf("7의 배수 : %d \n", num);
//         else if (num%9==0)
//             printf("9의 배수 : %d \n",num);
//     return 0;
// }

// 8-1-2
// int main(void)
// {
//     int num1,num2;
//     printf("두개의 수를 입력하세요 : ");
//     scanf("%d %d",&num1,&num2);

//     if (num1>num2)
//         printf("%d",num1-num2);
//     else if (num1<num2)
//         printf("%d",num2-num1);
//     return 0;
// }

// 8-1-3
// int main(void)
// {
//     int kor,eng,mat,avg;
//     printf("국어,영어,수학 점수를 순서대로 입력해 주세요 : ");
//     scanf("%d %d %d",&kor,&eng,&mat);
//     avg = (kor+eng+mat)/3;
//     if (avg>89)
//         printf("이 학생의 학점은 A입니다.\n");
//     else if (avg>79)
//         printf("이 학생의 학점은 B입니다.\n");
//     else if (avg>69)
//         printf("이 학생의 학점은 C입니다.\n");
//     else if (avg>49)
//         printf("이 학생의 학점은 D입니다.\n");
//     else
//         printf("이 학생의 학점은 F입니다.\n");  
//     return 0;
// }

// 8-1-4
// int main(void)
// {
//     int num1,num2,result;
//     printf("두개의 수를 입력하세요 : ");
//     scanf("%d %d",&num1,&num2);
//     result = (num1>num2) ? num1-num2 : num2-num1;
//     printf("%d",result);
//     return 0;
// }

// 챕터 10
// 도전1
// int main(void)
// {
//     int num, result;
//     printf("16진수로 변환할 10진수 정수를 입력하여 주세요 : ");
//     scanf("%d", &num);
//     printf("%X",num);
// }

// --------------------도전2
// int main(void)
// {
//     int num1, num2, cur;
//     int is =0;
//     printf("구구단의 시작 숫자와 끝 숫자를 입력해주세요 : ");
//     scanf("%d %d",&num1, &num2);
//     if(num1>num2)
//         for(cur=num2; num2<num1; num2++)
//         {
//             for(is=1; is<10; is++)
//                 printf("%dx%d=%d \n", cur, is, cur*is);
//             printf("\n");
//         }
//     else
//     {
//         for(cur=num2; num2<num1; num2++)
//         {
//             for(is=1; is<10; is++)
//                 printf("%dx%d=%d \n", cur, is, cur*is);
//             printf("\n");
//         }        
//     }
//         return 0;
// }

// int main(void)
// {
//     int num1, num2, cur;
//     int is =0;
//     printf("구구단의 시작 숫자와 끝 숫자를 입력해주세요 : ");
//     scanf("%d %d",&num1, &num2);
    
//     while (num1<num2)
//     {
//         is=1;
//         while (is<10)
//         {
//             printf("%dx%d=%d\n",num1,is,num1*is);
//         }
//     }
//     return 0;
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

// --------------------도전8
// int Factorial(int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return n * Factorial(n-1);
// }
// int main(void)
// {
//     int num;
//     printf("2의 N승 구하기. 원하는 N의 숫자를 입력하세요 : ");
//     scanf("%d",&num);
//     printf("2! = %d \n",Factorial(2));
// }

// 책 - 정수 입력받아 0과 비교
// int main(void)
// {
//     int num;
//     printf("정수 입력: ");
//     scanf("%d",&num);

//     if (num<0)
//     {
//         printf("입력값은 0보다 작다.\n");
//     }
//     if (num>0)
//     {
//         printf("입력값은 0보다 크다.\n");
//     }
//     if (num==0)
//     {
//         printf("입력값은 0이다.\n");
//     }
//     return 0;
// }

// 책 - 실수 계산기(if문)
// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;

//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("선택? : ");
//     scanf("%d", &opt);
//     printf("두개의 실수 입력: ");
//     scanf("%lf %lf",&num1, &num2);

//     if (opt==1)
//     {
//         result = num1 + num2;
//     }
//     if (opt==2)
//     {
//         result = num1 - num2;
//     }
//     if (opt==3)
//     {
//         result = num1*num2;
//     }
//     if (opt==4)
//     {
//         result = num1/num2;
//     }
//     printf("결과: %f \n",result);
//     return 0;
// }

// 책 - for문 안에 if문
// int main(void)
// {
//     int num;

//     for (num = 1; num < 100; num++)
//     {
//         if (num%3==0 || num%4==0)
//         {
//             printf("3 또는 4의 배수 : %d \n", num);
//         }
//         return 0;
//     }
    
// }

// 책 - 실수 계산기(if-else)
// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;

//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("선택? : ");
//     scanf("%d", &opt);
//     printf("두개의 실수 입력: ");
//     scanf("%lf %lf",&num1, &num2);

//     if (opt==1)
//         result = num1 + num2;
//     else if (opt==2)
//         result = num1 - num2;
//     else if (opt==3)
//         result = num1*num2;
//     else
//         result = num1/num2;
//     printf("결과: %f \n",result);
//     return 0;
// }



// 책 - 삼항연산자
// int main(void)
// {
//     int num, abs;
//     printf("정수 입력: ");
//     scanf("%d", &num);

//     abs = num>0 ? num : num*(-1);
//     printf("절댓값:%d \n",abs);
//     return 0;
// }


// 책 - break사용(브레이크는 자신을 감싼 가장 가까운괄호에서 탈출!)
// int main(void)
// {
//     int sum=0, num=0;

//     while (1)
//     {
//         sum+=num;
//         if(sum>5000)
//             break;
//         num++;
//     }
//     printf("sum: %d \n",sum);
//     printf("num: %d \n",num);
//     return 0;
// }

// 책-continue사용(컨티뉴 속한 것을 생략)
// int main(void)
// {
//     int num;
//     printf("start! ");

//     for(num=1; num<20; num++)
//     {
//         if (num%2==0 || num%3==0)
//             continue;
//             printf("%d ",num);
//     }
//     printf("end!\n");
//     return 0;
// }

// 책-switch
// int main(void)
// {
//     int num;
//     printf("1이상 5이하의 정수 입력: ");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("1은 ONE \n");
//         break;
//     case 2:
//         printf("2는 TWO \n");
//         break;
//     case 3:
//         printf("3은 THREE \n");
//         break;
//     case 4:
//         printf("4는 FOUR \n");
//         break;
//     case 5:
//         printf("5는 FIVE \n");
//         break;
//     default:
//         printf("I don't know!\n");
//     }
//     return 0;
// }

// 책-switch break문 없는거
// int main(void)
// {
//     char sel;
//     printf("M 오전, A 오후, E 저녁 \n");
//     printf("입력 : ");
//     scanf("%c", &sel);

//     switch (sel)
//     {
//     case 'M':
//     case 'm':
//         printf("Mornig \n");
//         break;
//     case 'A':
//     case 'a':
//         printf("Afternoon \n");
//         break;
//     case 'E':
//     case 'e':
//         printf("Evening \n");
//     }
//     return 0;
// }

// 책-printf함수반환
// int main(void)
// {
//     int num1, num2;
//     num1=printf("12345\n");
//     num2=printf("I love my home\n");
//     printf("%d %d\n", num1, num2);
//     return 0;
// }

// 책-간단한 더하기 함수
// int Add(int num1, int num2)
// {
//     return num1+num2;
// }

// int main(void)
// {
//     int result;
//     result = Add(3,4);
//     printf("덧셈 결과1: %d \n", result);
//     result = Add(5,8);
//     printf("덧셈 결과2: %d \n", result);
//     return 0;
// }

// int Add(int num1, int num2)
// {
//     return num1+num2;
// }

// void ShowAddResult(int num)
// {
//     printf("덧셈결과 출력: %d \n", num);
// }

// int ReadNum(void)
// {
//     int num;
//     scanf("%d" , &num);
//     return num;   
// }
// void HowToUseThisProg(void)
// {
//     printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//     printf("자! 그럼 두 개의 정수를 입력하세요.\n");
// }
// int maon(void)
// {
//     int result, num1, num2;
//     HowToUseThisProg();
//     num1=ReadNum();
//     num2=ReadNum();
//     result = Add(num1, num2);
//     ShowAddResult(result);
//     return 0;
// }

// int AbsoCompare(int num1, int num2);
// int GetAbsoValue(int num);

// int main(void)
// {
//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d" , &num1, &num2);
//     printf("%d와 %d중 절대값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
//     return 0;

// }

// int AbsoCompare(int num1, int num2)
// {
//     if(GetAbsoValue(num1) > GetAbsoValue(num2))
//         return num1;
//     else
//         return num2;

// }

// int GetAbsoValue(int num)
// {
//     if(num<0)
//         return num * (-1);
//     else
//         return num;
// }



// 책 지역변수
// int main(void)
// {
//     int cnt;

//     for(cnt=0; cnt<3; cnt++)
//     {
//         int num = 0;   
//         // 위 변수를 for문 위로 올리면 num은 +1씩 올라감
//         num++;
//         printf("%d번째 반복, 지역변수 num은 %d.\n", cnt+1, num);
//     }
//     if(cnt==3)
//     {
//         int num = 7;
//         num++;
//         printf("if문 내에 존재하는 지역변수 num은 %d.\n", num);
//     }
//     return 0;
// }

// 책 스태틱
// void SimpleFunc(void)
// {
//     static int num1=0;
//     int num2 = 0;
//     num1++, num2++;
//     printf("static: %d, local: %d\n",num1,num2);
// }

// int main(void)
// {
//     int i;
//     for(i=0;i<5;i++)
//         SimpleFunc();
//     return 0;
// }

// 책 재귀함수
// int Factorial(int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return n * Factorial(n-1);
    
// }
// int main(void)
// {
//     printf("1! = %d \n",Factorial(1));
//     printf("2! = %d \n",Factorial(2));
//     printf("3! = %d \n",Factorial(3));
//     printf("4! = %d \n",Factorial(4));
//     printf("9! = %d \n",Factorial(9));
// }

// 7-2-1
// int main(void)
// {
//     int result=0, num=0, n=0;
//     while (5>n)
//     {
//         while (num<=0)
//         {
//             printf("0보다 큰 수를 입력 : ");
//             scanf("%d",&num);
//         }
//         result+=num;
//         num=0;
//         n++;
//     }
//     printf("%d",result);
//     return 0;
// }

// 챕터 11 책 배열
// int main(void)
// {
//     int arr[5];
//     int sum=0, i;

//     arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

//     for (i=0;i<5;i++)
//         sum += arr[i];

//     printf("배열 요소에 저장된 값의 합: %d \n",sum);
//     return 0;
// }

// int main(void)
// {
//     int arr1[5]={1,2,3,4,5};
//     int arr2[]={1,2,3,4,5,6,7};
//     int arr3[5]={1,2};
//     int ar1len,ar2len,ar3len,i;

//     printf("배열 arr1의 크기 : %d\n",sizeof(arr1));
//     printf("배열 arr2의 크기 : %d\n",sizeof(arr2));
//     printf("배열 arr3의 크기 : %d\n",sizeof(arr3));

//     ar1len = sizeof(arr1) / sizeof(int);
//     ar2len = sizeof(arr2) / sizeof(int);
//     ar3len = sizeof(arr3) / sizeof(int);

//     for(i=0; i<ar1len; i++)
//         printf("%d",arr1[i]);
//     printf("\n");

//     for(i=0; i<ar2len; i++)
//         printf("%d",arr2[i]);
//     printf("\n");

//     for(i=0; i<ar3len; i++)
//         printf("%d",arr3[i]);
//     printf("\n");
//     return 0;
// }

// 11-1 min다시
// int main(void)
// {
//     int arr[5];
//     int i = 0,sum = 0,max = 0,min = 0;
//     printf("정수 다섯개를 입력하세요 : ");
//     scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

//     for (i = 0; i < 5; i++)
//     {
//         sum += arr[i];
//         if (arr[i]>max)
//             max = arr[i];
//         min = arr[0];
//         if (arr[i]<min)
//             min = arr[i];
//     }
//     printf("%d\n",sum);
//     printf("%d\n",max);
//     printf("%d\n",min);
// }

// int main(void)
// {
//     char str[]="Good morning!";
//     printf("배열 srt의 크기: %d \n", sizeof(str));
//     printf("널 문자 문자형 출력: %c\n", str[13]);
//     printf("널 문자 정수형 출력: %d\n", str[13]);

//     str[12]='?';
//     printf("문자열 출력 : %s \n",str);
//     return 0;
// }

// int main(void)
// {
//     char str[50];
//     int idx=0;

//     printf("문자열 입력 : ");
//     scanf("%s", str);
//     printf("입력받은 문자열 : %s \n", str);

//     printf("문자 단위 출력 : ");
//     while (str[idx] != '\0')
//     {
//         printf("%c", str[idx]);
//         idx++;
//     }
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     char str[50] = "I like C programing";
//     printf("string: %s \n", str);

//     str[10]='\0';
//     printf("string: %s \n", str);

//     str[6]='\0';
//     printf("string: %s \n", str);

//     str[1]='\0';
//     printf("string: %s \n", str);
//     return 0;
// }

// int main(void)
// {
//     char str[50];
//     char str2[50];
//     printf("문자열 입력: ");
//     scanf("%s",str);

    
// }

// ---------------M의 N승 구하기
// int Power(int m, int n)
// {

//     if(n==0)
//         return 1;
//     else
//         return 
    // int m, n, i, result;
    // printf("두 개의 정수를 입력하세요 : ");
    // scanf("%d %d",&m , &n);
    // for (i = 1; i == n; i++)
    // {
    //     result += m*i;

    // }
    // printf("%d",result);
// }
// int main(void)
// {
//     Power();

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

// 도형그리기
// int main(void)
// {
//     int line = 0, white = 0, a = 100, star = 0, want=0;
//     int count = 0;
//     printf("별을 몇줄 원하세요? : ");
//     scanf("%d", &want);

//     while (line < want)
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

// 랜덤 실수형 숫자 넣고 최대값구하기
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


// int main(void)
// {
//     const unsigned int NUM1 = 3;
//     const unsigned int NUM2 = 5;
//     const unsigned int NUM3 = NUM1 & NUM2;
//     printf("%d\n",NUM3);
//     printf("%p",(void*)&NUM3);
// }

// int main(void)
// {
//     int num1=100, num2=100;
//     int * pnum;

//     pnum=&num1;
//     (*pnum)+=30;

//     pnum=&num2;
//     (*pnum)-=30;

//     printf("num1:%d, num2:%d\n", num1,num2);
//     return 0;

// }

// 12-1-1
// int main(void)
// {
//     int num=10;
//     int*ptr1=&num;
//     int*ptr2=ptr1;

//     (*ptr1)++;
//     (*ptr2)++;
//     printf("%d \n", num);
//     return 0;
// }

// 12-1-2
// int main(void)
// {
//     int num1 = 10;
//     int num2 = 20;
//     int*ptr1=&num1;
//     int*ptr2=&num2;
//     (*ptr1)+=10;
//     (*ptr2)-=10;
//     ptr1=&num2;
//     ptr2=&num1;
//     printf("%d %d",num2,num1);
//     return 0;
// }

// 책 13-1
// int main(void)
// {
//     int arr[3]={0,1,2};
//     printf("배열의 이름 : %p \n",arr);
//     printf("첫 번째 요소 : %p \n",&arr[0]);
//     printf("두 번째 요소 : %p \n",&arr[1]);
//     printf("세 번째 요소 : %p \n",&arr[2]);
//     return 0;
// }

// 책 13-2
// int main(void)
// {
//     int arr[3]={11,22,33};
//     int * ptr=arr;
//     printf("%d %d %d \n",*ptr, *(ptr+1),*(ptr+2));

//     printf("%d ", *ptr); ptr++;
//     printf("%d ", *ptr); ptr++;
//     printf("%d ", *ptr); ptr--;
//     printf("%d ", *ptr); ptr--;
//     printf("%d ", *ptr); printf("\n");
//     return 0;
// }

// 책 13-3
// int main(void)
// {
//     char str1[]="My String";
//     char * str2="your String";
//     printf("%s %s \n", str1, str2);

//     str2="Our String";
//     printf("%s %s \n", str1, str2);

//     str1[0]='X';
//     str2[0]='X';
//     printf("%s %s \n",str1, str2);
//     return 0;
// }

// 13-4
// int main(void)
// {
//     char * strArr[3]={"Simple","String","Array"};
//     printf("%s \n",strArr[0]);
//     printf("%s \n",strArr[1]);
//     printf("%s \n",strArr[2]);
//     return 0;
// }

// 11-2-3
// int main(void)
// {
//     char s[50];
//     char max =0;
//     int len=0, i;
//     printf("영단어를 입력하세요 : ");
//     scanf("%s", s);
//     while (s[len] != '\0')
//         len++;
//     for (i=0;i<len;i++)
//     {   if(max<s[i])
//             max = s[i];
//     }
//     printf("단어중 아스키코드가 가장 큰 알파벳은 %c",max);
//     return 0;
// }

// void process(size_t_n,int nums[])
// {
//     size_t i;
//     for (i =0;i<n;++i)
//     nums[i]*2=2
// }

// void ShowArayElem(int * param, int len)
// {
//     int i;
//     for(i=0;i<len;i++)
//         printf("%d", param[i]);
//     printf("\n");
// }

// int main(void)
// {
//     int arr1[3]={1,2,3};
//     int arr2[5]={4,5,6,7,8};
//     ShowArayElem(arr1,sizeof(arr1)/sizeof(int));
//     ShowArayElem(arr2,sizeof(arr2)/sizeof(int));
//     return 0;
// }

// void ShowArayElem(int*param,int len)
// {
//     int i;
//     for(i=0;i<len;i++)
//         printf("%d", param[i]);
//     printf("\n");
// }

// void AddArayElem(int*param,int len, int add)
// {
//     int i;
//     for(i=0;i<len;i++)
//         param[i] += add;
// }

// int main(void)
// {
//     int arr[3]={1,2,3};
//     AddArayElem(arr, sizeof(arr)/sizeof(int),1);
//     ShowArayElem(arr,sizeof(arr)/sizeof(int));

//     AddArayElem(arr, sizeof(arr)/sizeof(int),2);
//     ShowArayElem(arr,sizeof(arr)/sizeof(int));

//     AddArayElem(arr, sizeof(arr)/sizeof(int),3);
//     ShowArayElem(arr,sizeof(arr)/sizeof(int));
//     return 0;
// }

// void Swap(int*ptr1, int*ptr2, int*ptr3)
// {
//     int temp1=*ptr1;
//     int temp2=*ptr3;
//     *ptr3=*ptr2;
//     *ptr1=temp2;
//     *ptr2=temp1;


// }
// int main(void)
// {
//     int num1=1;
//     int num2=2;
//     int num3=3;
//     printf("num1 num2 num3: %d %d %d \n",num1,num2,num3);

//     Swap(&num1,&num2,&num3);
//     printf("num1 nunm2: %d %d %d \n",num1,num2,num3);
//     return 0;
// }


// int SquareByValue(int num)
// {
//     return num*num;
// }

// void SquareByReference(int*ptr)
// {
//     int num = *ptr;
//     *ptr = num*num;
// }

// int main(void)
// {
//     int num=0;
//     printf("제곱할 숫자 : ");
//     scanf("%d",&num);
//     printf("%d \n",SquareByValue(num));
//     SquareByReference(&num);
//     printf("%d \n",num);
//     return 0;
// }

// int main(void)
// {
//     int num1 = 10;
//     int num2 = 20;
//     int num3 = 30;

//     int*prt1 = &num1;
//     int*prt2 = &num2;
//     int*prt3 = &num3;

//     *prt3 = *ptr2;
//     *ptr2 = *ptr1;
//     *ptr1 = *ptr2;

// }

// 랜덤배열 및 최대값 뽑기

// double Max(double arr[],int arr2[])
// {
//     double max;
//     arr[5] = {2.332 , 5.121 , 6.158 , 7.515 , 3.554};
//     return max;
// }

// int main(void)
// {
//     double arr[50];
//     int i;
//     double max=0;
//     for (i=0;i<10;i++)
//     {   if(max<arr[i])
//             max = arr[i];
//     }
//     for (i=0;i<10;i++)
//     printf("%f ",arr[i]);
//     printf("\n그 중 최대값은 %f 입니다. ",max);
//     return 0;
// }

// int main(void)
// {
//     double num1;
//     printf("수 입력 : ");
//     scanf("%lf",&num1);
//     printf("%f",num1);
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



// void Sort(int ary[],int len);

// int main(void)
// {
//     srand(time(NULL));
//     int arr[10];
//     int i,max=0;
//     for (i=0;i<10;i++)
//         arr[i] = rand() % 100+1;
//     for (i=0;i<10;i++)
//     printf("%d ",arr[i]);
// }

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

// int main(void)
// {
//     int arr1[3][4];
//     int arr2[7][9];
//     printf("세로3,가로4 : %d \n",sizeof(arr1));
//     printf("가로7,세로9 : %d \n",sizeof(arr2));
//     return 0;
// }

// int main(void)
// {
//     int villa[4][2];
//     int popu, i, j;

//     // 가구 인원 입력받기
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d층 %d호 인구수 : ",i+1,j+1);
//             scanf("%d",&villa[i][j]);
//         }
//     }
//     // 빌라 층별 인구수 출력
//     for(i=0;i<4;i++)
//     {
//         popu=0;
//         popu += villa[i][0];
//         popu += villa[i][1];
//         printf("%d층 인구수 : %d\n",i+1,popu);
//     }
//     return 0;
// }

// int main(void)
// {
//     int arr [3][9];
//     int cur, is;
//     for(cur=2; cur<5;cur++)
//     {
//         for(is=1;is<10;is++)
//             printf("[%d] ",cur*is);
//             printf("\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int mean=0, i, j;
//     int record[3][3][2]= 
//     {
//     {{70,80},{94,90},{70,85}},{{83,90},{95,60},{90,82}},{{98,89},{99,94},{91,87}}
//     };

//     for(i=0;i<3;i++)
//         for(j=0;j<2;j++)
//             mean+=record[0][i][j];
//     printf("A 합급 전체 평균 : %g \n",(double)mean/6);

//     mean=0;
//     for(i=0;i<3;i++)
//         for(j=0;j<2;j++)
//             mean+=record[1][i][j];
//     printf("B 학급 전체 평균 : %g \n",(double)mean/6);

//     mean=0;
//     for(i=0;i<3;i++)
//         for(j=0;j<2;j++)
//             mean+=record[2][i][j];
//     printf("C 학급 전체 평균 : %g \n",(double)mean/6);
//     return 0;
// }


// int record[5][5];

// void WriteRecord(void)
// {
//     int sum;
//     int i, j;

//     for(i=0;i<4;i++)
//     {
//         sum=0;
//         printf("%d 번째 학생 성적 입력 \n",i+1);
//         for(j=0;j<4;j++)
//         {
//             printf("과목  %d : ",j+1);
//             scanf("%d", &record[i][j]);
//             sum += record[i][j];
//         }
//         record[i][4]=sum;
//     }
// }

// void WriteSumRecord(void)
// {
//     int sum=0;
//     int i, j;

//     for(i=0;i<4;i++)
//     {
//         sum=0;
//         for(j=0;j<4;j++)
//             sum+=record[j][i];
//         record[4][i]=sum;
//         record[4][4]+=sum;
//     }
// }

// void ShowAllRecord(void)
// {
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//             printf("%3d", record[i][j]);
//             printf("\n");
//     }
// }
// int main(void)
// {
//     WriteRecord();
//     WriteSumRecord();
//     ShowAllRecord();
//     return 0;
// }

// int main(void)
// {
//     double num = 3.14;
//     double *ptr = &num;
//     double **dptr = &ptr;
//     double *ptr2;

//     printf("%9p %9p \n",ptr,*dptr);
//     printf("%9g %9g \n",num, **dptr);
//     ptr2 = *dptr;
//     *ptr2 = 10.99;
//     printf("%9g %9g \n", num, **dptr);
//     return 0;
// }

// int main(void)
// {
//     int num1;
//     int num2;
//     int*p;
//     int*q;
//     int*r;
//     int** pp;

//     num1 = 10;
//     num2 = 20;

//     p = &num1; //num2주소로 바뀜(*pp=q 때문에)
//     q = &num2;
//     r = &num1;

//     pp = &p; //p의주소
//     *pp = q; //p의 주소를 q로 변경하겠다.
//     **pp = 1024;
//     pp = &r;
//     **pp = *p *2;
//     printf("%d %d",num1,num2);
// }

// int main(void)
// {
//     int arr1[2][2]={{1,2},{3,4}};
//     int arr2[3][2]={{1,2},{3,4},{5,6}};
//     int arr3[4][2]={{1,2},{3,4},{5,6},{7,8}};

//     int (*ptr)[2];
//     int i;

//     ptr=arr1;
//     printf("** Show 2,2 arr1 **\n");
//     for(i=0; i<2 ; i++)
//             printf("%d %d \n",ptr[i][0],ptr[i][1]);
    
//     ptr=arr2;
//     printf("** Show 3,2 arr1 **\n");
//     for(i=0; i<3 ; i++)
//             printf("%d %d \n",ptr[i][0],ptr[i][1]);
    
//     ptr=arr3;
//     printf("** Show 4,2 arr1 **\n");
//     for(i=0; i<4 ; i++)
//             printf("%d %d \n",ptr[i][0],ptr[i][1]);
//     return 0;
// }

// void ShowArr2DStyle(int (*arr)[4],int column)
// {
//     int i,j;
//     for(i=0; i<column; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }
//     printf("\n");
// }

// int Sum2DArr(int arr[][4], int column)
// {
//     int i,j, sum=0;
//     for(i=0; i<column; i++)
//         for(j=0;j<4;j++)
//             sum+= arr[i][j];
//     return sum;
// }

// int main(void)
// {
//     int arr1[2][4]={1,2,3,4,5,6,7,8};
//     int arr2[3][4]={1,1,1,1,3,3,3,3,5,5,5,5};

//     ShowArr2DStyle(arr1,sizeof(arr1)/sizeof(arr1[0]));
//     ShowArr2DStyle(arr2,sizeof(arr2)/sizeof(arr2[0]));
//     printf("arr1의 합: %d \n", Sum2DArr(arr1,sizeof(arr1)/sizeof(arr1[0])));
//     printf("arr1의 합: %d \n", Sum2DArr(arr2,sizeof(arr2)/sizeof(arr2[0])));
//     return 0;
// }

// int main(void)
// {
//     int a[3][2]={{1,2},{3,4},{5,6}};

//     printf("a[0]: %p \n",a[0]);
//     printf("*(a+0): %p \n",*(a+0));

//     printf("a[1]: %p \n",a[1]);
//     printf("*(a+1): %p \n",*(a+1));

//     printf("a[2]: %p \n",a[2]);
//     printf("*(a+2): %p \n",*(a+2));

//     printf("%d, %d \n", a[2][1], (*(a+2))[1]);
//     printf("%d, %d \n", a[2][1], *(a[2]+1));
//     printf("%d, %d \n", a[2][1], *(*(a+2))+1);
//     return 0;
// }


// int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
// {
//     return cmp(age1, age2);
// }

// int OlderFirst(int age1, int age2)
// {
//     if(age1>age2)
//         return age1;
//     else if(age1<age2)
//         return age2;
//     else
//         return 0;
// }

// int YoungerFirst(int age1, int age2)
// {
//     if(age1<age2)
//         return age1;
//     else if(age1>age2)
//         return age2;
//     else
//         return 0;
// }

// int main(void)
// {
//     int age1=20;
//     int age2=30;
//     int first;

//     printf("입장순서 1 \n");
//     first=WhoIsFirst(age1,age2,OlderFirst);
//     printf("%d세와 %d세중 %d세가 먼저 입장! \n\n", age1, age2, first);

//     printf("입장순서 2 \n");
//     first=WhoIsFirst(age1,age2,YoungerFirst);
//     printf("%d세와 %d세중 %d세가 먼저 입장! \n\n", age1, age2, first);
//     return 0;

//

// void SoSimpleFunc(void)
// {
//     printf("I'm so simple");
// }

// int main(void)
// {
//     int num=20;
//     void *ptr;

//     ptr=&num;
//     printf("%p \n",ptr);

//     ptr=SoSimpleFunc;
//     printf("%p\n",ptr);
//     return 0;
// }
// int main(int argc, char *argv[])
// {
//     int i=10;
//     printf("전달된 문자열의 수 : %d \n", argc);

//     for(i=0; i<argc; i++)
//         printf("%d번째 문자열: %s \n",i+1, argv[i]);
//     return 0;
// }

// int main(void)
// {
//     int ch1, ch2;

//     ch1=getchar();
//     ch2=fgetc(stdin);

//     putchar(ch1);
//     fputc(ch2, stdout);
//     return 0;
    
// }

// int main(void)
// {
//     char str[7];
//     int i;
// // 
//     for(i=0;i<3;i++)
//     {
//         fgets(str, sizeof(str),stdin);
//         printf("Read %d: %s \n", i+1, str);
//     }
//     return 0;
// }

// 책 inputButFlush
// void ClearLineFromReadBuffer(void)
// {
//     while(getchar()!='\n');
// }

// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력 : ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     ClearLineFromReadBuffer();

//     fputs("이름 입력 : ", stdout);
//     fgets(name, sizeof(name), stdin);

//     printf("주민번호 : %s\n", perID);
//     printf("이름 : %s\n", name);
//     return 0;
// }

// 책 RemoveBSN
#include <stdio.h>
#include <string.h>

// void RemoveBSN(char str[])
// {
//     int len=strlen(str);
//     str[len-1]=0;
// }

// int main(void)
// {
//     char str[100];
//     printf("문자열 입력 : ");
//     fgets(str, sizeof(str),stdin);
//     printf("길이 : %d, 내용 : %s \n", strlen(str),str);

//     RemoveBSN(str);
//     printf("길이 : %d, 내용 : %s \n", strlen(str),str);
//     return 0;
// }

// 책 StringCopyCase

// int main(void)
// {
//     char str1[20]="1234567890";
//     char str2[20];
//     char str3[5];

//     /**** case 1 ****/
//     strcpy(str2, str1);
//     puts(str2);

//     /**** case 2 ****/
//     strncpy(str3, str1, sizeof(str3));
//     puts(str3);

//     /**** case 3 ****/
//     strncpy(str3, str1, sizeof(str3)-1);
//     str3[sizeof(str3)-1]=0;
//     puts(str3);
//     return 0;
// }

// 책 StringConcatCase
// int main(void)
// {
//     char str1[20]="First~";
//     char str2[20]="Second";

//     char str3[20]="Simple num : ";
//     char str4[20]="1234567890";

//     /**** case 1 ****/
//     strcat(str1, str2);
//     puts(str1);

//     /**** case 2 ****/
//     strncat(str3, str4, 7);
//     puts(str3);
//     return 0;
// }

// 책 TwoPointDistance
// #include <math.h>

// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1, pos2;
//     double distance;

//     fputs("point1 pos : ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);

//     fputs("point2 pos : ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     /* 두 점 간의 거리 계산 공식*/
//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

//     printf("두 점 의 거리는 %g 입니다. \n",distance);
//     return 0;
// }

// #include <string.h>

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person man1,man2;
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age=23;

//     printf("이름 입력 : "); scanf("%s", man2.name);
//     printf("번호 입력 : "); scanf("%s", man2.phoneNum);
//     printf("나이 입력 : "); scanf("%d", &(man2.age));

//     printf("이름 : %s \n", man1.name); 
//     printf("번호 : %s \n", man1.phoneNum); 
//     printf("나이 : %d \n", man1.age);

//     printf("이름 : %s \n", man2.name); 
//     printf("번호 : %s \n", man2.phoneNum); 
//     printf("나이 : %d \n", man2.age);
//     return 0;
// }

// 책 22장 구조체 변수의 초기화 InitStructVal

// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct point pos={10,20};
//     struct person man={"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }

// InitStructArry
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person arr[3]=
//     {
//         {"이승기", "010-1212-0001", 21},
//         {"정지영", "010-1313-0002", 22},
//         {"한지수", "010-1717-0003", 19}
//     };

//     int i;
//     for(i=0; i<3; i++)
//         printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

//     return 0;
// }

// StructPointer
// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1={1,2};
//     struct point pos2={100,200};
//     struct point * pptr=&pos1;

//     (*pptr).xpos += 4;
//     (*pptr).ypos += 5;
//     printf("[%d, %d] \n",pptr ->xpos, pptr ->ypos);
    
//     pptr=&pos2;
//     pptr ->xpos += 1;
//     pptr ->ypos += 2;
//     printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//     return 0;
    
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct circle
// {
//     double radius;
//     struct point * center;
// };

// int main(void)
// {
//     struct point cen={2, 7};
//     double rad=5.5;

//     struct circle ring={rad, &cen};
//     printf("원의 반지름 : %g \n", ring.radius);
//     printf("원의 중심 [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//     return 0;
// }

// PointRelation
// struct point
// {
//     int xpos;
//     int ypos;
//     struct point * ptr;
// };

// int main(void)
// {
//     struct point pos1={1,1};
//     struct point pos2={2,2};
//     struct point pos3={3,3};

//     pos1.ptr = &pos2;
//     pos2.ptr = &pos3;
//     pos3.ptr = &pos1;

//     printf("점의 연결관계... \n");
//     printf("[%d, %d]와(과) [%d, %d] 연결 \n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
//     printf("[%d, %d]와(과) [%d, %d] 연결 \n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
//     printf("[%d, %d]와(과) [%d, %d] 연결 \n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
// }

//  책 23장 StructTypedef

// struct point
// {
//     int xpos;
//     int ypos;
// };

// typedef struct point Point;

// typedef struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// } person;

// int main(void)
// {
//     struct point pos={10,20};
//     struct person man={"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }

// StructValAndFunction
// typedef struct point
// {
//     int xpos;
//     int ypos;
// } Point;

// void ShowPosition(Point pos)
// {
//     printf("[%d, %d] \n", pos.xpos, pos.ypos);
// }

// Point GetCurrentPosition(void)
// {
//     Point cen;
//     printf("Input current pos : ");
//     scanf(" %d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }

// int main(void)
// {
//     Point curPos=GetCurrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }

// StructAddMin
// typedef struct point
// {
//     int xpos;
//     int ypos;
// } Point;

// Point AddPoint(Point pos1, Point pos2)
// {
//     Point pos={pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
//     return pos;
// }

// Point MinPoint(Point pos1, Point pos2)
// {
//     Point pos={pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos};
//     return pos;
// }

// int main(void)
// {
//     Point pos1={5,6};
//     Point pos2={2,9};
//     Point result;

//     result=AddPoint(pos1, pos2);
//     printf("[%d, %d] \n",result.xpos, result.ypos);
//     result=MinPoint(pos1, pos2);
//     printf("[%d, %d] \n", result.xpos, result.ypos);
//     return 0;

// }

// #include <stdio.h>

// typedef enum syllable
// {
//     Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
// } Syllable;

// void Sound(Syllable sy)
// {
//     switch(sy)
//     {
//         case Do:
//             puts("도는 하얀 도라지 ♪"); return;
//         case Re:
//             puts("레는 둥근 레코드 ♩"); return;
//         case Mi:
//             puts("미는 파란 미나리 ♩♪"); return;
//         case Fa:
//             puts("파는 예쁜 파랑새 ♪♭"); return;
//         case So:
//             puts("솔은 작은 솔방울 ♩♪♪"); return;
//         case La:
//             puts("라는 라디오고요~ ♪♩♭♩"); return;
//         case Ti:
//             puts("시는 졸졸 시냇물 ♩♭♩♪"); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~");
// }

// int main(void)
// {
//     Syllable tone;
//     for(tone=Do;tone<=Ti;tone+=1)
//         Sound(tone);
//     return 0;
// }

// int main(void)
// {
//     int ch, i;
//     FILE * fp=fopen("data.txt","rt");
//     if(fp==NULL)
//     {
//         puts("파일오픈 실패!");
//         return -1;
//     }

//     for(i=0;i<3;i++)
//     {
//         ch=fgetc(fp);
//         printf("%c \n", ch);
//     }
//     fclose(fp);
//     return 0;
// }

// int main(void)
// {
//     FILE * fp=fopen("simple.txt","wt");
//     if(fp==NULL)
//     {
//         puts("파일오픈 실패!");
//         return -1;
//     }

//     fputc('A',fp);
//     fputc('B',fp);

//     fputs("My name is Hong \n", fp);
//     fputs("Your name is Yoon \n", fp);
//     fclose(fp);
//     return 0;
// }

// int main(void)
// {
//     char str[30];
//     int ch;
//     FILE * fp=fopen("simple.txt","rt");
//     if(fp==NULL)
//     {
//         puts("파일오픈 실패!");
//         return -1;
//     }

//     ch=fgetc(fp);
//     printf("%c \n",ch);
//     ch=fgetc(fp);
//     printf("%c \n",ch);

//     fgets(str, sizeof(str), fp);
//     printf("%s", str);
//     fgets(str, sizeof(str), fp);
//     printf("%s", str);

//     fclose(fp);
//     return 0;
// }

// 책 25장 메모리 관리와 메모리 동적할당
// char name[30];

// char * ReadUserName(void)
// {

//     printf("what's your name? ");
//     gets(name);
//     return name;
// }

// int main(void)
// {
//     char * name1;
//     char * name2;
//     name1=ReadUserName();
//     printf("name1: %s \n", name1);
//     name2=ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("name1: %s \n", name1);
//     printf("name2: %s \n", name2);
//     return 0;
// }
// #include <stdlib.h>

// int main(void)
// {
//     int * ptr1 = (int *)malloc(sizeof(int));
//     int * ptr2 = (int *)malloc(sizeof(int)*7);
//     int i;

//     *ptr1 = 20;
//     for(i=0; i<7; i++)
//         ptr2[i]=i+1;

//     printf("%d \n", *ptr1);
//     for(i=0; i<7;i++)
//         printf("%d ", ptr2[i]);
    
//     free(ptr1);
//     free(ptr2);
//     return 0;
// }

// #include <stdlib.h>

// char * ReadUserName(void)
// {
//     char * name = (char *)malloc(sizeof(char)*30);
//     printf("What's your name? ");
//     gets(name);
//     return name;
// }

// int main(void)
// {
//     char * name1;
//     char * name2;
//     name1=ReadUserName();
//     printf("name1: %s \n", name1);
//     name2=ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("again name1: %s \n", name1);
//     printf("again name2: %s \n", name2);
//     free(name1);
//     free(name2);
//     return 0;
// }

