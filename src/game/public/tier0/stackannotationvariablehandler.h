// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier0/stackannotationvariablehandler.h:43
class IAnnotationPackager {
	void String(const char *);
	void String(HAnnotationOverrideContext_t, const char *);
	void FmtString(const char *, ...);
	void FmtString(HAnnotationOverrideContext_t, const char *, ...);
	size_t GetOverrideContextSize();
	HAnnotationOverrideContext_t CreateOverrideContext(void *, const void *, bool);

	// sizeof = 1
};
