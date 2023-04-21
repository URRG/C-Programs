#include <stdio.h>
struct date
{  int day,month,year;
    
};
struct detail
{  char name[20];
   int SAPID;
   struct date birthday;
   struct date join;
};

int main()
{
   
 struct detail s;
    printf("Enter Name");
    scanf("%c",&s.name);
    printf("Enter SAPID");
    scanf("%d",&s.SAPID);
    printf("Enter birth day");
    scanf("%d",&birthday.day);
    printf("Enter birth month");
    scanf("%c",&birthday.month);
    printf("Enter birth year");
    scanf("%c",&birthday.year);
    printf("Enter Joining day");
    scanf("%d",&join.day);
    printf("Enter joining month");
    scanf("%c",&join.month);
    printf("Enter joining year");
    scanf("%c",&join.year);

    return 0;
}
