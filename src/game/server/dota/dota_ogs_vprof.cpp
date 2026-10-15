// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_ogs_vprof.cpp:50
class CVProfOGSMode {
	class CVProfSample : public CVProfReporter {
	public:

		typedef CUtlDelegate<void(CVProfOGSMode::CVProfSample*)> Callback_t;

		Callback_t m_onReportDelegate;  // +0x60
		uint16 m_nReportNum;  // +0x78

		float m_fStartTime;  // +0x7c
		float m_fEndTime;  // +0x80

	protected:

		CVProfSample(CVProfSample &);
		CVProfSample(const CVProfSample &);
		CVProfSample(CVProfOGSMode *, float, uint16);
		bool ScheduleQuery(const Callback_t &);
		/* tag__fprintf: const_type tag not supported! */;
		virtual void OnReport();
		void SetOwner(CVProfOGSMode *);
		virtual ~CVProfSample();

		// vtable[2] OnReport
		// sizeof = 144
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CVProfOGSMode;  // +0x0
protected:

	const ReportType_t m_nReportType;  // +0x8
	typedef CUtlDelegate<void(CVProfile*)> VprofEngineCallback_t;

private:

	VprofEngineCallback_t m_scheduledCallback;  // +0x10
	int m_nRefCount;  // +0x28
	CVProfOGSMode(const CVProfOGSMode &);
	CVProfOGSMode(ReportType_t);
	void AddRef();
	void DecRef();
	const ReportType_t & GetType();
	virtual void OnGameStart();
	virtual void OnGameEnd();
	virtual void ForceImmediateReport();
	virtual void Abort();
	void UploadToDB(CVProfSample &, const ReportType_t &);
	bool ReportToStdoutInsteadOfDB();
	CVProfOGSMode * MakeModeImpl(ReportType_t);
	virtual void Tick();

protected:

	virtual ~CVProfOGSMode();
	void QueueToVProfBoundary(const VprofEngineCallback_t &);
	/* tag__fprintf: const_type tag not supported! */;

private:

	void OnVProfBoundaryThunk(CVProfile *);

	// vtable[0] OnGameStart
	// vtable[1] OnGameEnd
	// vtable[2] ForceImmediateReport
	// vtable[3] Abort
	// vtable[4] Tick
	// sizeof = 48
};

// src/game/server/dota/dota_ogs_vprof.cpp:275
class CVProfOGSModeFullGameAverage : public CVProfOGSMode {
public:

protected:

	uint16 m_nReportNum;  // +0xc0
	bool m_bAborted;  // +0xc2
	CVProfOGSModeFullGameAverage(CVProfOGSModeFullGameAverage &);
	CVProfOGSModeFullGameAverage(const CVProfOGSModeFullGameAverage &);
	CVProfOGSModeFullGameAverage();
	virtual void OnGameStart();
	virtual void OnGameEnd();
	virtual void ForceImmediateReport();
	virtual void Abort();
	void Deferred_StartRecording(CVProfile *);
	void Deferred_DoneRecording(CVProfile *);
	void Deferred_ReportIsReady(CVProfSample *);
	virtual ~CVProfOGSModeFullGameAverage();

	// vtable[0] OnGameStart
	// vtable[1] OnGameEnd
	// vtable[2] ForceImmediateReport
	// vtable[3] Abort
	// sizeof = 200
};

// src/game/server/dota/dota_ogs_vprof.cpp:356
class CVProfOGSModeHeartbeat : public CVProfOGSMode {
public:

protected:

	float m_fNextReportTime;  // +0x48
	uint16 m_nReportNum;  // +0x4c
	bool m_bUploadReportOnNextSample;  // +0x4e
	bool m_bFlagForPurge;  // +0x4f
	CVProfOGSModeHeartbeat(CVProfOGSModeHeartbeat &);
	CVProfOGSModeHeartbeat(const CVProfOGSModeHeartbeat &);
	CVProfOGSModeHeartbeat();
	virtual void Tick();
	virtual void OnGameStart();
	virtual void OnGameEnd();
	virtual void ForceImmediateReport();
	virtual void Abort();
	float GetSamplingInterval();
	void Purge(bool);
	void Deferred_StartRecording(CVProfile *);
	void Deferred_ReportIsReady(CVProfSample *);
	void AddSampleToTail();
	virtual ~CVProfOGSModeHeartbeat();

	// vtable[4] Tick
	// vtable[0] OnGameStart
	// vtable[1] OnGameEnd
	// vtable[2] ForceImmediateReport
	// vtable[3] Abort
	// sizeof = 80
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVProfOGSMode::CVProfSample::~CVProfSample  (line 82, @0x0000000002631520, libserver.so)
// calls: CVProfReporter::~CVProfReporter()
void __fastcall CVProfOGSMode::CVProfSample::~CVProfSample(CVProfOGSMode::CVProfSample *const this)
{
  *this = off_4169650;
  CVProfReporter::~CVProfReporter(this);
}


// CVProfOGSMode::CVProfSample::~CVProfSample  (line 82, @0x00000000026315d0, libserver.so)  // inlines: ~CVProfSample
// calls: CVProfReporter::~CVProfReporter(), operator delete
void __fastcall CVProfOGSMode::CVProfSample::~CVProfSample(CVProfOGSMode::CVProfSample *const this)
{
  *this = off_4169650;
  CVProfReporter::~CVProfReporter(this);
  operator delete(this);
}


// CVProfOGSMode::Tick  (line 125, @0x0000000002628cf0, libserver.so)
void __fastcall CVProfOGSMode::Tick(CVProfOGSMode *const this)
{
  ;
}


// CVProfOGSMode::DecRef  (line 151, @0x00000000025fc0d0, libserver.so)
// callers: CVProfOGSMode::CVProfSample::OnReport, CVProfOGSMode::OnVProfBoundaryThunk, CDOTA_OGS_VPROF::HaltRecording
void __fastcall CVProfOGSMode::DecRef(CVProfOGSMode *const this)
{
  int v1; // eax
  bool v2; // zf

  v1 = this->m_nRefCount - 1;
  v2 = this->m_nRefCount == 1;
  this->m_nRefCount = v1;
  if ( v1 < 0 || v2 )
    (*(this->_vptr_CVProfOGSMode + 6))(this);
}


// CVProfOGSMode::~CVProfOGSMode  (line 157, @0x00000000025e0310, libserver.so)
void __fastcall CVProfOGSMode::~CVProfOGSMode(CVProfOGSMode *const this)
{
  this->_vptr_CVProfOGSMode = &off_41695F0;
}


// CVProfOGSMode::~CVProfOGSMode  (line 157, @0x00000000025e0380, libserver.so)  // inlines: ~CVProfOGSMode
// calls: operator delete
void __fastcall CVProfOGSMode::~CVProfOGSMode(CVProfOGSMode *const this)
{
  this->_vptr_CVProfOGSMode = &off_41695F0;
  operator delete(this);
}


// CVProfOGSMode::QueueToVProfBoundary  (line 170, @0x00000000025fc170, libserver.so)  // inlines: AddRef, CopyFrom<FastDelegate1<CVProfile*, void> >, SetMementoFrom, operator=
void __fastcall CVProfOGSMode::QueueToVProfBoundary(
        CVProfOGSMode *const this,
        const CVProfOGSMode::VprofEngineCallback_t *const callback)
{
  __int64 delta; // rdx

  ++this->m_nRefCount;
  delta = callback->m_Closure.m_pFunction.__delta;
  this->m_scheduledCallback.m_Closure.m_pFunction.__pfn = callback->m_Closure.m_pFunction.__pfn;
  this->m_scheduledCallback.m_Closure.m_pFunction.__delta = delta;
  this->m_scheduledCallback.m_Closure.m_pthis = callback->m_Closure.m_pthis;
}


// CVProfOGSMode::OnVProfBoundaryThunk  (line 179, @0x00000000025fc1a0, libserver.so)  // inlines: operator()
// calls: CVProfOGSMode::DecRef
void __fastcall CVProfOGSMode::OnVProfBoundaryThunk(CVProfOGSMode *const this, CVProfile *profile)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v4; // rdi

