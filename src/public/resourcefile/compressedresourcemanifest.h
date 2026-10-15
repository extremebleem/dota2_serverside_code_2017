// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/compressedresourcemanifest.h:18
class CCompressedResourceManifest {
	struct CompressedResourceName_t {
		CompressedResourceName_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CCompressedResourceManifest();
	int AddResource(const char *);
	int GetResourceCount();
	const char * GetResource(int);
	void Serialize(bf_write &);
	bool Unserialize(bf_read &);
	void Copy(const CCompressedResourceManifest &);
	void Append(const CCompressedResourceManifest &);
	void Spew(const char *, int);
	bool HasResource(const char *);
	void GetResources(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void RemoveAll();
	int FindResourceIndex(const char *);

	// sizeof = 264
};

// src/public/resourcefile/compressedresourcemanifest.h:18
class CCompressedResourceManifest {
	struct CompressedResourceName_t {
		CompressedResourceName_t();
		~CompressedResourceName_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CCompressedResourceManifest();
	int AddResource(const char *);
	int GetResourceCount();
	const char * GetResource(int);
	void Serialize(bf_write &);
	bool Unserialize(bf_read &);
	void Copy(const CCompressedResourceManifest &);
	void Append(const CCompressedResourceManifest &);
	void Spew(const char *, int);
	bool HasResource(const char *);
	void GetResources(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void RemoveAll();
	int FindResourceIndex(const char *);
	~CCompressedResourceManifest();

	// sizeof = 264
};

// src/public/resourcefile/compressedresourcemanifest.h:18
class CCompressedResourceManifest {
	struct CompressedResourceName_t {
		CompressedResourceName_t();
		~CompressedResourceName_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CCompressedResourceManifest();
	int AddResource(const char *);
	int GetResourceCount();
	const char * GetResource(int);
	void Serialize(bf_write &);
	bool Unserialize(bf_read &);
	void Copy(const CCompressedResourceManifest &);
	void Append(const CCompressedResourceManifest &);
	void Spew(const char *, int);
	bool HasResource(const char *);
	void GetResources(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void RemoveAll();
	int FindResourceIndex(const char *);

	// sizeof = 264
};
