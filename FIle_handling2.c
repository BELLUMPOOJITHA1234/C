#include<stdio.h>
int main()
{
    FILE *fp1;
    fp1=fopen("icon.txt.txt","r");
    if(fp1==NULL)
    {
        printf("File connection lost\n");
        return 1;
    }
    char ch;
    int char_count=0,word_count=0,line_count=0;
    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
        break;
        printf("%c",ch);
        char_count++;
        if(ch==' '||ch=='\n')
        word_count++;
        if(ch=='\n')
        line_count++;
    }
    printf("character count:%d\n",char_count);
    printf("Words count:%d\n",word_count);
    printf("Lines count:%d\n",line_count);
    fclose(fp1);
    
}
