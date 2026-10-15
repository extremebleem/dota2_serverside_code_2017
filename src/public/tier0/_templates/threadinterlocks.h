// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/threadinterlocks.h:492
class CInterlockedIntT<int> {
private:

	volatile int m_value;  // +0x0
	CInterlockedIntT();
	CInterlockedIntT(int);
	int GetRaw();
	int operator()();
	int operator int();
	bool operator!();
	bool operator==(int);
	bool operator!=(int);
	int operator++();
	int operator++(int);
	int operator--();
	int operator--(int);
	bool AssignIf(int, int);
	int AtomicSet(int);
	int InterlockedExchange(int);
	int InterlockedOr(int);
	void operator|=(int);
	int InterlockedAnd(int);
	void operator&=(int);
	int operator=(int);
	void SetRaw(int);
	int AtomicAdd(int);
	void operator+=(int);
	void operator-=(int);
	void operator*=(int);
	void operator/=(int);
	void operator^=(int);
	void operator>>=(int);
	void operator<<=(int);
	void operator%=(int);
	int operator+(int);
	int operator-(int);
	int operator*(int);
	int operator/(int);
	int operator|(int);
	int operator&(int);
	int operator^(int);
	int operator%(int);
	void Maximize(int);
	void Minimize(int);

	// sizeof = 4
};

// src/public/tier0/threadinterlocks.h:492
class CInterlockedIntT<unsigned int> {
private:

	volatile unsigned int m_value;  // +0x0
	CInterlockedIntT();
	CInterlockedIntT(unsigned int);
	unsigned int GetRaw();
	unsigned int operator()();
	unsigned int operator unsigned int();
	bool operator!();
	bool operator==(unsigned int);
	bool operator!=(unsigned int);
	unsigned int operator++();
	unsigned int operator++(int);
	unsigned int operator--();
	unsigned int operator--(int);
	bool AssignIf(unsigned int, unsigned int);
	unsigned int AtomicSet(unsigned int);
	unsigned int InterlockedExchange(unsigned int);
	unsigned int InterlockedOr(unsigned int);
	void operator|=(unsigned int);
	unsigned int InterlockedAnd(unsigned int);
	void operator&=(unsigned int);
	unsigned int operator=(unsigned int);
	void SetRaw(unsigned int);
	unsigned int AtomicAdd(unsigned int);
	void operator+=(unsigned int);
	void operator-=(unsigned int);
	void operator*=(unsigned int);
	void operator/=(unsigned int);
	void operator^=(unsigned int);
	void operator>>=(unsigned int);
	void operator<<=(unsigned int);
	void operator%=(unsigned int);
	unsigned int operator+(unsigned int);
	unsigned int operator-(unsigned int);
	unsigned int operator*(unsigned int);
	unsigned int operator/(unsigned int);
	unsigned int operator|(unsigned int);
	unsigned int operator&(unsigned int);
	unsigned int operator^(unsigned int);
	unsigned int operator%(unsigned int);
	void Maximize(unsigned int);
	void Minimize(unsigned int);

	// sizeof = 4
};

// src/public/tier0/threadinterlocks.h:677
class CInterlockedPtr<IWrappedInterpolatedVar::WorkItem_t> {
private:

	volatile WorkItem_t * m_value;  // +0x0
	CInterlockedPtr();
	CInterlockedPtr(WorkItem_t *);
	WorkItem_t * GetRaw();
	WorkItem_t * operator IWrappedInterpolatedVar::WorkItem_t*();
	bool operator!();
	bool operator==(WorkItem_t *);
	bool operator!=(WorkItem_t *);
	WorkItem_t * operator++();
	WorkItem_t * operator++(int);
	WorkItem_t * operator--();
	WorkItem_t * operator--(int);
	bool AssignIf(WorkItem_t *, WorkItem_t *);
	WorkItem_t * operator=(WorkItem_t *);
	WorkItem_t * AtomicSet(WorkItem_t *);
	WorkItem_t * InterlockedExchange(WorkItem_t *);
	void operator+=(int);
	void operator-=(int);
	WorkItem_t * AtomicAdd(int);
	WorkItem_t * operator+(int);
	WorkItem_t * operator-(int);
	WorkItem_t * operator+(unsigned int);
	WorkItem_t * operator-(unsigned int);
	size_t operator-(WorkItem_t *);
	size_t operator-(const CInterlockedPtr<IWrappedInterpolatedVar::WorkItem_t> &);

	// sizeof = 8
};

// src/public/tier0/threadinterlocks.h:677
class CInterlockedPtr<QueryCacheUpdateRecord_t> {
private:

	volatile QueryCacheUpdateRecord_t * m_value;  // +0x0
	CInterlockedPtr();
	CInterlockedPtr(QueryCacheUpdateRecord_t *);
	QueryCacheUpdateRecord_t * GetRaw();
	QueryCacheUpdateRecord_t * operator QueryCacheUpdateRecord_t*();
	bool operator!();
	bool operator==(QueryCacheUpdateRecord_t *);
	bool operator!=(QueryCacheUpdateRecord_t *);
	QueryCacheUpdateRecord_t * operator++();
	QueryCacheUpdateRecord_t * operator++(int);
	QueryCacheUpdateRecord_t * operator--();
	QueryCacheUpdateRecord_t * operator--(int);
	bool AssignIf(QueryCacheUpdateRecord_t *, QueryCacheUpdateRecord_t *);
	QueryCacheUpdateRecord_t * operator=(QueryCacheUpdateRecord_t *);
	QueryCacheUpdateRecord_t * AtomicSet(QueryCacheUpdateRecord_t *);
	QueryCacheUpdateRecord_t * InterlockedExchange(QueryCacheUpdateRecord_t *);
	void operator+=(int);
	void operator-=(int);
	QueryCacheUpdateRecord_t * AtomicAdd(int);
	QueryCacheUpdateRecord_t * operator+(int);
	QueryCacheUpdateRecord_t * operator-(int);
	QueryCacheUpdateRecord_t * operator+(unsigned int);
	QueryCacheUpdateRecord_t * operator-(unsigned int);
	size_t operator-(QueryCacheUpdateRecord_t *);
	size_t operator-(const CInterlockedPtr<QueryCacheUpdateRecord_t> &);

	// sizeof = 8
};
