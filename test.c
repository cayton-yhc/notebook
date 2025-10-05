//存在子串s1、s2，且s1右点在s2左点前
#include<stdio.h>
#include<string.h>

int main(){
    //如何将字符串优美地存入三段数组？
    char str[350];
    fgets(str,sizeof(str),stdin);

    char *s=strtok(str,",");
    char *s1=strtok(NULL,",");
    char *s2=strtok(NULL,",");//如何不硬编？

    str[strcspn(str, "\n")] = '\0';

    if(!(strstr(s,s1)!=NULL&&strstr(s,s2)!=NULL)){
        printf("-1");//说明不是“两个子串都存在”
        return 0;
    }

    //怎样计算地址间的距离？怎么找到最左s2和最右s1？
    if(s1+strlen(s1)-1>=s2){
        printf("-1");//交叉了
        return 0;
    }

    //那么以下就是最右s1右端在最左s2左端左侧,怎么计算跨度？

    //剩下的就是将跨度输出

}