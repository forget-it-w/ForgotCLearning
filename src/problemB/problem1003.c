//
// Created by forgot on 2019-08-02.
//
/*1003 我要通过！ (20 point(s))*/
/*“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA

输出样例：
YES
YES
YES
YES
NO
NO
NO
NO*/

//题目很难懂啊，先略过

#include <stdio.h>
#include <string.h>

//int main() {
//    int n;
//    scanf("%d", &n);
////    char *p[10];
//    char input[101];
//
////    scanf("%s", input);
////    p[0] = input;
////    printf("%s", p[0]);
//
////    scanf("%s", p[0]);
//
//    for (int i = 0; i < n; i++) {
////        char input[100];
//        scanf("%s", input);
////        p[i] = input;
////        for (int j = 0; j <strlen(p[i]) ; ++j) {
////            if
////        }
////1表示yes , 0表示no
//        int flag = 1;
////        printf("length=%d", strlen(input));
//        for (int j = 0; j < strlen(input); ++j) {
//            if (input[i] == 'P' || input[i] == 'A' || input[i] == 'T') {
//                continue;
//            } else {
//                flag = 0;
//            }
//        }
//        if (flag) {
//            printf("YES");
//        } else {
//            printf("NO");
//        }
//
////        printf("p[%d]=%s\n", i, p[i]);
////        printf("%s", p[i]);
////        printf("%d", i);
//    }
//
//    return 0;
//}
