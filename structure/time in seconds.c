#include<stdio.h>

struct time{
    int hour;
    int minute;
    int second;
};
int main (){
    struct time time,t1,t2;
    int sum,diff,total1,total2;
    printf("give me two of the times\n");;

    printf("-----------\n");

    printf(" first time\n");
    printf("hour\n");
    scanf("%d",&t1.hour);
    printf("minute\n");
    scanf("%d",&t1.minute);
    printf("second\n");
    scanf("%d",&t1.second);

        printf("\n");

    printf(" second time\n");
    printf("hour\n");
    scanf("%d\n",&t2.hour);
    printf("minute\n");
    scanf("%d\n",&t2.minute);
    printf("second\n");
    scanf("%d\n",&t2.second);


    total1=t1.hour*3600+t1.minute*60+t1.second;
    total2=t2.hour*3600+t2.minute*60+t2.second;

    printf("first time total in second:%d\n",total1);

    printf("second time in seconds:%d\n",total2);


    return 0;


}
