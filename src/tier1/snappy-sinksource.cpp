
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// snappy::Source::~Source  (line 35, @0x0000000002f8c650, libserver.so)
void __fastcall snappy::Source::~Source(snappy::Source *const this)
{
  this->_vptr_Source = off_47BF170;  // vptr: snappy::Source
}


// snappy::Source::~Source  (line 35, @0x0000000002f8c6f0, libserver.so)  // inlines: ~Source
// calls: operator delete
void __fastcall snappy::Source::~Source(snappy::Source *const this)
{
  this->_vptr_Source = off_47BF170;  // vptr: snappy::Source
  operator delete(this);
}


// snappy::Sink::~Sink  (line 37, @0x0000000002f8c660, libserver.so)
void __fastcall snappy::Sink::~Sink(snappy::Sink *const this)
{
  this->_vptr_Sink = off_47BF1B0;  // vptr: snappy::Sink
}


// snappy::Sink::~Sink  (line 37, @0x0000000002f8c710, libserver.so)  // inlines: ~Sink
// calls: operator delete
void __fastcall snappy::Sink::~Sink(snappy::Sink *const this)
{
  this->_vptr_Sink = off_47BF1B0;  // vptr: snappy::Sink
  operator delete(this);
}


// snappy::Sink::GetAppendBuffer  (line 39, @0x0000000002f8c670, libserver.so)
char *__fastcall snappy::Sink::GetAppendBuffer(snappy::Sink *const this, size_t length, char *scratch)
{
  return scratch;
}


// snappy::ByteArraySource::~ByteArraySource  (line 43, @0x0000000002f8c680, libserver.so)  // inlines: ~Source
// callers: snappy::RawUncompressToIOVec, snappy::RawUncompress, snappy::IsValidCompressedBuffer, snappy::RawCompress
void __fastcall snappy::ByteArraySource::~ByteArraySource(snappy::ByteArraySource *const this)
{
  this->_vptr_Source = off_47BF170;  // vptr: snappy::Source
}


// snappy::ByteArraySource::~ByteArraySource  (line 43, @0x0000000002f8c730, libserver.so)  // inlines: ~ByteArraySource, ~Source
// calls: operator delete
void __fastcall snappy::ByteArraySource::~ByteArraySource(snappy::ByteArraySource *const this)
{
  this->_vptr_Source = off_47BF170;  // vptr: snappy::Source
  operator delete(this);
}


// snappy::ByteArraySource::Available  (line 45, @0x0000000002f8c690, libserver.so)
size_t __fastcall snappy::ByteArraySource::Available(const snappy::ByteArraySource *const this)
{
  return this->left_;
}


// snappy::ByteArraySource::Peek  (line 47, @0x0000000002f8c6a0, libserver.so)
const char *__fastcall snappy::ByteArraySource::Peek(snappy::ByteArraySource *const this, size_t *len)
{
  *len = this->left_;
  return this->ptr_;
}


// snappy::ByteArraySource::Skip  (line 52, @0x0000000002f8c6c0, libserver.so)
void __fastcall snappy::ByteArraySource::Skip(snappy::ByteArraySource *const this, size_t n)
{
  this->left_ -= n;
  this->ptr_ += n;
}


// snappy::UncheckedByteArraySink::~UncheckedByteArraySink  (line 57, @0x0000000002f8c6d0, libserver.so)  // inlines: ~Sink
// callers: snappy::RawCompress
void __fastcall snappy::UncheckedByteArraySink::~UncheckedByteArraySink(snappy::UncheckedByteArraySink *const this)
{
  this->_vptr_Sink = off_47BF1B0;  // vptr: snappy::Sink
}


// snappy::UncheckedByteArraySink::~UncheckedByteArraySink  (line 57, @0x0000000002f8c750, libserver.so)  // inlines: ~Sink, ~UncheckedByteArraySink
// calls: operator delete
void __fastcall snappy::UncheckedByteArraySink::~UncheckedByteArraySink(snappy::UncheckedByteArraySink *const this)
{
  this->_vptr_Sink = off_47BF1B0;  // vptr: snappy::Sink
  operator delete(this);
}


// snappy::UncheckedByteArraySink::Append  (line 59, @0x0000000002f8c770, libserver.so)  // inlines: memcpy
// calls: memcpy
void __fastcall snappy::UncheckedByteArraySink::Append(
        snappy::UncheckedByteArraySink *const this,
        const char *data,
        size_t n)
{
  char *dest; // rdi

  dest = this->dest_;
  if ( dest != data )
  {
    memcpy(dest, data, n);
    dest = this->dest_;
  }
  this->dest_ = &dest[n];
}


// snappy::UncheckedByteArraySink::GetAppendBuffer  (line 67, @0x0000000002f8c6e0, libserver.so)
char *__fastcall snappy::UncheckedByteArraySink::GetAppendBuffer(
        snappy::UncheckedByteArraySink *const this,
        size_t len,
        char *scratch)
{
  return this->dest_;
}


