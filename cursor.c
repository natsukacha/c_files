#include <windows.h>
#include <stdio.h>

int main(){
    int var1;
	POINT pt;
	//マウスの現在の座標を取得する
	GetCursorPos(&pt);	
	printf("%d    %d",pt.x,pt.y);
	return 0;
}	