  pfn = this->m_scheduledCallback.m_Closure.m_pFunction.__pfn;
  v4 = (this->m_scheduledCallback.m_Closure.m_pthis + this->m_scheduledCallback.m_Closure.m_pFunction.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *v4 - 1);
  (pfn)(v4, profile);
  CVProfOGSMode::DecRef(this);
}


// CVProfOGSMode::UploadToDB  (line 185, @0x00000000025fc1e0, libserver.so)  // inlines: CKeyValuesDumpContextAsDevMsg, GetElement, GetInt, ReportToStdoutInsteadOfDB, operator(), operator[], ~unique_ptr
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat, Msg, CSteamWorksGameStatsUploader::AddStatsForUpload, KeyValues::SetUint64, KeyValues::Dump, KeyValues::~KeyValues, KeyValues::operator delete, _Unwind_Resume
// callers: CVProfOGSModeFullGameAverage::Deferred_ReportIsReady, CVProfOGSModeHeartbeat::Deferred_ReportIsReady
// strings: "DOTAServerVPROFReport", "VPROFReportID", "VPROFReportTypeID", "TimeReportStart", "TimeReportEnd", "FrameTimeMax" (16 total)
// globals: g_DOTASteamWorksGameStatsServer
void __fastcall CVProfOGSMode::UploadToDB(
        CVProfOGSMode *const this,
        CVProfOGSMode::CVProfSample *const sample,
        const CDOTA_OGS_VPROF::ReportType_t *const reportType)
{
  KeyValues *v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r15
  uint64 v13; // rdx
  double v14; // xmm0_8
  uint64 v15; // rdx
  double v16; // xmm0_8
  uint64 v17; // rdx
  __int64 v18; // r12
  KeyValues *v19; // rbx
  double v20; // xmm0_8
  CKeyValuesDumpContextAsDevMsg dump; // [rsp+10h] [rbp-40h] BYREF

  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, "DOTAServerVPROFReport");
  KeyValues::SetInt(v5, "VPROFReportID", *(sample + 60));
  KeyValues::SetString(v5, "VPROFReportTypeID", *reportType);
  KeyValues::SetFloat(v5, "TimeReportStart", v6);
  KeyValues::SetFloat(v5, "TimeReportEnd", v7);
  KeyValues::SetFloat(v5, "FrameTimeMax", v8);
  KeyValues::SetFloat(v5, "FrameTimeAvg", v9);
  if ( dota_ogs_report_vprof.m_pParent->m_Value.m_nValue > 10 )
  {
    Msg("VPROF OGS header:\n");
    dump.m_nDeveloperLevel = 1;
    dump._vptr_IKeyValuesDumpContext = &off_47BF050;
    KeyValues::Dump(v5, &dump, 1);
    if ( v5 != 0 )
    {
      KeyValues::~KeyValues(v5);
      KeyValues::operator delete(v5);
    }
  }
  else
  {
    Msg("Submitting VPROF data to OGS.\n");
    CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v5, -1, 1);
  }
  v10 = *(sample + 4);
  if ( v10 != 0 )
  {
    v11 = 0;
    v12 = 8 * (5LL * (v10 - 1) + 5);
    while ( 1 )
    {
      v18 = *(sample + 1) + v11;
      v19 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v19, "DOTAServerVPROFNode");
      KeyValues::SetInt(v19, "VPROFReportID", *(sample + 60));
      KeyValues::SetString(v19, "VPROFNodeID", *v18);
      KeyValues::SetInt(v19, "NumCalls", *(v18 + 8));
      v20 = 1000000.0 * *(v18 + 16);
      if ( v20 < 9.223372036854776e18 )
        v13 = v20;
      else
        v13 = (v20 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      KeyValues::SetUint64(v19, "TimeInclusive", v13);
      v14 = 1000000.0 * *(v18 + 24);
      if ( v14 >= 9.223372036854776e18 )
        v15 = (v14 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v15 = v14;
      KeyValues::SetUint64(v19, "TimeExclusive", v15);
      v16 = 1000000.0 * *(v18 + 32);
      if ( v16 >= 9.223372036854776e18 )
        v17 = (v16 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v17 = v16;
      KeyValues::SetUint64(v19, "TimePeak", v17);
      if ( dota_ogs_report_vprof.m_pParent->m_Value.m_nValue > 10 )
      {
        Msg("VPROF OGS data:\n");
        dump.m_nDeveloperLevel = 1;
        dump._vptr_IKeyValuesDumpContext = &off_47BF050;
        KeyValues::Dump(v19, &dump, 1);
        if ( v19 == 0 )
          goto LABEL_12;
        v11 += 40;
        KeyValues::~KeyValues(v19);
        KeyValues::operator delete(v19);
        if ( v11 == v12 )
          return;
      }
      else
      {
        CSteamWorksGameStatsUploader::AddStatsForUpload(&g_DOTASteamWorksGameStatsServer, v19, -1, 1);
LABEL_12:
        v11 += 40;
        if ( v11 == v12 )
          return;
      }
    }
  }
}


// CVProfOGSMode::CVProfSample::ScheduleQuery  (line 252, @0x00000000025fc610, libserver.so)  // inlines: AddRef, CopyFrom<FastDelegate1<CVProfOGSMode::CVProfSample*, void> >, ScheduleVProfQuery, SetMementoFrom, operator=
// calls: CVProfReporter::ScheduleVProfQuery(CVProfReporter*)
// callers: CVProfOGSModeFullGameAverage::OnGameEnd, CVProfOGSModeFullGameAverage::ForceImmediateReport, CVProfOGSModeHeartbeat::ForceImmediateReport, CVProfOGSModeHeartbeat::Tick
bool __fastcall CVProfOGSMode::CVProfSample::ScheduleQuery(
        CVProfOGSMode::CVProfSample *const this,
        const CVProfOGSMode::CVProfSample::Callback_t *const callback)
{
  bool result; // al
  __int64 delta; // r10

  result = CVProfReporter::ScheduleVProfQuery(this, callback);
  if ( result )
  {
    ++*(*(this + 17) + 40LL);
    delta = callback->m_Closure.m_pFunction.__delta;
    *(this + 13) = callback->m_Closure.m_pFunction.__pfn;
    *(this + 14) = delta;
    *(this + 12) = callback->m_Closure.m_pthis;
  }
  return result;
}


// CVProfOGSMode::CVProfSample::OnReport  (line 267, @0x00000000025fc100, libserver.so)  // inlines: Clear, operator()
// calls: Plat_FloatTime, CVProfOGSMode::DecRef
void __fastcall CVProfOGSMode::CVProfSample::OnReport(CVProfOGSMode::CVProfSample *const this)
{
  __m128d v2; // xmm0
  __int64 v3; // rdi
  char *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  CVProfOGSMode *v7; // rdi

  v2.m128d_f64[0] = Plat_FloatTime();
  v3 = *(this + 12);
  v4 = *(this + 13);
  v5 = *(this + 14);
  *(this + 32) = _mm_movedup_pd(v2).m128d_f64[0];
  v6 = (v5 + v3);
  if ( (v4 & 1) != 0 )
    v4 = *&v4[*v6 - 1];
  (v4)(v6, this);
  *(this + 12) = 0;
  v7 = *(this + 17);
  *(this + 13) = 0;
  *(this + 14) = 0;
  CVProfOGSMode::DecRef(v7);
}


// CVProfOGSModeFullGameAverage::~CVProfOGSModeFullGameAverage  (line 275, @0x0000000002631540, libserver.so)  // inlines: ~CVProfOGSMode, ~CVProfSample
// calls: CVProfReporter::~CVProfReporter()
void __fastcall CVProfOGSModeFullGameAverage::~CVProfOGSModeFullGameAverage(CVProfOGSModeFullGameAverage *const this)
{
  CVProfReporter *v2; // rdi

  v2 = (this + 48);
  *(v2 - 6) = off_4169690;
  *v2 = off_4169650;
  CVProfReporter::~CVProfReporter(v2);
  *this = &off_41695F0;
}


// CVProfOGSModeFullGameAverage::~CVProfOGSModeFullGameAverage  (line 275, @0x0000000002631580, libserver.so)  // inlines: ~CVProfOGSMode, ~CVProfOGSModeFullGameAverage, ~CVProfSample
// calls: CVProfReporter::~CVProfReporter(), operator delete
void __fastcall CVProfOGSModeFullGameAverage::~CVProfOGSModeFullGameAverage(CVProfOGSModeFullGameAverage *const this)
{
  CVProfReporter *v2; // rdi

  v2 = (this + 48);
  *(v2 - 6) = off_4169690;
  *v2 = off_4169650;
  CVProfReporter::~CVProfReporter(v2);
  *this = &off_41695F0;
  operator delete(this);
}


// CVProfOGSModeFullGameAverage::CVProfOGSModeFullGameAverage  (line 294, @0x00000000025fc710, libserver.so)  // inlines: AddRef, CUtlAbstractDelegate, CUtlDelegate, CVProfOGSMode, CVProfSample, ClosurePtr, CopyFrom<FastDelegate1<CVProfile*, void> >, DOTAGameRules, FastDelegate1, IsGameUnderway, QueueToVProfBoundary, SetMementoFrom, operator=, ~CVProfOGSMode
// calls: CVProfReporter::CVProfReporter(char const*,int), _Unwind_Resume
// callers: CVProfOGSMode::MakeModeImpl
// strings: "GAME_AVERAGE"
// globals: CVProfOGSModeFullGameAverage::Deferred_StartRecording(CVProfile *)
void __fastcall CVProfOGSModeFullGameAverage::CVProfOGSModeFullGameAverage(CVProfOGSModeFullGameAverage *const this)
{
  CVProfReporter *v2; // rdi
  CGameRules *v3; // rax

  *(this + 1) = "GAME_AVERAGE";
  *(this + 2) = 0;
  *(this + 3) = 0;
  v2 = (this + 48);
  *(v2 - 2) = 0;
  *(v2 - 2) = 1;
  *(v2 - 6) = off_4169690;
  CVProfReporter::CVProfReporter(v2, 0, -1);
  *(this + 18) = 0;
  *(this + 6) = off_4169650;
  *(this + 96) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  *(this + 43) = 0;
  v3 = g_pGameRules;
  *(this + 23) = this;
  *(this + 44) = -1082130432;
  *(this + 194) = 0;
  if ( v3 != 0 && *&v3[6].m_szQuestName[28] == 5 )
  {
    ++*(this + 10);
    *(this + 2) = this;
    *(this + 3) = CVProfOGSModeFullGameAverage::Deferred_StartRecording;
    *(this + 4) = 0;
  }
}


// CVProfOGSModeFullGameAverage::Abort  (line 305, @0x00000000025e0320, libserver.so)
void __fastcall CVProfOGSModeFullGameAverage::Abort(CVProfOGSModeFullGameAverage *const this)
{
  *(this + 194) = 1;
}


// CVProfOGSModeFullGameAverage::OnGameStart  (line 310, @0x00000000025e5030, libserver.so)  // inlines: AddRef, CopyFrom<FastDelegate1<CVProfile*, void> >, QueueToVProfBoundary, SetMementoFrom, operator=
// globals: CVProfOGSModeFullGameAverage::Deferred_StartRecording(CVProfile *)
void __fastcall CVProfOGSModeFullGameAverage::OnGameStart(CVProfOGSModeFullGameAverage *const this)
{
  if ( *(this + 194) == 0 )
  {
    ++*(this + 10);
    *(this + 4) = 0;
    *(this + 96) = 0;
    *(this + 3) = CVProfOGSModeFullGameAverage::Deferred_StartRecording;
    *(this + 2) = this;
  }
}


// CVProfOGSModeFullGameAverage::OnGameEnd  (line 319, @0x00000000025fc650, libserver.so)  // inlines: CUtlDelegate<CVProfOGSModeFullGameAverage, CVProfOGSModeFullGameAverage>, Convert<CVProfOGSModeFullGameAverage, void (CVProfOGSModeFullGameAverage::*)(CVProfOGSMode::CVProfSample*), void (detail::GenericClass::*)()>, FastDelegate1<CVProfOGSModeFullGameAverage, CVProfOGSModeFullGameAverage>, UtlMakeDelegate<CVProfOGSModeFullGameAverage, CVProfOGSModeFullGameAverage, CVProfOGSMode::CVProfSample*, void>, bindmemfunc<CVProfOGSModeFullGameAverage, void (CVProfOGSModeFullGameAverage::*)(CVProfOGSMode::CVProfSample*)>
// calls: CVProfOGSMode::CVProfSample::ScheduleQuery
// globals: CVProfOGSModeFullGameAverage::Deferred_ReportIsReady(CVProfOGSMode::CVProfSample *)
void __fastcall CVProfOGSModeFullGameAverage::OnGameEnd(CVProfOGSModeFullGameAverage *const this)
{
  __int64 v1; // rbp
  CVProfOGSMode::CVProfSample::Callback_t v2; // [rsp-28h] [rbp-28h] BYREF
  __int64 v3; // [rsp-8h] [rbp-8h]

  if ( *(this + 194) == 0 )
  {
    v3 = v1;
    v2.m_Closure.m_pthis = this;
    v2.m_Closure.m_pFunction.__pfn = CVProfOGSModeFullGameAverage::Deferred_ReportIsReady;
    v2.m_Closure.m_pFunction.__delta = 0;
    CVProfOGSMode::CVProfSample::ScheduleQuery((this + 48), &v2);
  }
}


// CVProfOGSModeFullGameAverage::Deferred_StartRecording  (line 327, @0x00000000025e1e80, libserver.so)  // inlines: Reset, Start
// calls: Plat_FloatTime, CVProfNode::Reset(void), CVProfNode::EnterScope(void)
void __fastcall CVProfOGSModeFullGameAverage::Deferred_StartRecording(
        CVProfOGSModeFullGameAverage *const this,
        CVProfile *profile)
{
  __m128d v4; // xmm0
  __int16 v5; // ax
  float v6; // xmm1_4
  int m_enabled; // eax
  double v8; // xmm0_8

  v4.m128d_f64[0] = Plat_FloatTime();
  v5 = *(this + 96);
  v6 = _mm_movedup_pd(v4).m128d_f64[0];
  *(this + 43) = v6;
  *(this + 84) = v5;
  CVProfNode::Reset(&profile->m_Root);
  m_enabled = profile->m_enabled;
  profile->m_nFrames = 0;
  profile->m_flStartTime = 0.0;
  profile->m_flStopTime = 0.0;
  profile->m_flPauseStartTime = 0.0;
  profile->m_flTotalPauseTime = 0.0;
  profile->m_enabled = ++m_enabled;
  if ( m_enabled == 1 )
  {
    v8 = Plat_FloatTime();
    profile->m_flStopTime = 0.0;
    profile->m_flStartTime = v8;
    profile->m_flPauseStartTime = 0.0;
    profile->m_flTotalPauseTime = 0.0;
    CVProfNode::EnterScope(&profile->m_Root);
  }
}


// CVProfOGSModeFullGameAverage::Deferred_DoneRecording  (line 336, @0x00000000025e1c00, libserver.so)  // inlines: Stop
// calls: CVProfNode::ExitScope(void), Plat_FloatTime
void __fastcall CVProfOGSModeFullGameAverage::Deferred_DoneRecording(
        CVProfOGSModeFullGameAverage *const this,
        CVProfile *profile)
{
  if ( profile->m_enabled-- == 1 )
  {
    CVProfNode::ExitScope(&profile->m_Root);
    profile->m_flStopTime = Plat_FloatTime();
  }
  ++*(this + 96);
}


// CVProfOGSModeFullGameAverage::Deferred_ReportIsReady  (line 342, @0x00000000025fc5d0, libserver.so)  // inlines: AddRef, CopyFrom<FastDelegate1<CVProfile*, void> >, QueueToVProfBoundary, SetMementoFrom, operator=
// calls: CVProfOGSMode::UploadToDB
// globals: CVProfOGSModeFullGameAverage::Deferred_DoneRecording(CVProfile *)
void __fastcall CVProfOGSModeFullGameAverage::Deferred_ReportIsReady(
        CVProfOGSModeFullGameAverage *const this,
        CVProfOGSMode::CVProfSample *sample)
{
  CVProfOGSMode::UploadToDB(this, sample, this + 1);
  *(this + 2) = this;
  ++*(this + 10);
  *(this + 3) = CVProfOGSModeFullGameAverage::Deferred_DoneRecording;
  *(this + 4) = 0;
}


// CVProfOGSModeFullGameAverage::ForceImmediateReport  (line 349, @0x00000000025fc690, libserver.so)  // inlines: CUtlDelegate<CVProfOGSModeFullGameAverage, CVProfOGSModeFullGameAverage>, Convert<CVProfOGSModeFullGameAverage, void (CVProfOGSModeFullGameAverage::*)(CVProfOGSMode::CVProfSample*), void (detail::GenericClass::*)()>, FastDelegate1<CVProfOGSModeFullGameAverage, CVProfOGSModeFullGameAverage>, UtlMakeDelegate<CVProfOGSModeFullGameAverage, CVProfOGSModeFullGameAverage, CVProfOGSMode::CVProfSample*, void>, bindmemfunc<CVProfOGSModeFullGameAverage, void (CVProfOGSModeFullGameAverage::*)(CVProfOGSMode::CVProfSample*)>
// calls: CVProfOGSMode::CVProfSample::ScheduleQuery
// globals: CVProfOGSModeFullGameAverage::Deferred_ReportIsReady(CVProfOGSMode::CVProfSample *)
void __fastcall CVProfOGSModeFullGameAverage::ForceImmediateReport(CVProfOGSModeFullGameAverage *const this)
{
  CVProfOGSMode::CVProfSample::Callback_t callback; // [rsp+0h] [rbp-20h] BYREF

  callback.m_Closure.m_pthis = this;
  callback.m_Closure.m_pFunction.__pfn = CVProfOGSModeFullGameAverage::Deferred_ReportIsReady;
  callback.m_Closure.m_pFunction.__delta = 0;
  CVProfOGSMode::CVProfSample::ScheduleQuery((this + 48), &callback);
}


// CVProfOGSModeHeartbeat::~CVProfOGSModeHeartbeat  (line 356, @0x0000000002649950, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfOGSMode
// calls: CUtlVectorBase<CVProfOGSMode::CVProfSample, CUtlMemory<CVProfOGSMode::CVProfSample, int> >::RemoveAll, CUtlMemory<CVProfOGSMode::CVProfSample, int>::Purge
void __fastcall CVProfOGSModeHeartbeat::~CVProfOGSModeHeartbeat(CVProfOGSModeHeartbeat *const this)
{
  this->_vptr_CVProfOGSMode = off_4169850;
  CUtlVectorBase<CVProfOGSMode::CVProfSample,CUtlMemory<CVProfOGSMode::CVProfSample,int>>::RemoveAll(&this->m_bufferedSamples);
  if ( (this->m_bufferedSamples.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CVProfOGSMode::CVProfSample,int>::Purge(&this->m_bufferedSamples.m_Memory),
        (this->m_bufferedSamples.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_CVProfOGSMode = &off_41695F0;
  }
  else
  {
    CUtlMemory<CVProfOGSMode::CVProfSample,int>::Purge(&this->m_bufferedSamples.m_Memory);
    this->_vptr_CVProfOGSMode = &off_41695F0;
  }
}


// CVProfOGSModeHeartbeat::~CVProfOGSModeHeartbeat  (line 356, @0x00000000026499c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfOGSMode, ~CVProfOGSModeHeartbeat
// calls: CUtlVectorBase<CVProfOGSMode::CVProfSample, CUtlMemory<CVProfOGSMode::CVProfSample, int> >::RemoveAll, operator delete, CUtlMemory<CVProfOGSMode::CVProfSample, int>::Purge
void __fastcall CVProfOGSModeHeartbeat::~CVProfOGSModeHeartbeat(CVProfOGSModeHeartbeat *const this)
{
  this->_vptr_CVProfOGSMode = off_4169850;
  CUtlVectorBase<CVProfOGSMode::CVProfSample,CUtlMemory<CVProfOGSMode::CVProfSample,int>>::RemoveAll(&this->m_bufferedSamples);
  if ( (this->m_bufferedSamples.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CVProfOGSMode::CVProfSample,int>::Purge(&this->m_bufferedSamples.m_Memory);
    if ( (this->m_bufferedSamples.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CVProfOGSMode::CVProfSample,int>::Purge(&this->m_bufferedSamples.m_Memory);
  }
  this->_vptr_CVProfOGSMode = &off_41695F0;
  operator delete(this);
}


// CVProfOGSModeHeartbeat::Abort  (line 367, @0x0000000002628d00, libserver.so)
void __fastcall CVProfOGSModeHeartbeat::Abort(CVProfOGSModeHeartbeat *const this)
{
  ;
}


// CVProfOGSModeHeartbeat::CVProfOGSModeHeartbeat  (line 395, @0x000000000261fc60, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfOGSMode, ClosurePtr, DOTAGameRules, EnsureCapacity, FastDelegate1, IsGameUnderway, Purge, memcpy, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfOGSMode
// calls: CVProfOGSModeHeartbeat::GetSamplingInterval, CVProfOGSModeHeartbeat::OnGameStart, memcpy, CUtlVectorBase<CVProfOGSMode::CVProfSample, CUtlMemory<CVProfOGSMode::CVProfSample, int> >::RemoveAll, _Unwind_Resume, CUtlMemory<CVProfOGSMode::CVProfSample, int>::Purge
// callers: CVProfOGSMode::MakeModeImpl
// strings: "HEARTBEAT"
void __fastcall CVProfOGSModeHeartbeat::CVProfOGSModeHeartbeat(CVProfOGSModeHeartbeat *const this)
{
  int v2; // r12d
  uint32 m_nGrowSize; // eax
  CVProfOGSMode::CVProfSample *v4; // rsi
  CVProfOGSMode::CVProfSample *v5; // rax
  CVProfOGSMode::CVProfSample *m_pMemory; // r13
  CVProfOGSMode::CVProfSample *v7; // rax

  this->m_nReportType = "HEARTBEAT";
  this->m_scheduledCallback.m_Closure.m_pthis = 0;
  this->m_scheduledCallback.m_Closure.m_pFunction.__pfn = 0;
  this->m_scheduledCallback.m_Closure.m_pFunction.__delta = 0;
  this->m_nRefCount = 1;
  this->_vptr_CVProfOGSMode = off_4169850;
  this->m_bufferedSamples.m_Size = 0;
  this->m_bufferedSamples.m_Memory.m_pMemory = 0;
  this->m_bufferedSamples.m_Memory.m_nAllocationCount = 0;
  this->m_bufferedSamples.m_Memory.m_nGrowSize = 0;
  this->m_fNextReportTime = 3.4028235e38;
  this->m_nReportNum = 0;
  this->m_bUploadReportOnNextSample = 0;
  this->m_bFlagForPurge = 0;
  v2 = (2400.0 / CVProfOGSModeHeartbeat::GetSamplingInterval(this));
  if ( v2 > this->m_bufferedSamples.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_bufferedSamples.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_bufferedSamples.m_Memory.m_pMemory;
        v7 = (**g_pMemAlloc)(g_pMemAlloc, 144LL * v2);
        this->m_bufferedSamples.m_Memory.m_pMemory = v7;
        if ( m_pMemory != 0 )
          memcpy(v7, m_pMemory, 144LL * this->m_bufferedSamples.m_Memory.m_nAllocationCount);
        this->m_bufferedSamples.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v4 = this->m_bufferedSamples.m_Memory.m_pMemory;
        if ( v4 != 0 )
          v5 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v4, 144LL * v2);
        else
          v5 = (**g_pMemAlloc)(g_pMemAlloc, 144LL * v2);
        this->m_bufferedSamples.m_Memory.m_pMemory = v5;
      }
      this->m_bufferedSamples.m_Memory.m_nAllocationCount = v2;
    }
  }
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[28] == 5 )
    CVProfOGSModeHeartbeat::OnGameStart(this);
}


// CVProfOGSModeHeartbeat::GetSamplingInterval  (line 412, @0x00000000025fc810, libserver.so)  // inlines: GetFloat
// calls: Warning, ConVar::SetValue
// callers: CVProfOGSModeHeartbeat::OnGameStart, CVProfOGSModeHeartbeat::CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat::Tick
// strings: "Invalid VPROF reporting interval %f, forcing to 120\n"
// globals: dota_ogs_report_interval
float __fastcall CVProfOGSModeHeartbeat::GetSamplingInterval(const CVProfOGSModeHeartbeat *const this)
{
  float result; // xmm0_4
  float v2; // xmm1_4

  result = dota_ogs_report_interval.m_pParent->m_Value.m_fValue;
  if ( result < 1.0 )
  {
    Warning("Invalid VPROF reporting interval %f, forcing to 120\n", result);
    ConVar::SetValue(&dota_ogs_report_interval, v2);
    return 120.0;
  }
  return result;
}


// CVProfOGSModeHeartbeat::Purge  (line 427, @0x000000000261fba0, libserver.so)
// calls: CUtlVectorBase<CVProfOGSMode::CVProfSample, CUtlMemory<CVProfOGSMode::CVProfSample, int> >::RemoveAll, CVProfOGSModeHeartbeat::AddSampleToTail
// callers: CVProfOGSModeHeartbeat::OnGameStart, CVProfOGSModeHeartbeat::Tick
void __fastcall CVProfOGSModeHeartbeat::Purge(CVProfOGSModeHeartbeat *const this, bool bResetReportNum)
{
  CUtlVectorBase<CVProfOGSMode::CVProfSample,CUtlMemory<CVProfOGSMode::CVProfSample,int>>::RemoveAll(&this->m_bufferedSamples);
  if ( bResetReportNum )
    this->m_nReportNum = 0;
  this->m_bFlagForPurge = 0;
  CVProfOGSModeHeartbeat::AddSampleToTail(this);
}


// CVProfOGSModeHeartbeat::OnGameStart  (line 437, @0x000000000261fbe0, libserver.so)  // inlines: AddRef, CopyFrom<FastDelegate1<CVProfile*, void> >, DOTAGameRules, GetGameTime, QueueToVProfBoundary, SetMementoFrom, operator=
// calls: CVProfOGSModeHeartbeat::Purge, CVProfOGSModeHeartbeat::GetSamplingInterval
// callers: CVProfOGSModeHeartbeat::CVProfOGSModeHeartbeat
// globals: CVProfOGSModeHeartbeat::Deferred_StartRecording(CVProfile *)
void __fastcall CVProfOGSModeHeartbeat::OnGameStart(CVProfOGSModeHeartbeat *const this)
{
  float SamplingInterval; // xmm0_4
  float v3; // [rsp+Ch] [rbp-34h]

  CVProfOGSModeHeartbeat::Purge(this, 1);
  this->m_bUploadReportOnNextSample = 0;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v3 = 0.0;
  SamplingInterval = CVProfOGSModeHeartbeat::GetSamplingInterval(this);
  this->m_scheduledCallback.m_Closure.m_pthis = this;
  this->m_scheduledCallback.m_Closure.m_pFunction.__pfn = CVProfOGSModeHeartbeat::Deferred_StartRecording;
  ++this->m_nRefCount;
  this->m_scheduledCallback.m_Closure.m_pFunction.__delta = 0;
  this->m_fNextReportTime = SamplingInterval + v3;
}


// CVProfOGSModeHeartbeat::AddSampleToTail  (line 447, @0x000000000261fab0, libserver.so)  // inlines: AddToTail, CUtlAbstractDelegate, CUtlDelegate, CVProfSample, ClosurePtr, Construct<CVProfOGSMode::CVProfSample>, Element, FastDelegate1, GrowMemory, SetOwner, Tail, operator[]
// calls: CVProfReporter::CVProfReporter(char const*,int), Plat_FloatTime, CUtlMemory<CVProfOGSMode::CVProfSample, int>::Grow
// callers: CVProfOGSModeHeartbeat::Purge, CVProfOGSModeHeartbeat::Deferred_ReportIsReady
void __fastcall CVProfOGSModeHeartbeat::AddSampleToTail(CVProfOGSModeHeartbeat *const this)
{
  __int64 m_Size; // r12
  int v3; // edx
  CVProfOGSMode::CVProfSample *m_pMemory; // rax
  int v5; // edx
  CVProfReporter *v6; // r12
  char *v7; // r12
  uint16 m_nReportNum; // ax
  __m128d v9; // xmm0

  m_Size = this->m_bufferedSamples.m_Size;
  v3 = this->m_bufferedSamples.m_Size;
  if ( m_Size == this->m_bufferedSamples.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CVProfOGSMode::CVProfSample,int>::Grow(&this->m_bufferedSamples.m_Memory, 1);
    v3 = this->m_bufferedSamples.m_Size;
  }
  m_pMemory = this->m_bufferedSamples.m_Memory.m_pMemory;
  v5 = v3 + 1;
  this->m_bufferedSamples.m_Size = v5;
  v6 = (m_pMemory + 144 * m_Size);
  if ( v6 != 0 )
  {
    CVProfReporter::CVProfReporter(v6, 0, -1);
    *(v6 + 12) = 0;
    *v6 = off_4169650;
    *(v6 + 13) = 0;
    *(v6 + 14) = 0;
    *(v6 + 31) = 0;
    *(v6 + 32) = -1082130432;
    *(v6 + 17) = 0;
    v5 = this->m_bufferedSamples.m_Size;
    m_pMemory = this->m_bufferedSamples.m_Memory.m_pMemory;
  }
  v7 = m_pMemory + 144 * v5 - 144;
  *(v7 + 17) = this;
  m_nReportNum = this->m_nReportNum;
  this->m_nReportNum = m_nReportNum + 1;
  *(v7 + 60) = m_nReportNum;
  v9.m128d_f64[0] = Plat_FloatTime();
  *(v7 + 31) = _mm_movedup_pd(v9).m128d_f64[0];
}


// CVProfOGSModeHeartbeat::Deferred_StartRecording  (line 457, @0x00000000025e50d0, libserver.so)  // inlines: Reset, Start
// calls: CVProfNode::Reset(void), Plat_FloatTime, CVProfNode::EnterScope(void)
void __fastcall CVProfOGSModeHeartbeat::Deferred_StartRecording(CVProfOGSModeHeartbeat *const this, CVProfile *profile)
{
  CVProfNode *p_m_Root; // r12
  int m_enabled; // eax
  double v5; // xmm0_8

  p_m_Root = &profile->m_Root;
  CVProfNode::Reset(&profile->m_Root);
  m_enabled = profile->m_enabled;
  profile->m_nFrames = 0;
  profile->m_flStartTime = 0.0;
  profile->m_flStopTime = 0.0;
  profile->m_flPauseStartTime = 0.0;
  profile->m_flTotalPauseTime = 0.0;
  profile->m_enabled = ++m_enabled;
  if ( m_enabled == 1 )
  {
    v5 = Plat_FloatTime();
    profile->m_flStopTime = 0.0;
    profile->m_flStartTime = v5;
    profile->m_flPauseStartTime = 0.0;
    profile->m_flTotalPauseTime = 0.0;
    CVProfNode::EnterScope(p_m_Root);
  }
}


// CVProfOGSModeHeartbeat::ForceImmediateReport  (line 463, @0x00000000025fc6c0, libserver.so)  // inlines: CUtlDelegate<CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat>, Convert<CVProfOGSModeHeartbeat, void (CVProfOGSModeHeartbeat::*)(CVProfOGSMode::CVProfSample*), void (detail::GenericClass::*)()>, FastDelegate1<CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat>, Tail, UtlMakeDelegate<CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat, CVProfOGSMode::CVProfSample*, void>, bindmemfunc<CVProfOGSModeHeartbeat, void (CVProfOGSModeHeartbeat::*)(CVProfOGSMode::CVProfSample*)>, operator[]
// calls: CVProfOGSMode::CVProfSample::ScheduleQuery
// globals: CVProfOGSModeHeartbeat::Deferred_ReportIsReady(CVProfOGSMode::CVProfSample *)
void __fastcall CVProfOGSModeHeartbeat::ForceImmediateReport(CVProfOGSModeHeartbeat *const this)
{
  int m_Size; // eax
  CVProfOGSMode::CVProfSample::Callback_t callback; // [rsp+0h] [rbp-20h] BYREF

  this->m_bUploadReportOnNextSample = 1;
  callback.m_Closure.m_pFunction.__pfn = CVProfOGSModeHeartbeat::Deferred_ReportIsReady;
  m_Size = this->m_bufferedSamples.m_Size;
  callback.m_Closure.m_pthis = this;
  callback.m_Closure.m_pFunction.__delta = 0;
  CVProfOGSMode::CVProfSample::ScheduleQuery(
    (this->m_bufferedSamples.m_Memory.m_pMemory + 144 * m_Size - 144),
    &callback);
}


// CVProfOGSModeHeartbeat::OnGameEnd  (line 469, @0x00000000025e0330, libserver.so)
void __fastcall CVProfOGSModeHeartbeat::OnGameEnd(CVProfOGSModeHeartbeat *const this)
{
  (*(this->_vptr_CVProfOGSMode + 2))(this);
  this->m_fNextReportTime = 3.4028235e38;
}


// CVProfOGSModeHeartbeat::Deferred_ReportIsReady  (line 476, @0x0000000002620170, libserver.so)  // inlines: Reset, operator[]
// calls: CVProfOGSMode::UploadToDB, CVProfNode::Reset(void), CVProfOGSModeHeartbeat::AddSampleToTail
void __fastcall CVProfOGSModeHeartbeat::Deferred_ReportIsReady(
        CVProfOGSModeHeartbeat *const this,
        CVProfOGSMode::CVProfSample *sample)
{
  __int64 v3; // r13
  int v4; // r12d
  const CDOTA_OGS_VPROF::ReportType_t *p_m_nReportType; // r14
  CVProfOGSMode::CVProfSample *v6; // rsi
  bool v7; // zf
  bool v8; // sf
  bool v9; // of

  if ( this->m_bUploadReportOnNextSample )
  {
    v3 = 0;
    v4 = 0;
    p_m_nReportType = &this->m_nReportType;
    if ( this->m_bufferedSamples.m_Size > 0 )
    {
      do
      {
        v6 = (this->m_bufferedSamples.m_Memory.m_pMemory + v3);
        ++v4;
        v3 += 144;
        CVProfOGSMode::UploadToDB(this, v6, p_m_nReportType);
        v9 = __OFSUB__(this->m_bufferedSamples.m_Size, v4);
        v7 = this->m_bufferedSamples.m_Size == v4;
        v8 = this->m_bufferedSamples.m_Size - v4 < 0;
        this->m_bFlagForPurge = 1;
      }
      while ( !(v8 ^ v9 | v7) );
    }
    this->m_bUploadReportOnNextSample = 0;
  }
  else
  {
    CVProfOGSModeHeartbeat::AddSampleToTail(this);
  }
  CVProfNode::Reset(&g_VProfCurrentProfile.m_Root);
  g_VProfCurrentProfile.m_nFrames = 0;
  g_VProfCurrentProfile.m_flStartTime = 0.0;
  g_VProfCurrentProfile.m_flStopTime = 0.0;
  g_VProfCurrentProfile.m_flPauseStartTime = 0.0;
  g_VProfCurrentProfile.m_flTotalPauseTime = 0.0;
}


// CDOTA_OGS_VPROF::FrameUpdatePostEntityThink  (line 500, @0x00000000025e0350, libserver.so)
void __fastcall CDOTA_OGS_VPROF::FrameUpdatePostEntityThink(
        CDOTA_OGS_VPROF *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CVProfOGSMode *m_pCurrentRecordingMode; // rdi

  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
    (*(m_pCurrentRecordingMode->_vptr_CVProfOGSMode + 4))(m_pCurrentRecordingMode, msg);
}


// CVProfOGSModeHeartbeat::Tick  (line 508, @0x00000000026200a0, libserver.so)  // inlines: CUtlDelegate<CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat>, Convert<CVProfOGSModeHeartbeat, void (CVProfOGSModeHeartbeat::*)(CVProfOGSMode::CVProfSample*), void (detail::GenericClass::*)()>, DOTAGameRules, FastDelegate1<CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat>, GetGameTime, Tail, UtlMakeDelegate<CVProfOGSModeHeartbeat, CVProfOGSModeHeartbeat, CVProfOGSMode::CVProfSample*, void>, bindmemfunc<CVProfOGSModeHeartbeat, void (CVProfOGSModeHeartbeat::*)(CVProfOGSMode::CVProfSample*)>, operator[]
// calls: CVProfOGSMode::CVProfSample::ScheduleQuery, CVProfOGSModeHeartbeat::GetSamplingInterval, CVProfOGSModeHeartbeat::Purge
// globals: CVProfOGSModeHeartbeat::Deferred_ReportIsReady(CVProfOGSMode::CVProfSample *)
void __fastcall CVProfOGSModeHeartbeat::Tick(CVProfOGSModeHeartbeat *const this)
{
  float v2; // xmm0_4
  int m_Size; // eax
  float v4; // [rsp+Ch] [rbp-34h]
  CVProfOGSMode::CVProfSample::Callback_t callback; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_bFlagForPurge )
    CVProfOGSModeHeartbeat::Purge(this, 0);
  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v2 >= this->m_fNextReportTime )
  {
    callback.m_Closure.m_pFunction.__delta = 0;
    callback.m_Closure.m_pFunction.__pfn = CVProfOGSModeHeartbeat::Deferred_ReportIsReady;
    m_Size = this->m_bufferedSamples.m_Size;
    callback.m_Closure.m_pthis = this;
    CVProfOGSMode::CVProfSample::ScheduleQuery(
      (this->m_bufferedSamples.m_Memory.m_pMemory + 144 * m_Size - 144),
      &callback);
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v4 = 0.0;
    this->m_fNextReportTime = CVProfOGSModeHeartbeat::GetSamplingInterval(this) + v4;
  }
}


