#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    char password[10],i,u=0,l=0,d=0,s=0;
      printf("\nenter the password");
    for(i=0;password[i]!='\0';i++)
        {

           password[i] = getchar();
         if(password[i]!='\0')
         {
           if(isupper(password[i]))
        {
            u++;

        }
        
           if(islower(password[i]))
        {
            l++;

        }
        
           if(isdigit(password[i]))
        {
            d++;

        }

        else    {
            s++;
        }
         }

         else 
            {
                break ;
            }
        


        }

    if(u>=1 && l>=1 && s>=1 && d>=1)
        {
            printf("\nyour password is strong ");
        }


     else if( l>=1 && s>=1 && d>=1)
        {
            printf("\nyour password is good ");
        }

    else if(l>=1 || s>=1 || d>=1)
        {
            printf("\nyour password is strong ");
        }

}