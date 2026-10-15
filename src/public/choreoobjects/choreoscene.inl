
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CChoreoScene::GetDuration  (line 108, @0x0000000003088e00, libserver.so)  // inlines: FindStopTime
// calls: CChoreoScene::FindStopTime
float __fastcall CChoreoScene::GetDuration(const CChoreoScene *const this)
{
  float result; // xmm0_4

  result = this->m_flPrecomputedStopTime;
  if ( result == 0.0 )
    return CChoreoScene::FindStopTime(this);
  return result;
}