// CVProfOGSMode::MakeModeImpl  (line 521, @0x000000000261fe30, libserver.so)
// calls: operator new, CVProfOGSModeHeartbeat::CVProfOGSModeHeartbeat, CVProfOGSModeFullGameAverage::CVProfOGSModeFullGameAverage, operator delete, _Unwind_Resume
// callers: CDOTA_OGS_VPROF::ChangeReportMode
// strings: "GAME_AVERAGE", "HEARTBEAT"
CVProfOGSMode *__fastcall CVProfOGSMode::MakeModeImpl(const CDOTA_OGS_VPROF::ReportType_t type)
{
  CVProfOGSMode *result; // rax
  CVProfOGSModeFullGameAverage *v2; // rbx

  if ( type == "INVALID" )
    return 0;
  if ( type == "GAME_AVERAGE" )
  {
    v2 = operator new(0xC8u);
    CVProfOGSModeFullGameAverage::CVProfOGSModeFullGameAverage(v2);
  }
  else
  {
    result = 0;
    if ( type != "HEARTBEAT" )
      return result;
    v2 = operator new(0x50u);
    CVProfOGSModeHeartbeat::CVProfOGSModeHeartbeat(v2);
  }
  return v2;
}


// CDOTA_OGS_VPROF::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 543, @0x00000000025fc870, libserver.so)
void __cdecl CDOTA_OGS_VPROF::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_OGS_VPROF::CDOTA_OGS_VPROF  (line 546, @0x000000000261ff40, libserver.so)  // inlines: ~CAutoGameSystem
// calls: CDOTA_OGS_VPROF::Reset, IGameSystem::~IGameSystem, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
void __fastcall CDOTA_OGS_VPROF::CDOTA_OGS_VPROF(CDOTA_OGS_VPROF *const this)
{
  this->_vptr_IGameSystem = off_41696F0;
  this->m_pCurrentRecordingMode = 0;
  CDOTA_OGS_VPROF::Reset(this);
}


