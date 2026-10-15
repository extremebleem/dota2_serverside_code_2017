// Reconstructed from DWARF by pahole; not original source.

// src/game/public/configurationsystem/iconfigurationsystem.h:204
class CConfigValueOptions {
	AbstractConfigChangeCallback_t m_singleValueChangeCallback;  // +0x0
	AbstractUserConfigChangeCallback_t m_userValueChangeCallback;  // +0x8
	const char * m_pszHelpText;  // +0x10
	ConfigCompletionCallback_t m_singleValueCompletionCallback;  // +0x18
	UserConfigCompletionCallback_t m_userCompletionCallback;  // +0x20
	bool m_bHasDefaultValue;  // +0x28

	unsigned int m_memDefaultValue[4];  // +0x2c
	int m_nGroup;  // +0x3c
	CConfigValueOptions(int);
	CConfigValueOptions & CompletionCallback(ConfigCompletionCallback_t);
	CConfigValueOptions & CompletionCallback(UserConfigCompletionCallback_t);
	CConfigValueOptions & HelpText(const char *);
	CConfigValueOptions & Group(int);

	// sizeof = 64
};

// src/game/public/configurationsystem/iconfigurationsystem.h:448
class CGlobalConfigValueRegistry {
private:

	static bool sm_bRegistered;
	void RegisterConfigValues();
	void AddToList(const char *, ConfigType_t, ConfigValueType_t, CConfigValueOptions &, const void * *);
	void HookUpConfigValue(const char *, ConfigType_t, ConfigValueType_t, CConfigValueOptions &, const void * *);

	// sizeof = 1
};
