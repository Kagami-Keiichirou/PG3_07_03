#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <string>
#include <chrono>
#include <utility>

using namespace std;

//#include "MyMath.h"

int main() {
	std::string a(100000, 'a');

	printf("100,000文字を移動とコピーで比較しました。\n");

	std::chrono::system_clock::time_point  start1, end1;
	start1 = std::chrono::system_clock::now(); // 計測開始時間

	std::string b = a;

	end1 = std::chrono::system_clock::now();  // 計測終了時間
	double elapsed1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count(); //処理に要した時間をミリ秒に変換

	std::chrono::system_clock::time_point  start2, end2;
	start2 = std::chrono::system_clock::now(); // 計測開始時間

	std::string c = std::move(a);

	end2 = std::chrono::system_clock::now();  // 計測終了時間
	double elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count(); //処理に要した時間をミリ秒に変換

	printf("コピー: %lfμs\n", elapsed1);
	printf("移動: %lfμs\n", elapsed1);

	return 0;
}