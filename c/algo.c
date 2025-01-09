
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "color.c"
#include "decl_algo.c"

typedef char str[];

// for change palce (replace value with toghter)
int swp(int arg[],int val1,int val2)
{
    int tmp=arg[val1];
    arg[val1]=arg[val2];
    arg[val2]=tmp;
    return 0;
}

//sorting algortm
int sort(int arg[],int lenum)
{
    //lenum 2 ==2
    /*
        len 2 len 1 if len 1 >> =>swp
        len 0 len 1 
    */
    int tmp=lenum;
    lenum--;
    for(tmp;(arg[tmp]<arg[lenum] && lenum>=0);(lenum--,tmp--))//a[3]<a[2]
    {
        //swp
        // printf("[]");
        swp(arg,tmp,lenum);
        
    }


    return 0;
}

//for compar string char (array )
int cmpstr(char q[], char w[])
{
    int i;
    for(i=0;q[i]!='\0' || w[i]!='\0';i++)
    {
        if(q[i]==w[i])
        {
            continue;
        }
        else return 0;
    }
    return 1;
}

//compar char =f,char mached,s=start from 
int cmpchar(char a[],char f,int s)
{
    printf("\nstart cmpchar");
    for(;a[s]!=f && a[s]!='\0';s++);
    if (a[s]==f)
    {
        printf("\n math %c ",f);
        return s;
    }
    else
        return 0;
}

//for command line recive arogumant and pross
int cmdline(char *argv[],char b[],int argc)
{
    int i=0;
    printf("\n%s",argv[1]);
    while (--argc>0)
    {
        if(cmpstr(argv[i],"y"))
        {
            printf("\npk%d",i);
            return i;
        }
        i++;
        /* code */
    }
    return 0;
}







// is prime and pime number
// write binary serch and line serch  and 

// -1 is not find
// adv == advane
// * sorted array and set() in py
int binarySearch_adv(int array[] ,int arg)
{
    int low = 0 ,high = 4 ,mid;//high = len(array) - 1
    if(arg < array[low] || arg > array[high]) return -1;
    if(arg == array[low]) return low;
    if(arg == array[high]) return high;
    while (high - low> 1)
    {
        mid = (low + high) / 2;//if wrong we should be use ceil()
        if (array[mid] == arg) return mid;
        if (array[mid] > arg) high = mid;
        else low = mid; // mean (array[mid] < arg)
    }
    

    return -1;
}








// deprecate//dep
//pattern for search char ,pa=patter ,a=array for search pattern
// int ptr(char pa[],char a[])
// {
//     // . all every but exsit 3تا a==a{3,6} 
//     int i,s=0,f;
//     for(i=0;i<strlen(pa);i++)
//     {
//         switch (pa[i])
//         {//const
//         case '.':
//             //
//             break;
//         default:
//             f=cmpchar(a,pa[i],s);
//             if(f==0)
//             {
//                 printf("\niam sorry ian not find");
//                 i==0;
//                 break;
//             }
//             else
//             {
//                 printf("\nok");
//                s=f++; 
//             }
//         }
        
//     }
     
//     return 0;
// }
