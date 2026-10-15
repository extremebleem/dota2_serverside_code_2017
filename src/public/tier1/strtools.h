// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/strtools.h:505
class CStrAutoEncode {
private:

	const char * m_pch;  // +0x0
	const uchar16 * m_pch16;  // +0x8
	const uchar32 * m_pch32;  // +0x10
	bool m_bHaveUTF8:1;  // +0x18:0
	bool m_bAllocatedUTF8:1;  // +0x18:1
	bool m_bHaveUTF16:1;  // +0x18:2
	bool m_bAllocatedUTF16:1;  // +0x18:3
	bool m_bHaveUTF32:1;  // +0x18:4
	bool m_bAllocatedUTF32:1;  // +0x18:5
	bool m_bIsEmpty:1;  // +0x18:6
	CStrAutoEncode(const char *);
	CStrAutoEncode(const uchar16 *);
	CStrAutoEncode(const uchar32 *);
	~CStrAutoEncode();
	void Set(const char *);
	void Set(const uchar16 *);
	void Set(const uchar32 *);
	void SetCopy(const char *, int);
	void SetCopy(const uchar16 *, int);
	void SetCopy(const uchar32 *, int);
	void SetUTF32Copy(const char *);
	void SetUTF32Copy(const uchar16 *);
	CStrAutoEncode & Copy(const CStrAutoEncode &);
	const char * ToString();
	const char * ToUTF8();
	char * ToStringWritable();
	const uchar16 * ToUTF16();
	uchar16 * ToUTF16Writable();
	const uchar32 * ToUTF32();
	uchar32 * ToUTF32Writable();
	const wchar_t * ToWString();
	wchar_t * ToWStringWritable();
	void Clear();
	bool IsEmpty();
	bool HaveUTF8();
	bool HaveUTF16();
	bool HaveUTF32();
	void InitEmpty();
	void PopulateUTF8();
	void PopulateUTF16();
	void PopulateUTF32();

	// sizeof = 32
};
