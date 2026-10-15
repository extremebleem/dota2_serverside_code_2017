// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/runningstat.h:13
class RunningStat {
private:

	int m_n;  // +0x0

	double m_oldM;  // +0x8
	double m_newM;  // +0x10
	double m_oldS;  // +0x18
	double m_newS;  // +0x20
	RunningStat();
	void Clear();
	void Push(double);
	int NumDataValues();
	double Mean();
	double Variance();
	double StandardDeviation();

	// sizeof = 40
};
