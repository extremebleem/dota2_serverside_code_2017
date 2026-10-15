// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/loggingmetahelpers.h:185
class CLogging_MetaDataAllocator {
protected:

	CLogging_MetaDataAllocator(LoggingVerbosity_t);
	uint8 * Allocate(uint64, size_t, uint, LoggingVerbosity_t);
	void Duplicate(LoggingMetaData_t *, LoggingVerbosity_t);
	void ReleaseEarly(uint8 *);
	~CLogging_MetaDataAllocator();

	// sizeof = 24
};

// src/public/tier1/loggingmetahelpers.h:353
struct Logging_VarArgsResolver_t {
	const Color * m_pColor;  // +0x8
	Logging_VarArgsResolver_t(float);
	Logging_VarArgsResolver_t(float, Color &, LoggingMetaData_t *);
	Logging_VarArgsResolver_t(float, LoggingMetaData_t *, Color &);
	void Initialize(const Color *, LoggingMetaData_t *);

	// sizeof = 16
};

// src/public/tier1/loggingmetahelpers.h:378
class CLoggingInternalMsg_ScopeVerification {
	const bool & m_bAllowDestruction;  // +0x0
	const char * m_szDeclaredFile;  // +0x8
	int m_DeclaredLine;  // +0x10
	CLoggingInternalMsg_ScopeVerification(bool &, int, const char *);
	~CLoggingInternalMsg_ScopeVerification();

	// sizeof = 24
};

// src/public/tier1/loggingmetahelpers.h:416
class _CMetaDataAllocatorProtectedAccessor : public CLogging_MetaDataAllocator {
public:

	void Resolve(LoggingMetaData_t * &);

private:

	_CMetaDataAllocatorProtectedAccessor();

	// sizeof = 24
};
