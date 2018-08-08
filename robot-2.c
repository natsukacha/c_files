#include <windows.h>
#include <stdio.h>
int main(){
    //open sleepsign
    int second = 1000;
	SetCursorPos(343,1058);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	Sleep(second);
	
		//click open folda mark 
	SetCursorPos(29,67);
	mouse_event( MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	Sleep(second);
	
	
	//click Desktop
	SetCursorPos(322,334);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	Sleep(second);
	

	INPUT data;
    memset(&data, 0, sizeof(data));
    data.type = INPUT_KEYBOARD;
    data.ki.wVk =0x4B;
    data.ki.wScan = MapVirtualKey(0x4B, 0);
    data.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
    UINT count = SendInput(
    1,
    &data,	
    sizeof(INPUT) 
    );
	//key press "c"
    INPUT data2;
    memset(&data2, 0, sizeof(data2));
    data2.type = INPUT_KEYBOARD;
    data2.ki.wVk =0x43;
    data2.ki.wScan = MapVirtualKey(0x43, 0);
    data2.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
    UINT count2 = SendInput(
        1,
        &data2,	
        sizeof(INPUT) 
        );
	//key press "d"
    INPUT data3;
    memset(&data3, 0, sizeof(data3));
    data3.type = INPUT_KEYBOARD;
    data3.ki.wVk =0x44;
    data3.ki.wScan = MapVirtualKey(0x44, 0);
    data3.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
    UINT count3 = SendInput(
        1,
        &data3,		
        sizeof(INPUT) 	
        );			
	
	//Open
	SetCursorPos(1057,766);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	Sleep(second);
	
	
	//report
	SetCursorPos(1079,499);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	Sleep(second);
	//animal report
	SetCursorPos(1154,551);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	Sleep(second);
	
	
	return 0;		
}