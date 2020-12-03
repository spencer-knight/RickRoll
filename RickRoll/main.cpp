#include <stdlib.h>
#include<thread>
#include<chrono>
#include <Windows.h>

int main() {
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	std::this_thread::sleep_for(std::chrono::seconds(10));
	
	for (int i = 0; i < 10; i++) {
		system("\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\" https://youtu.be/oHg5SJYRHA0");
		std::this_thread::sleep_for(std::chrono::seconds(600));
	}
}
