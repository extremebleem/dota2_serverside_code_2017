// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/localization_provider.h:46
class CLocalizationProvider {
	int ()() * * _vptr.CLocalizationProvider;  // +0x0
	CLocalizationProvider(CLocalizationProvider &);
	CLocalizationProvider(const CLocalizationProvider &);
	CLocalizationProvider();
	virtual locchar_t * Find(const char *);
	virtual void ConstructString(locchar_t *, int, const locchar_t *, int, ...);
	virtual void ConstructString(locchar_t *, int, const locchar_t *, KeyValues *);
	virtual void ConvertLoccharToANSI(const locchar_t *, CUtlConstString *);
	virtual void ConvertLoccharToUnicode(const locchar_t *, CUtlConstWideString *);
	virtual void ConvertUTF8ToLocchar(const char *, CUtlConstStringBase<wchar_t> *);
	virtual int ConvertLoccharToANSI(const locchar_t *, char *, int);
	virtual int ConvertLoccharToUnicode(const locchar_t *, wchar_t *, int);
	virtual void ConvertUTF8ToLocchar(const char *, locchar_t *, int);
	virtual ELanguage GetELang();

	// vtable[0] Find
	// vtable[1] ConstructString
	// vtable[2] ConstructString
	// vtable[3] ConvertLoccharToANSI
	// vtable[4] ConvertLoccharToUnicode
	// vtable[5] ConvertUTF8ToLocchar
	// vtable[6] ConvertLoccharToANSI
	// vtable[7] ConvertLoccharToUnicode
	// vtable[8] ConvertUTF8ToLocchar
	// vtable[9] GetELang
	// sizeof = 8
};

// src/game/shared/econ/localization_provider.h:109
class CVGUILocalizationProvider : public CLocalizationProvider {
public:

	CVGUILocalizationProvider(CVGUILocalizationProvider &);
	CVGUILocalizationProvider(const CVGUILocalizationProvider &);
	CVGUILocalizationProvider();
	virtual locchar_t * Find(const char *);
	virtual void ConstructString(locchar_t *, int, const locchar_t *, int, ...);
	virtual void ConstructString(locchar_t *, int, const locchar_t *, KeyValues *);
	virtual void ConvertLoccharToANSI(const locchar_t *, CUtlConstString *);
	virtual void ConvertLoccharToUnicode(const locchar_t *, CUtlConstWideString *);
	virtual void ConvertUTF8ToLocchar(const char *, CUtlConstStringBase<wchar_t> *);
	virtual int ConvertLoccharToANSI(const locchar_t *, char *, int);
	virtual int ConvertLoccharToUnicode(const locchar_t *, wchar_t *, int);
	virtual void ConvertUTF8ToLocchar(const char *, locchar_t *, int);
	virtual ELanguage GetELang();

	// vtable[0] Find
	// vtable[1] ConstructString
	// vtable[2] ConstructString
	// vtable[3] ConvertLoccharToANSI
	// vtable[4] ConvertLoccharToUnicode
	// vtable[5] ConvertUTF8ToLocchar
	// vtable[6] ConvertLoccharToANSI
	// vtable[7] ConvertLoccharToUnicode
	// vtable[8] ConvertUTF8ToLocchar
	// vtable[9] GetELang
	// sizeof = 8
};

// src/game/shared/econ/localization_provider.h:223
class CConstructLocalizedString {
	enum {
		kBufferSize = 0x200,
	};

private:

	wchar_t m_loc_Buffer[512];  // +0x0
	CConstructLocalizedString(CLocalizationProvider *, const locchar_t *, KeyValues *);
	const locchar_t * operator const locchar_t*();
	const locchar_t * Get();

	// sizeof = 2048
};
