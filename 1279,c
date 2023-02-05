#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
   char year[1000001];
   int m4, m15, m55, m100, m400;
   int isLeapYear, isHuluculu, isBulukulu;
   int i, length;
   int firstInput = 1;

   while (scanf("%s", year) != EOF) {
      if (!firstInput) {
         printf("\n");
      }
      firstInput = 0;
      isLeapYear = isHuluculu = isBulukulu = 0;
      m4 = m15 = m55 = m100 = m400 = 0;
      length = strlen(year);

      for (i = 0; i < length; ++i) {
         m4 = (m4 * 10 + (year[i] - '0')) % 4;
         m15 = (m15 * 10 + (year[i] - '0')) % 15;
         m55 = (m55 * 10 + (year[i] - '0')) % 55;
         m100 = (m100 * 10 + (year[i] - '0')) % 100;
         m400 = (m400 * 10 + (year[i] - '0')) % 400;
      }

      if ((m4 == 0 && m100 != 0) || (m400 == 0)) {
         printf("This is leap year.\n");
         isLeapYear = isHuluculu = 1;
      }

      if (m15 == 0) {
         printf("This is huluculu festival year.\n");
         isHuluculu = 1;
      }

      if (isLeapYear && m55 == 0) {
         printf("This is bulukulu festival year.\n");
      }
      if (!isHuluculu) {
         printf("This is an ordinary year.\n");
      }
   }

   return 0;
}
