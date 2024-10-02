//book store
/*Name; Purity Thuo
Date; 28/09/24
*/


#include <stdio.h>
int main(){
int age,daysoverdue,bookID,duedate,returndate;

    printf("enter age");
    scanf("%d",&age);
         if(age>21){printf("%d congratulations you qualify for a loan \n",&age);}
        else printf(" we are unable to offer you a loan now\n");

        printf("enter daysoverdue");
        scanf("%d",&daysoverdue);
        if (daysoverdue<=7);
        {printf("%d *20 is charge\n");}
        if (daysoverdue<=14);
            else{printf("%d *50");}
             printf ("%d*100\n");

             printf("enter bookID");
             scanf("%d",&bookID);
             printf("the bookID is %d\n");

             printf("enter duedate");
             scanf("%d",&duedate);
             printf("the duedate is %d\n");

             printf("enter returndate");
             scanf("%d",&returndate);
             printf("the return date is %d\n");




    return 0;
}