// CDOTA_OGS_VPROF::ConvarToReportType  (line 552, @0x00000000025fc880, libserver.so)
// calls: Warning
// callers: CDOTA_OGS_VPROF::Reset, CDOTA_OGS_VPROF::OnConvarChanged, CDOTA_OGS_VPROF::OnGameStart
// strings: "HEARTBEAT", "GAME_AVERAGE", "Invalid dota_ogs_report_vprof value %d\n"
// globals: jpt_25FC899
CDOTA_OGS_VPROF::ReportType_t __fastcall CDOTA_OGS_VPROF::ConvarToReportType(int convarval)
{
  CDOTA_OGS_VPROF::ReportType_t result; // rax

  switch ( convarval )
  {
    case 0:
      result = "INVALID";
      break;
    case 1:
    case 11:
      result = "GAME_AVERAGE";
      break;
    case 2:
    case 12:
      result = "HEARTBEAT";
      break;
    default:
      Warning("Invalid dota_ogs_report_vprof value %d\n", convarval);
      result = "INVALID";
      break;
  }
  return result;
}


// CDOTA_OGS_VPROF::Reset  (line 572, @0x000000000261ff10, libserver.so)  // inlines: GetInt
// calls: CDOTA_OGS_VPROF::ConvarToReportType, CDOTA_OGS_VPROF::ChangeReportMode
// callers: CDOTA_OGS_VPROF::CDOTA_OGS_VPROF
void __fastcall CDOTA_OGS_VPROF::Reset(CDOTA_OGS_VPROF *const this)
{
  const char *v2; // rax

  v2 = CDOTA_OGS_VPROF::ConvarToReportType(dota_ogs_report_vprof.m_pParent->m_Value.m_nValue);
  CDOTA_OGS_VPROF::ChangeReportMode(this, v2);
}


