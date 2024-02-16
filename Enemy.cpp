#include "Enemy.h"
#include <stdio.h>

//static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::ApproachUpdate,
	&Enemy::LeaveUpdate,
};

void Enemy::Update() {
	//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::ApproachUpdate() {
	printf_s("Approach\n");
}

void Enemy::LeaveUpdate() {
	printf_s("Leave");
}