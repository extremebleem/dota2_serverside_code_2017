// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/icekey.h:37
class IceKey {
private:

	int _size;  // +0x0
	int _rounds;  // +0x4
	IceKey(int);
	~IceKey();
	void set(const unsigned char *);
	void encrypt(const unsigned char *, unsigned char *);
	void decrypt(const unsigned char *, unsigned char *);
	int keySize();
	int blockSize();
	void scheduleBuild(short unsigned int *, int, const int *);

	// sizeof = 16
};