// CDOTA_OGS_VPROF::ChangeReportMode  (line 578, @0x000000000261fec0, libserver.so)  // inlines: CurrentReportMode
// calls: CDOTA_OGS_VPROF::HaltRecording, CVProfOGSMode::MakeModeImpl
// callers: CDOTA_OGS_VPROF::Reset, CDOTA_OGS_VPROF::OnConvarChanged, CDOTA_OGS_VPROF::OnGameStart
void __fastcall CDOTA_OGS_VPROF::ChangeReportMode(CDOTA_OGS_VPROF *const this, CDOTA_OGS_VPROF::ReportType_t nNewMode)
{
  const char *m_nReportType; // rax
  CVProfOGSMode *m_pCurrentRecordingMode; // rdx

  m_nReportType = "INVALID";
  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
    m_nReportType = m_pCurrentRecordingMode->m_nReportType;
  if ( nNewMode != m_nReportType )
  {
    CDOTA_OGS_VPROF::HaltRecording(this);
    if ( nNewMode != "INVALID" )
      this->m_pCurrentRecordingMode = CVProfOGSMode::MakeModeImpl(nNewMode);
  }
}


// CDOTA_OGS_VPROF::CurrentReportMode  (line 598, @0x00000000025fc8f0, libserver.so)
CDOTA_OGS_VPROF::ReportType_t __fastcall CDOTA_OGS_VPROF::CurrentReportMode(const CDOTA_OGS_VPROF *const this)
{
  CVProfOGSMode *m_pCurrentRecordingMode; // rax

  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
    return m_pCurrentRecordingMode->m_nReportType;
  else
    return "INVALID";
}


