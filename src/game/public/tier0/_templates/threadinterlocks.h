// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier0/threadinterlocks.h:492
class CInterlockedIntT<long long unsigned int> {
private:

	volatile long long unsigned int m_value;  // +0x0
	CInterlockedIntT();
	CInterlockedIntT(long long unsigned int);
	long long unsigned int GetRaw();
	long long unsigned int operator()();
	long long unsigned int operator long long unsigned int();
	bool operator!();
	bool operator==(long long unsigned int);
	bool operator!=(long long unsigned int);
	long long unsigned int operator++();
	long long unsigned int operator++(int);
	long long unsigned int operator--();
	long long unsigned int operator--(int);
	bool AssignIf(long long unsigned int, long long unsigned int);
	long long unsigned int AtomicSet(long long unsigned int);
	long long unsigned int InterlockedExchange(long long unsigned int);
	long long unsigned int InterlockedOr(long long unsigned int);
	void operator|=(long long unsigned int);
	long long unsigned int InterlockedAnd(long long unsigned int);
	void operator&=(long long unsigned int);
	long long unsigned int operator=(long long unsigned int);
	void SetRaw(long long unsigned int);
	long long unsigned int AtomicAdd(long long unsigned int);
	void operator+=(long long unsigned int);
	void operator-=(long long unsigned int);
	void operator*=(long long unsigned int);
	void operator/=(long long unsigned int);
	void operator^=(long long unsigned int);
	void operator>>=(long long unsigned int);
	void operator<<=(long long unsigned int);
	void operator%=(long long unsigned int);
	long long unsigned int operator+(long long unsigned int);
	long long unsigned int operator-(long long unsigned int);
	long long unsigned int operator*(long long unsigned int);
	long long unsigned int operator/(long long unsigned int);
	long long unsigned int operator|(long long unsigned int);
	long long unsigned int operator&(long long unsigned int);
	long long unsigned int operator^(long long unsigned int);
	long long unsigned int operator%(long long unsigned int);
	void Maximize(long long unsigned int);
	void Minimize(long long unsigned int);

	// sizeof = 8
};
