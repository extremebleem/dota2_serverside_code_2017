// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier2/fileutils.h:168
class CBaseFile {
	FileHandle_t m_FileHandle;  // +0x0
	CBaseFile();
	~CBaseFile();
	FileHandle_t Handle();
	void Close();
	void Open(const char *, const char *);
	char * ReadLine(char *, int);
	CUtlString ReadLine(bool);
	void ReadLines(CUtlStringList &, int);
	int Read(void *, int);
	void MustRead(void *, int);
	int Write(const void *, int);
	void PutInt(int);
	int GetInt();
	float GetFloat();
	void PutFloat(float);
	bool IsOk();
	bool AtEndOfFile();
	void Seek(int, FileSystemSeek_t);
	unsigned int Tell();
	unsigned int Size();
	void ReadFile(CUtlBuffer &);

	// sizeof = 8
};
