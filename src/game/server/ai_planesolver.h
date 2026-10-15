// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_planesolver.h:37
class Obstacle_t {
private:

	intp m_Data;  // +0x0
	Obstacle_t(intp);
	intp GetRaw();
	void SetRaw(intp);
	intp * GetRawPtrForWrite();
	bool operator==(const Obstacle_t &);
	bool operator!=(const Obstacle_t &);
	bool operator<(const Obstacle_t &);
	bool operator<=(const Obstacle_t &);
	bool operator>(const Obstacle_t &);
	bool operator>=(const Obstacle_t &);
	Obstacle_t & operator++();
	Obstacle_t operator++(int);
	Obstacle_t & operator--();
	Obstacle_t operator--(int);
	Obstacle_t & operator=(intp);

	// sizeof = 8
};
