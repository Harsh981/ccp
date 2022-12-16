#include<stdio.h>

int r();
int  main()
{
  for(r();r();r())
    {

        printf("%d",r());
        return 0;
    }
}

int r()
    {
      static int num=7;
      return num--;  

    }