// CDOTA_OGS_VPROF::IsGameUnderway  (line 604, @0x00000000025fc920, libserver.so)  // inlines: DOTAGameRules
bool __cdecl CDOTA_OGS_VPROF::IsGameUnderway()
{
  return g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[28] == 5;
}


// CDOTA_OGS_VPROF::HaltRecording  (line 616, @0x00000000025fc950, libserver.so)
// calls: CVProfOGSMode::DecRef
// callers: CDOTA_OGS_VPROF::ChangeReportMode
void __fastcall CDOTA_OGS_VPROF::HaltRecording(CDOTA_OGS_VPROF *const this)
{
  CVProfOGSMode *m_pCurrentRecordingMode; // rdi

  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
  {
    (*(m_pCurrentRecordingMode->_vptr_CVProfOGSMode + 3))(m_pCurrentRecordingMode);
    CVProfOGSMode::DecRef(this->m_pCurrentRecordingMode);
    this->m_pCurrentRecordingMode = 0;
  }
}


// CDOTA_OGS_VPROF::OnConvarChanged  (line 627, @0x000000000261ff90, libserver.so)  // inlines: GetInt, _V_strcmp
// calls: CDOTA_OGS_VPROF::ConvarToReportType, CDOTA_OGS_VPROF::ChangeReportMode, Warning
// strings: "dota_ogs_report_vprof", "CDOTA_OGS_VPROF::OnConvarChanged called when actually %s changed\n"
// globals: g_VProfOGS
void __fastcall CDOTA_OGS_VPROF::OnConvarChanged(IConVar *var, const char *pOldValue, double a3, float flOldValue)
{
  bool v5; // zf
  __int64 v6; // rax
  const char *v7; // rdi
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  const char *v10; // rax
  const char *v11; // rax

  v6 = (*(var->_vptr_IConVar + 4))(var, pOldValue, a3, flOldValue);
  v7 = "dota_ogs_report_vprof";
  v8 = 22;
  v9 = v6;
  do
  {
    if ( v8 == 0 )
      break;
    v5 = *v9++ == *v7++;
    --v8;
  }
  while ( v5 );
  if ( v5 )
  {
    v10 = CDOTA_OGS_VPROF::ConvarToReportType(dota_ogs_report_vprof.m_pParent->m_Value.m_nValue);
    CDOTA_OGS_VPROF::ChangeReportMode(&g_VProfOGS, v10);
  }
  else
  {
    v11 = (*(var->_vptr_IConVar + 4))(var, v9);
    Warning("CDOTA_OGS_VPROF::OnConvarChanged called when actually %s changed\n", v11);
  }
}


