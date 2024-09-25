#include<stdio.h>
#include<string.h>
struct student{
    int a;
    struct marks{
        int chem;
    }k;
};

int main()
{
  struct student b;
  b.k.chem=99;
  printf("%d",b.k.chem);
    return 0;
}