#pragma once
class Enemy
{
public:
	//�s���t�F�[�Y
	enum class Phase {
		Approach,//�ڋ�
		Leave,//���E
	};

	void Update();

	Phase GetPhase() { return phase_; }
	void SetPhase(Phase phase) { phase_ = phase; }

private:
	//�ڋ߃t�F�[�Y�X�V
	void ApproachUpdate();

	//���E�t�F�[�Y�X�V
	void LeaveUpdate();

private:
	//�����o�֐��|�C���^
	void (Enemy::* pFunc)();

	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* spFuncTable[])();

	//�t�F�[�Y
	Phase phase_ = Phase::Approach;
};