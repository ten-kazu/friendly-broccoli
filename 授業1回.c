/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    /**名前を付けて数を保存しとく**/
    int karei = 6495;
 
/**プリント　文字を表示する**/

    printf("私の学籍番号は2451%d。\n",karei);
    
     karei=karei*2;
    printf("ミスった。2451%dだわ。",karei);
    return 0;
}