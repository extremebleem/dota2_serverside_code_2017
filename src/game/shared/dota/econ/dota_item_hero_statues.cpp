
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAttribute_HeroStatue::ParseFromString  (line 116, @0x0000000002e36640, libserver.so)
// calls: google::protobuf::TextFormat::ParseFromString(std::string const&,google::protobuf::Message *)
void __fastcall CAttribute_HeroStatue::ParseFromString(
        CAttribute_HeroStatue *const this,
        const std::string *const strRecord)
{
  google::protobuf::Message *v2; // rdx

  google::protobuf::TextFormat::ParseFromString(strRecord, this, v2);
}


// CAttribute_HeroStatue::ConvertToString  (line 123, @0x0000000002e36660, libserver.so)
// calls: google::protobuf::TextFormat::PrintToString(google::protobuf::Message const&,std::string *)
void __fastcall CAttribute_HeroStatue::ConvertToString(const CAttribute_HeroStatue *const this, std::string *strRecord)
{
  std::string *v2; // rdx

  google::protobuf::TextFormat::PrintToString(this, strRecord, v2);
}


// CAttribute_HeroStatue::ParseFromByteStream  (line 130, @0x0000000002e36670, libserver.so)
// calls: google::protobuf::MessageLite::ParseFromString(std::string const&)
void __fastcall CAttribute_HeroStatue::ParseFromByteStream(
        CAttribute_HeroStatue *const this,
        const std::string *const strRecord)
{
  google::protobuf::MessageLite::ParseFromString(this, strRecord);
}


// CAttribute_HeroStatue::ConvertToByteStream  (line 137, @0x0000000002e36680, libserver.so)
// calls: google::protobuf::MessageLite::SerializeToString(std::string *)
void __fastcall CAttribute_HeroStatue::ConvertToByteStream(
        const CAttribute_HeroStatue *const this,
        std::string *strRecord)
{
  google::protobuf::MessageLite::SerializeToString(this, strRecord);
}


