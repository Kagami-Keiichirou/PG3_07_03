#include "Enemy.h"
#include <stdio.h>

//staticで宣言したメンバ関数ポインタテーブルの実体
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::ApproachUpdate,
	&Enemy::LeaveUpdate,
};

void Enemy::Update() {
	//メンバ関数ポインタに入っている関数を呼び出す
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::ApproachUpdate() {
	printf_s("Approach\n");
}

void Enemy::LeaveUpdate() {
	printf_s("Leave");
}