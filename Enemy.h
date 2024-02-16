#pragma once
class Enemy
{
public:
	//行動フェーズ
	enum class Phase {
		Approach,//接近
		Leave,//離脱
	};

	void Update();

	Phase GetPhase() { return phase_; }
	void SetPhase(Phase phase) { phase_ = phase; }

private:
	//接近フェーズ更新
	void ApproachUpdate();

	//離脱フェーズ更新
	void LeaveUpdate();

private:
	//メンバ関数ポインタ
	void (Enemy::* pFunc)();

	//メンバ関数ポインタのテーブル
	static void (Enemy::* spFuncTable[])();

	//フェーズ
	Phase phase_ = Phase::Approach;
};