#include <stdio.h>

int main() {
  int a,b,c,max,min;
  printf("masukan bilangan 1 :");
  scanf("%d",&a );
  printf("masukan bilangan 2 :");
  scanf("%d",&b );
  printf("masukan bilangan 3 :");
  scanf("%d",&c );

  if (a>b) {
    /* code */max=a;min=b;
  } else {
    /* code */max=b;min=a;
  }
  if(c>max)max=c;
  if(c<min)min=c;
  printf("\nbilangan terbesar : %d\n",max );
  printf("bilangan terkecil : %d\n",min );
  return 0;
}
