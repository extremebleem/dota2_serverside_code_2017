// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/rtime.h:54
class CRTime {
private:

	RTime32 m_nStartTime;  // +0x0
	static RTime32 sm_nTimeCur;
	static char sm_rgchLocalTimeCur[16];
	static char sm_rgchLocalDateCur[16];
	static RTime32 sm_nTimeLastSystemTimeUpdate;
	bool m_bGMT;  // +0x4
	CRTime();
	CRTime(RTime32);
	void SetToCurrentTime();
	void SetFromCurrentTime(int);
	int CSecsPassed();
	RTime32 GetRTime32();
	void SetRTime32(RTime32);
	void UpdateRealTime();
	void SetSystemClock(RTime32);
	RTime32 RTime32TimeCur();
	const char * Render(char &);
	const char * Render(RTime32, char &);
	char * PchTimeCur();
	char * PchDateCur();
	bool operator==(const CRTime &);
	bool operator<(const CRTime &);
	bool operator<=(const CRTime &);
	bool operator>(const CRTime &);
	bool operator>=(const CRTime &);
	bool operator==(const RTime32 &);
	bool operator<(const RTime32 &);
	bool operator<=(const RTime32 &);
	bool operator>(const RTime32 &);
	bool operator>=(const RTime32 &);
	const CRTime & operator=(const RTime32 &);
	const CRTime & operator=(const CRTime &);
	const CRTime operator+(const int &);
	const CRTime & operator+=(const int &);
	int GetYear();
	int GetMonth();
	int GetDayOfYear();
	int GetDayOfMonth();
	int GetDayOfWeek();
	int GetHour();
	int GetMinute();
	int GetSecond();
	int GetISOWeekOfYear();
	RTime32 RTime32BeginningOfDay(RTime32);
	RTime32 RTime32BeginningOfNextDay(RTime32);
	RTime32 RTime32FirstDayOfMonth(RTime32);
	RTime32 RTime32LastDayOfMonth(RTime32);
	RTime32 RTime32FirstDayOfNextMonth(RTime32);
	RTime32 RTime32LastDayOfNextMonth(RTime32);
	bool BIsLeapYear(int);
	bool BIsLeapYear();
	RTime32 RTime32FromFmtString(const char *, const char *);
	RTime32 RTime32FromHTTPDateString(const char *);
	RTime32 RTime32FromRFC3339UTCString(const char *);
	const char * RTime32ToRFC3339UTCString(RTime32, char &);
	RTime32 RTime32FromString(const char *);
	const char * RTime32ToString(RTime32, char &, bool, bool);
	const char * RTime32ToDayString(RTime32, char &, bool);
	RTime32 RTime32NthDayOfMonth(RTime32, int);
	RTime32 RTime32MonthAddChooseDay(int, RTime32, int);
	RTime32 GetBeginningOfDay();
	RTime32 GetBeginningOfNextDay();
	RTime32 GetFirstDayOfMonth();
	RTime32 GetLastDayOfMonth();
	RTime32 GetFirstDayOfNextMonth();
	RTime32 GetLastDayOfNextMonth();
	RTime32 GetNthDayOfMonth(int);
	RTime32 MonthAddChooseDay(int, int);
	RTime32 RTime32DateAdd(RTime32, int, ETimeUnit);
	RTime32 DateAdd(int, ETimeUnit);
	ETimeUnit FindTimeBoundaryCrossings(RTime32, RTime32, bool *);
	void SetToGMT(bool);
	const CRTime & operator=(const CSTime &);
	CRTime(const CSTime &);

	// sizeof = 8
};
