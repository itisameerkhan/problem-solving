#include <stdio.h>
void primefactor(int num) {
    printf("Prime factors of the number : ");     
    for (int i = 2; num > 1; i++) {
                  while (num % i == 0) {
                        printf("%d ", i);             
                        num = num / i;         
                       }     
                   } 
                } 
int main() {
      int num;     
      num=12;
      primefactor(num);     
     return 0; 
}