// CDOTA_OGS_VPROF::IsValid  (line 647, @0x00000000025fc990, libserver.so)
// strings: "GAME_AVERAGE", "HEARTBEAT", "SPIKE"
bool __fastcall CDOTA_OGS_VPROF::IsValid(CDOTA_OGS_VPROF::ReportType_t rtype)
{
  return rtype == "GAME_AVERAGE" || rtype == "HEARTBEAT" || rtype == "SPIKE";
}


// CDOTA_OGS_VPROF::OnGameStart  (line 654, @0x0000000002620000, libserver.so)  // inlines: GetInt, Hash8
// calls: Steam3Server, MurmurHash2, CDOTA_OGS_VPROF::ChangeReportMode, CDOTA_OGS_VPROF::ConvarToReportType
// callers: CDOTAGamerules::State_Enter_GAME_IN_PROGRESS
void __fastcall CDOTA_OGS_VPROF::OnGameStart(CDOTA_OGS_VPROF *const this)
{
  unsigned int m_nValue; // r12d
  CSteam3ServerGameS1 *v3; // rax
  const char *v4; // rsi
  CVProfOGSMode *m_pCurrentRecordingMode; // rdi
  uint64 steamid[3]; // [rsp+8h] [rbp-18h] BYREF

  if ( Steam3Server()->m_pSteamGameServer != 0
    && ((m_nValue = dota_ogs_report_vprof_fraction.m_pParent->m_Value.m_nValue) <= 0
     || (v3 = Steam3Server(),
         steamid[0] = (*(*v3->m_pSteamGameServer + 80LL))(v3->m_pSteamGameServer),
         MurmurHash2(steamid, 8, 0x3501A674u) % m_nValue == 0)) )
  {
    v4 = CDOTA_OGS_VPROF::ConvarToReportType(dota_ogs_report_vprof.m_pParent->m_Value.m_nValue);
  }
  else
  {
    v4 = "INVALID";
  }
  CDOTA_OGS_VPROF::ChangeReportMode(this, v4);
  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
    (*m_pCurrentRecordingMode->_vptr_CVProfOGSMode)(m_pCurrentRecordingMode);
}


