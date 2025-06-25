#include <stdio.h>

void del_digit(char str[])
{
	/* ここにコードを追加 */
    int i = 0, j = 0;
    while (str[i] != '\0') {       // 文字列の終端までループ
        if (str[i] < '0' || str[i] > '9') { // 数字でない場合
            str[j++] = str[i];     // 数字でない文字を前に詰める
        }
        i++;
    }
    str[j] = '\0'; // 新しい終端を設定
    
}

int main(void)
{ //数字でも良い
	char str[100];
	printf("文字列を入力してください：str = ");
	fgets("%s",str);
	
	printf("数字の削除！\n");
	
	del_digit(str);
	
	printf("str = %s\n",str);
	
	return(0);
}