// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_chat_language_analyzer.h:26
class CChatLanguageAnalyzer {
private:

	CChatLanguageAnalyzer();
	~CChatLanguageAnalyzer();
	bool BInit(CUtlString &);
	ELanguage GuessLanguageForSnippet(const char *);
	ELanguage GuessLanguageForText(const char * const *, int, float *);
	int IdentifyPhrasesInSnippet(const char *, int *, int);
	ELanguage GetPhraseLanguage(int);
	const char * GetPhraseText(int);
	bool IsDelim(uchar32);

	// sizeof = 48
};