// CDOTA_OGS_VPROF::OnGameEnd  (line 686, @0x00000000025fc9d0, libserver.so)
// callers: CDOTAGamerules::State_Enter_POST_GAME
void __fastcall CDOTA_OGS_VPROF::OnGameEnd(CDOTA_OGS_VPROF *const this)
{
  CVProfOGSMode *m_pCurrentRecordingMode; // rdi

  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
    (*(m_pCurrentRecordingMode->_vptr_CVProfOGSMode + 1))(m_pCurrentRecordingMode);
}


// CDOTA_OGS_VPROF::ForDebuggingOnlyForceGameReportNow  (line 717, @0x00000000025fca00, libserver.so)
// calls: Msg
// callers: dota_ogs_report_vprof_force_now
// strings: "Current recording mode is not valid.\n"
void __fastcall CDOTA_OGS_VPROF::ForDebuggingOnlyForceGameReportNow(CDOTA_OGS_VPROF *const this)
{
  CVProfOGSMode *m_pCurrentRecordingMode; // rdi

  m_pCurrentRecordingMode = this->m_pCurrentRecordingMode;
  if ( m_pCurrentRecordingMode != 0 )
    (*(m_pCurrentRecordingMode->_vptr_CVProfOGSMode + 2))(m_pCurrentRecordingMode);
  else
    Msg("Current recording mode is not valid.\n");
}


// dota_ogs_report_vprof_force_now  (line 726, @0x00000000025fca30, libserver.so)
// calls: CDOTA_OGS_VPROF::ForDebuggingOnlyForceGameReportNow
// globals: g_VProfOGS
void __fastcall dota_ogs_report_vprof_force_now(const CCommandContext *const ctx, const CCommand *const args)
{
  CDOTA_OGS_VPROF::ForDebuggingOnlyForceGameReportNow(&g_VProfOGS);
}


