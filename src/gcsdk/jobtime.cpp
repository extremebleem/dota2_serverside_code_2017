
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_jobtime.cpp  (line 0, @0x0000000001a6e440, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_jobtime_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CJobTime::CJobTime  (line 20, @0x0000000003232020, libserver.so)
// callers: GCSDK::CJob::BYieldingWaitForThreadFunc, GCSDK::CLock::CLock, GCSDK::CJob::CJob, GCSDK::CJobMgr::MarkJobPause, GCSDK::CJobMgr::BYieldingWaitTime, GCSDK::CMessageList::CMessageList
// globals: GCSDK::CJobTime::sm_lTimeCur
void __fastcall GCSDK::CJobTime::CJobTime(GCSDK::CJobTime *const this)
{
  this->m_lTime = GCSDK::CJobTime::sm_lTimeCur;
}


// GCSDK::CJobTime::SetToJobTime  (line 29, @0x0000000003232030, libserver.so)
// callers: GCSDK::CJob::Continue, GCSDK::CJob::BYieldingWaitForThreadFunc, GCSDK::CJob::CJob, GCSDK::CJob::_SetLock, GCSDK::CJobMgr::CheckForJobTimeouts, GCSDK::CJobMgr::MarkJobPause, GCSDK::CJobMgr::BYieldingWaitTime, GCSDK::CMessageList::ResetWindow, GCSDK::CMessageList::EnableProfiling, GCSDK::CMessageList::BInit
// globals: GCSDK::CJobTime::sm_lTimeCur
void __fastcall GCSDK::CJobTime::SetToJobTime(GCSDK::CJobTime *const this)
{
  this->m_lTime = GCSDK::CJobTime::sm_lTimeCur;
}


// GCSDK::CJobTime::SetFromJobTime  (line 38, @0x0000000003232040, libserver.so)
// callers: GCSDK::CJob::WaitForThreadFuncWorkItemBlocking, GCSDK::CJob::Continue, GCSDK::CJob::Heartbeat, GCSDK::CJob::CJob, GCSDK::CJobMgr::BYieldingWaitTime
// globals: GCSDK::CJobTime::sm_lTimeCur
void __fastcall GCSDK::CJobTime::SetFromJobTime(GCSDK::CJobTime *const this, int64 dMicroSecOffset)
{
  this->m_lTime = GCSDK::CJobTime::sm_lTimeCur + dMicroSecOffset;
}


// GCSDK::CJobTime::CServerMicroSecsPassed  (line 49, @0x0000000003232050, libserver.so)
// callers: GCSDK::CJob::Continue, GCSDK::CJob::UnsetLock, GCSDK::CJobMgr::BResumeSleepingJobs, GCSDK::CJobMgr::CheckForJobTimeouts, GCSDK::CJobMgr::DumpJobWaitAnalysis, GCSDK::CJobMgr::AccumulateStatsofJob, GCSDK::CJobMgr::RemoveJob, GCSDK::CJobMgr::DumpJobSummary, GCSDK::CMessageList::EnableProfiling, GCSDK::CMessageList::GetGroupDuration, GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats (14 total)
// globals: GCSDK::CJobTime::sm_lTimeCur
int64 __fastcall GCSDK::CJobTime::CServerMicroSecsPassed(const GCSDK::CJobTime *const this)
{
  return GCSDK::CJobTime::sm_lTimeCur - this->m_lTime;
}


// GCSDK::CJobTime::UpdateJobTime  (line 63, @0x0000000003232060, libserver.so)
// callers: GCSDK::CGCClient::BMainLoop
// globals: GCSDK::CJobTime::sm_lTimeCur
void __fastcall GCSDK::CJobTime::UpdateJobTime(int cMicroSecPerShellFrame)
{
  GCSDK::CJobTime::sm_lTimeCur += cMicroSecPerShellFrame;
}


// GCSDK::CJobTime::SetCurrentJobTime  (line 73, @0x0000000003232070, libserver.so)
// globals: GCSDK::CJobTime::sm_lTimeCur
void __fastcall GCSDK::CJobTime::SetCurrentJobTime(uint64 lCurrentTime)
{
  GCSDK::CJobTime::sm_lTimeCur = lCurrentTime;
}


