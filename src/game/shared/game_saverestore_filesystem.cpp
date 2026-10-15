// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_saverestore_filesystem.cpp:44
class CSaveDirectory {
	struct file_t {
		int eType;  // +0x0

		unsigned int nSize;  // +0x8
		unsigned int nCompressedSize;  // +0xc
		file_t();
		file_t(const file_t &);
		file_t & operator=(const file_t &);

		// sizeof = 32
	};

	CUtlMap<CUtlSymbol, CSaveDirectory::file_t, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)> m_Files;  // +0x50
	CSaveDirectory();
	~CSaveDirectory();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 120
};

// src/game/shared/game_saverestore_filesystem.cpp:97
class CSaveRestoreFileSystem : public ISaveRestoreFileSystem {
public:

private:

	int m_iContainerOpens;  // +0x10
	CSaveRestoreFileSystem(const CSaveRestoreFileSystem &);
	CSaveRestoreFileSystem();
	~CSaveRestoreFileSystem();
	virtual bool FileExists(const char *, const char *);
	virtual void RenameFile(const char *, const char *, const char *);
	virtual void RemoveFile(const char *, const char *);
	virtual FileHandle_t Open(const char *, const char *, const char *);
	virtual void Close(FileHandle_t);
	virtual int Read(void *, int, FileHandle_t);
	virtual int Write(const void *, int, FileHandle_t);
	virtual void Seek(FileHandle_t, int, FileSystemSeek_t);
	virtual unsigned int Tell(FileHandle_t);
	virtual unsigned int Size(FileHandle_t);
	virtual unsigned int Size(const char *, const char *);
	virtual void AsyncFinishAllWrites();
	virtual void AsyncRelease(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncWrite(const char *, const void *, int, bool, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncFinish(FSAsyncControl_t, bool);
	virtual FSAsyncStatus_t AsyncAppend(const char *, const void *, int, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppendFile(const char *, const char *, FSAsyncControl_t *);
	virtual void DirectoryCopy(const char *, const char *, const char *);
	void DirectorCopyToMemory(const char *, const char *);
	virtual bool DirectoryExtract(FileHandle_t, int, const char *);
	virtual int DirectoryCount(const char *);
	virtual void DirectoryClear(const char *, const char *);
	void WriteSaveDirectoryToDisk();
	void LoadSaveDirectoryFromDisk(const char *);
	void DumpSaveDirectory();
	void Compress(SaveFile_t *);
	void Uncompress(SaveFile_t *);
	virtual void AuditFiles();
	virtual bool LoadFileFromDisk(const char *);
	virtual void ChangeSaveInMemory(bool, const char *);
	CUtlMap<CUtlSymbol, CSaveDirectory::file_t, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)> & GetDirectory();
	SaveFile_t & GetFile(int);
	SaveFile_t & GetFile(FileHandle_t);
	FileHandle_t GetFileHandle(const char *);
	int GetFileIndex(const char *);
	bool HandleIsValid(FileHandle_t);
	bool IsRelevantFile(const char *);
	unsigned int CompressedSize(const char *);
	CUtlSymbol AddString(const char *);
	const char * GetString(CUtlSymbol &);

	// vtable[8] FileExists
	// vtable[9] RenameFile
	// vtable[10] RemoveFile
	// vtable[0] Open
	// vtable[1] Close
	// vtable[2] Read
	// vtable[3] Write
	// vtable[4] Seek
	// vtable[5] Tell
	// vtable[6] Size
	// vtable[7] Size
	// vtable[11] AsyncFinishAllWrites
	// vtable[12] AsyncRelease
	// vtable[13] AsyncWrite
	// vtable[14] AsyncFinish
	// vtable[15] AsyncAppend
	// vtable[16] AsyncAppendFile
	// vtable[17] DirectoryCopy
	// vtable[18] DirectoryExtract
	// vtable[19] DirectoryCount
	// vtable[20] DirectoryClear
	// vtable[21] AuditFiles
	// vtable[22] LoadFileFromDisk
	// vtable[23] ChangeSaveInMemory
	// sizeof = 24
};

// src/game/shared/game_saverestore_filesystem.cpp:1037
struct filelistelem_t {
	char szFileName[260];  // +0x0

	// sizeof = 260
};

// src/game/shared/game_saverestore_filesystem.cpp:1045
class CSaveRestoreFileSystemPassthrough : public ISaveRestoreFileSystem {
public:

private:

	int m_iContainerOpens;  // +0x8
	CSaveRestoreFileSystemPassthrough(CSaveRestoreFileSystemPassthrough &);
	CSaveRestoreFileSystemPassthrough(const CSaveRestoreFileSystemPassthrough &);
	CSaveRestoreFileSystemPassthrough();
	virtual bool FileExists(const char *, const char *);
	virtual void RemoveFile(const char *, const char *);
	virtual void RenameFile(const char *, const char *, const char *);
	virtual void AsyncFinishAllWrites();
	virtual FileHandle_t Open(const char *, const char *, const char *);
	virtual void Close(FileHandle_t);
	virtual int Read(void *, int, FileHandle_t);
	virtual int Write(const void *, int, FileHandle_t);
	virtual FSAsyncStatus_t AsyncWrite(const char *, const void *, int, bool, bool, FSAsyncControl_t *);
	virtual void Seek(FileHandle_t, int, FileSystemSeek_t);
	virtual unsigned int Tell(FileHandle_t);
	virtual unsigned int Size(FileHandle_t);
	virtual unsigned int Size(const char *, const char *);
	virtual FSAsyncStatus_t AsyncFinish(FSAsyncControl_t, bool);
	virtual void AsyncRelease(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncAppend(const char *, const void *, int, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppendFile(const char *, const char *, FSAsyncControl_t *);
	virtual void DirectoryCopy(const char *, const char *, const char *);
	virtual bool DirectoryExtract(FileHandle_t, int, const char *);
	virtual int DirectoryCount(const char *);
	virtual void DirectoryClear(const char *, const char *);
	virtual void AuditFiles();
	virtual bool LoadFileFromDisk(const char *);
	virtual void ChangeSaveInMemory(bool, const char *);

	// vtable[8] FileExists
	// vtable[10] RemoveFile
	// vtable[9] RenameFile
	// vtable[11] AsyncFinishAllWrites
	// vtable[0] Open
	// vtable[1] Close
	// vtable[2] Read
	// vtable[3] Write
	// vtable[13] AsyncWrite
	// vtable[4] Seek
	// vtable[5] Tell
	// vtable[6] Size
	// vtable[7] Size
	// vtable[14] AsyncFinish
	// vtable[12] AsyncRelease
	// vtable[15] AsyncAppend
	// vtable[16] AsyncAppendFile
	// vtable[17] DirectoryCopy
	// vtable[18] DirectoryExtract
	// vtable[19] DirectoryCount
	// vtable[20] DirectoryClear
	// vtable[21] AuditFiles
	// vtable[22] LoadFileFromDisk
	// vtable[23] ChangeSaveInMemory
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SaveFileLessFunc  (line 36, @0x0000000002059310, libserver.so)
bool __fastcall SaveFileLessFunc(const CUtlSymbol *const lhs, const CUtlSymbol *const rhs)
{
  return lhs->m_Id < rhs->m_Id;
}


// CSaveRestoreFileSystem::CSaveRestoreFileSystem  (line 100, @0x00000000020993d0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, Insert, InsertAt, Node_t, ResetDbgInfo, SetLessFunc, file_t, operator=, ~CUtlMap
// calls: operator new, CUtlSymbolTable::CUtlSymbolTable, CUtlSymbolTable::AddString, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::FindInsertionPosition, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, operator delete, _Unwind_Resume, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlSymbolTable::~CUtlSymbolTable
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// globals: SaveFileLessFunc(CUtlSymbol const&,CUtlSymbol const&)
void __fastcall CSaveRestoreFileSystem::CSaveRestoreFileSystem(CSaveRestoreFileSystem *const this)
{
  CSaveDirectory *v2; // rbx
  bool v3; // r15
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // [rsp+Eh] [rbp-92h]
  bool leftchild; // [rsp+1Ch] [rbp-84h] BYREF
  bool isDuplicate; // [rsp+1Dh] [rbp-83h] BYREF
  unsigned __int16 parent; // [rsp+1Eh] [rbp-82h] BYREF
  CSaveDirectory::file_t dummy; // [rsp+20h] [rbp-80h]
  CUtlMap<CUtlSymbol,CSaveDirectory::file_t,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)>::Node_t insert; // [rsp+40h] [rbp-60h] BYREF

  this->_vptr_ISaveRestoreFileSystem = &off_3FF1E10;
  v2 = operator new(0x78u);
  CUtlSymbolTable::CUtlSymbolTable(&v2->m_SymbolTable, 0, 16, 0);
  v2->m_Files.m_Tree.m_LastAlloc.index = -1;
  v2->m_Files.m_Tree.m_Root = -1;
  v2->m_Files.m_Tree.m_Elements.m_pMemory = 0;
  v2->m_Files.m_Tree.m_Elements.m_nAllocationCount = 0;
  v2->m_Files.m_Tree.m_Elements.m_nGrowSize = 0;
  v2->m_Files.m_Tree.m_NumElements = 0;
  v2->m_Files.m_Tree.m_FirstFree = -1;
  v2->m_Files.m_Tree.m_pElements = 0;
  v2->m_Files.m_Tree.m_LessFunc.m_LessFunc = SaveFileLessFunc;
  CUtlSymbolTable::AddString(&v2->m_SymbolTable, "dummy");
  insert.elem.eType = dummy.eType;
  memset(&insert.elem.nSize, 0, 24);
  insert.key.m_Id = dummy.eType;
  insert.elem.name.m_Id = dummy.eType;
  CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::FindInsertionPosition(
    &v2->m_Files.m_Tree,
    &insert,
    0,
    &parent,
    &leftchild,
    &isDuplicate);
  v3 = leftchild;
  v5 = parent;
  v4 = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
         &v2->m_Files.m_Tree,
         &insert);
  CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &v2->m_Files.m_Tree,
    v4,
    v5,
    v3);
  ++v2->m_Files.m_Tree.m_NumElements;
  this->m_pSaveDirectory = v2;
  this->m_iContainerOpens = 0;
}


// CSaveRestoreFileSystem::~CSaveRestoreFileSystem  (line 106, @0x0000000002098e40, libserver.so)  // inlines: Element, First, FirstInorder, IsIdxAfter, IsIdxValid, IsValidIndex, LeftChild, Next, NextInorder, Purge, RemoveAll, RemoveAt, SetLeftChild, SetRightChild, operator[], ~CSaveDirectory, ~CUtlBuffer, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, operator delete, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAt, CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<unsigned char, int>::Purge
void __fastcall CSaveRestoreFileSystem::~CSaveRestoreFileSystem(CSaveRestoreFileSystem *const this)
{
  CSaveDirectory *m_pSaveDirectory; // r15
  unsigned __int16 m_Root; // bx
  __int64 v3; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rdi
  unsigned __int16 m_Left; // si
  int m_nAllocationCount; // ecx
  unsigned __int16 index; // si
  int v8; // r12d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v9; // r14
  __int64 v10; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v11; // rcx
  CUtlMemory<unsigned char,int> *p_m_Memory; // r14
  CUtlBuffer *pCompressedBuffer; // r14
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 j; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v17; // rdi
  bool v18; // zf
  CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int,CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int>,short unsigned int> > *i; // [rsp+8h] [rbp-38h]

  this->_vptr_ISaveRestoreFileSystem = &off_3FF1E10;
  m_pSaveDirectory = this->m_pSaveDirectory;
  if ( m_pSaveDirectory != 0 )
  {
    m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
    v3 = 0xFFFF;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      v3 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v3 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
    }
    m_nAllocationCount = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount;
    index = m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index;
    if ( v3 < m_nAllocationCount && m_Root <= index )
    {
      v8 = m_Root;
      for ( i = &m_pSaveDirectory->m_Files.m_Tree; m_Root != 0xFFFF; v8 = m_Root )
      {
        v9 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
        if ( v9[v3].m_Left == m_Root )
          break;
        m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   i,
                   v8);
        v10 = v8;
        v11 = &v9[v10];
        p_m_Memory = &v9[v10].m_Data.elem.pBuffer->m_Memory;
        if ( p_m_Memory != 0 )
        {
          if ( (p_m_Memory->m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<unsigned char,int>::Purge(p_m_Memory);
          operator delete(p_m_Memory);
          v11 = &m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v10];
        }
        pCompressedBuffer = v11->m_Data.elem.pCompressedBuffer;
        if ( pCompressedBuffer != 0 )
        {
          if ( (pCompressedBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<unsigned char,int>::Purge(&v11->m_Data.elem.pCompressedBuffer->m_Memory);
          operator delete(pCompressedBuffer);
        }
        CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
          i,
          v8);
        m_nAllocationCount = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount;
        v3 = m_Root;
        index = m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index;
        if ( m_Root >= m_nAllocationCount || m_Root > index )
          goto LABEL_24;
      }
      index = m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index;
    }
LABEL_24:
    if ( index != 0xFFFF )
    {
      if ( m_nAllocationCount > 0 )
      {
        v14 = m_nAllocationCount;
        v15 = 0;
        for ( j = 0; j != 0xFFFF; ++j )
        {
          if ( j < v14 && j <= index )
          {
            v17 = &m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v15];
            if ( j != v17->m_Left )
            {
              v17->m_Right = m_pSaveDirectory->m_Files.m_Tree.m_FirstFree;
              m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v15].m_Left = j;
              index = m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index;
              m_pSaveDirectory->m_Files.m_Tree.m_FirstFree = j;
            }
          }
          if ( j == index )
            break;
          v14 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount;
          if ( (j + 1) >= v14 )
            break;
          ++v15;
        }
      }
      m_pSaveDirectory->m_Files.m_Tree.m_Root = -1;
      m_pSaveDirectory->m_Files.m_Tree.m_NumElements = 0;
    }
    v18 = (m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    m_pSaveDirectory->m_Files.m_Tree.m_FirstFree = -1;
    if ( v18 )
    {
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&m_pSaveDirectory->m_Files.m_Tree.m_Elements);
      v18 = (m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
      m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index = -1;
      if ( v18 )
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&m_pSaveDirectory->m_Files.m_Tree.m_Elements);
    }
    else
    {
      m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index = -1;
    }
    CUtlSymbolTable::~CUtlSymbolTable(&m_pSaveDirectory->m_SymbolTable);
    operator delete(m_pSaveDirectory);
  }
}


// CSaveRestoreFileSystem::AddString  (line 170, @0x000000000205aaa0, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, V_strlower_fast, CUtlSymbolTable::AddString, __stack_chk_fail
// callers: CSaveRestoreFileSystem::GetFileIndex, CSaveRestoreFileSystem::RenameFile
CSaveRestoreFileSystem *__fastcall CSaveRestoreFileSystem::AddString(
        CSaveRestoreFileSystem *const this,
        CUtlSymbolTable *const *str,
        __int64 a3)
{
  const char *v5; // rax
  char szString[260]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v8; // [rsp+108h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  _V_strncpy(szString, a3, 260);
  v5 = V_strlower_fast(szString);
  CUtlSymbolTable::AddString(*str, v5);
  return this;
}


// CSaveRestoreFileSystem::Compress  (line 187, @0x0000000002073b00, libserver.so)  // inlines: CLZSS, CUtlSymbol, GetBool, GetInt, GetString, Purge
// calls: CUtlMemory<unsigned char, int>::Purge, CLZSS::Compress, CUtlBuffer::AssumeMemory, CUtlBuffer::SeekGet, CUtlBuffer::SeekPut, CUtlSymbolTable::String, Msg, CUtlBuffer::Put
// callers: CSaveRestoreFileSystem::AsyncAppend, CSaveRestoreFileSystem::AsyncWrite, CSaveRestoreFileSystem::Close
// strings: "SIM: SaveDir: (%s) Compressed %d bytes to %d bytes. (%.0f%%)\n"
void __fastcall CSaveRestoreFileSystem::Compress(CSaveRestoreFileSystem *const this, SaveFile_t *pFile)
{
  CUtlBuffer *pCompressedBuffer; // rdi
  bool v5; // zf
  CUtlBuffer *pBuffer; // rax
  unsigned __int8 *v7; // rax
  CUtlBuffer *v8; // rdi
  unsigned int nSize; // r12d
  float v10; // xmm0_4
  unsigned int nCompressedSize; // r14d
  CSaveDirectory *m_pSaveDirectory; // rdi
  const char *v13; // rax
  float percent; // [rsp+Ch] [rbp-54h]
  CUtlSymbol id; // [rsp+10h] [rbp-50h] BYREF
  CLZSS compressor; // [rsp+20h] [rbp-40h] BYREF

  pCompressedBuffer = pFile->pCompressedBuffer;
  v5 = (pCompressedBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pCompressedBuffer->m_Get = 0;
  pCompressedBuffer->m_Put = 0;
  pCompressedBuffer->m_nOffset = 0;
  pCompressedBuffer->m_nMaxPut = 0;
  pCompressedBuffer->m_Error = 0;
  if ( v5 )
    CUtlMemory<unsigned char,int>::Purge(&pCompressedBuffer->m_Memory);
  pBuffer = pFile->pBuffer;
  compressor.m_nWindowSize = 2048;
  v7 = CLZSS::Compress(&compressor, pBuffer->m_Memory.m_pMemory, pFile->nSize, &pFile->nCompressedSize, 0);
  if ( v7 != 0 )
  {
    CUtlBuffer::AssumeMemory(pFile->pCompressedBuffer, v7, pFile->nCompressedSize, pFile->nCompressedSize, 0);
  }
  else
  {
    CUtlBuffer::Put(pFile->pCompressedBuffer, pFile->pBuffer->m_Memory.m_pMemory, pFile->nSize);
    pFile->nCompressedSize = pFile->nSize;
  }
  CUtlBuffer::SeekGet(pFile->pCompressedBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
  CUtlBuffer::SeekPut(pFile->pCompressedBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, pFile->nCompressedSize);
  v8 = pFile->pBuffer;
  v5 = (v8->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  v8->m_Get = 0;
  v8->m_Put = 0;
  v8->m_nOffset = 0;
  v8->m_nMaxPut = 0;
  v8->m_Error = 0;
  if ( v5 )
    CUtlMemory<unsigned char,int>::Purge(&v8->m_Memory);
  nSize = pFile->nSize;
  v10 = 0.0;
  pFile->nSize = 0;
  nCompressedSize = pFile->nCompressedSize;
  if ( nSize != 0 )
    v10 = (1.0 - (nCompressedSize / nSize)) * 100.0;
  if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pSaveDirectory = this->m_pSaveDirectory;
    percent = v10;
    id.m_Id = pFile->name.m_Id;
    v13 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &id);
    Msg("SIM: SaveDir: (%s) Compressed %d bytes to %d bytes. (%.0f%%)\n", v13, nSize, nCompressedSize, percent);
  }
}


// CSaveRestoreFileSystem::Uncompress  (line 276, @0x0000000002073f20, libserver.so)  // inlines: CLZSS, CUtlSymbol, GetBool, GetInt, GetString, Purge
// calls: CUtlMemory<unsigned char, int>::Purge, CLZSS::GetActualSize, CLZSS::Uncompress, CUtlBuffer::AssumeMemory, CUtlBuffer::SeekGet, CUtlBuffer::SeekPut, CUtlSymbolTable::String, Msg, CUtlBuffer::Put
// callers: CSaveRestoreFileSystem::Open
// strings: "SIM: SaveDir: (%s) Uncompressed %d bytes to %d bytes.\n"
void __fastcall CSaveRestoreFileSystem::Uncompress(CSaveRestoreFileSystem *const this, SaveFile_t *pFile)
{
  CUtlBuffer *pBuffer; // rdi
  bool v5; // zf
  CUtlBuffer *pCompressedBuffer; // rax
  unsigned int ActualSize; // eax
  unsigned __int8 *v8; // r14
  unsigned int v9; // eax
  CUtlBuffer *v10; // rdi
  unsigned int nCompressedSize; // r12d
  unsigned int nSize; // r14d
  CSaveDirectory *m_pSaveDirectory; // rdi
  const char *v14; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-50h] BYREF
  CLZSS compressor; // [rsp+10h] [rbp-40h] BYREF

  pBuffer = pFile->pBuffer;
  v5 = (pBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pBuffer->m_Get = 0;
  pBuffer->m_Put = 0;
  pBuffer->m_nOffset = 0;
  pBuffer->m_nMaxPut = 0;
  pBuffer->m_Error = 0;
  if ( v5 )
    CUtlMemory<unsigned char,int>::Purge(&pBuffer->m_Memory);
  pCompressedBuffer = pFile->pCompressedBuffer;
  compressor.m_nWindowSize = 4096;
  ActualSize = CLZSS::GetActualSize(&compressor, pCompressedBuffer->m_Memory.m_pMemory);
  if ( ActualSize != 0 )
  {
    v8 = (**g_pMemAlloc)(g_pMemAlloc, ActualSize);
    v9 = CLZSS::Uncompress(&compressor, pFile->pCompressedBuffer->m_Memory.m_pMemory, v8);
    CUtlBuffer::AssumeMemory(pFile->pBuffer, v8, v9, v9, 0);
  }
  else
  {
    CUtlBuffer::Put(pFile->pBuffer, pFile->pCompressedBuffer->m_Memory.m_pMemory, pFile->nCompressedSize);
  }
  v10 = pFile->pBuffer;
  pFile->nSize = v10->m_nMaxPut;
  CUtlBuffer::SeekGet(v10, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
  CUtlBuffer::SeekPut(pFile->pBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, pFile->nSize);
  nCompressedSize = pFile->nCompressedSize;
  nSize = pFile->nSize;
  if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pSaveDirectory = this->m_pSaveDirectory;
    id.m_Id = pFile->name.m_Id;
    v14 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &id);
    Msg("SIM: SaveDir: (%s) Uncompressed %d bytes to %d bytes.\n", v14, nCompressedSize, nSize);
  }
}


// CSaveRestoreFileSystem::GetFileIndex  (line 309, @0x000000000207de30, libserver.so)  // inlines: CUtlSymbol, Find, Node_t, file_t, operator=
// calls: V_UnqualifiedFileName, CSaveRestoreFileSystem::AddString, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CSaveRestoreFileSystem::GetFileHandle, CSaveRestoreFileSystem::FileExists, CSaveRestoreFileSystem::Size, CSaveRestoreFileSystem::CompressedSize, CSaveRestoreFileSystem::RemoveFile, CSaveRestoreFileSystem::RenameFile
int __fastcall CSaveRestoreFileSystem::GetFileIndex(CSaveRestoreFileSystem *const this, const char *filename)
{
  __int64 v3; // rax
  CSaveDirectory *m_pSaveDirectory; // rdi
  CUtlSymbol id; // [rsp+0h] [rbp-50h] BYREF
  CUtlMap<CUtlSymbol,CSaveDirectory::file_t,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  v3 = V_UnqualifiedFileName(filename);
  CSaveRestoreFileSystem::AddString(&id, &this->m_pSaveDirectory, v3);
  m_pSaveDirectory = this->m_pSaveDirectory;
  search.elem.name.m_Id = -1;
  memset(&search.elem.nSize, 0, 24);
  search.key = id;
  return CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pSaveDirectory->m_Files.m_Tree,
           &search);
}


// CSaveRestoreFileSystem::GetFileHandle  (line 315, @0x000000000207dea0, libserver.so)
// calls: CSaveRestoreFileSystem::GetFileIndex
FileHandle_t __fastcall CSaveRestoreFileSystem::GetFileHandle(CSaveRestoreFileSystem *const this, const char *filename)
{
  int FileIndex; // eax
  void *v3; // rdx

  FileIndex = CSaveRestoreFileSystem::GetFileIndex(this, filename);
  v3 = 0;
  if ( FileIndex != 0xFFFF )
    return FileIndex;
  return v3;
}


// CSaveRestoreFileSystem::FileExists  (line 328, @0x000000000207dec0, libserver.so)  // inlines: GetFileHandle
// calls: CSaveRestoreFileSystem::GetFileIndex
bool __fastcall CSaveRestoreFileSystem::FileExists(
        CSaveRestoreFileSystem *const this,
        const char *pFileName,
        const char *pPathID)
{
  int FileIndex; // eax
  bool v4; // dl

  FileIndex = CSaveRestoreFileSystem::GetFileIndex(this, pFileName);
  v4 = 0;
  if ( FileIndex != 0xFFFF )
    return FileIndex != 0;
  return v4;
}


// CSaveRestoreFileSystem::HandleIsValid  (line 336, @0x0000000002074050, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
bool __fastcall CSaveRestoreFileSystem::HandleIsValid(CSaveRestoreFileSystem *const this, FileHandle_t hFile)
{
  CSaveDirectory *m_pSaveDirectory; // rdx
  bool result; // al

  if ( hFile == 0 )
    return 0;
  m_pSaveDirectory = this->m_pSaveDirectory;
  result = 0;
  if ( hFile < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
    && hFile <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index
    && hFile != 0xFFFF )
  {
    return hFile != m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[hFile].m_Left;
  }
  return result;
}


// CSaveRestoreFileSystem::RenameFile  (line 344, @0x0000000002088bf0, libserver.so)  // inlines: Element, GetFile, Link, Reinsert, operator=, operator[]
// calls: CSaveRestoreFileSystem::GetFileIndex, V_UnqualifiedFileName, CSaveRestoreFileSystem::AddString, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::FindInsertionPosition, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
void __fastcall CSaveRestoreFileSystem::RenameFile(
        CSaveRestoreFileSystem *const this,
        const char *pOldPath,
        const char *pNewPath,
        const char *pathID)
{
  int FileIndex; // eax
  unsigned __int16 v7; // r13
  __int64 v8; // rax
  UtlSymId_t m_Id; // ax
  unsigned __int64 v10; // r12
  CSaveDirectory *m_pSaveDirectory; // rbx
  bool leftchild; // [rsp+Eh] [rbp-32h] BYREF
  bool isDuplicate; // [rsp+Fh] [rbp-31h] BYREF
  CUtlSymbol newID; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int16 parent[17]; // [rsp+1Eh] [rbp-22h] BYREF

  FileIndex = CSaveRestoreFileSystem::GetFileIndex(this, pOldPath);
  v7 = FileIndex;
  if ( FileIndex != 0xFFFF )
  {
    v8 = V_UnqualifiedFileName(pNewPath);
    CSaveRestoreFileSystem::AddString(&newID, &this->m_pSaveDirectory, v8);
    m_Id = newID.m_Id;
    v10 = v7;
    this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem.name = newID;
    m_pSaveDirectory = this->m_pSaveDirectory;
    m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v10].m_Data.key.m_Id = m_Id;
    CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
      &m_pSaveDirectory->m_Files.m_Tree,
      v7);
    if ( v7 != 0xFFFF )
    {
      CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::FindInsertionPosition(
        &m_pSaveDirectory->m_Files.m_Tree,
        &m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v10].m_Data,
        0,
        parent,
        &leftchild,
        &isDuplicate);
      CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &m_pSaveDirectory->m_Files.m_Tree,
        v7,
        parent[0],
        leftchild);
    }
  }
}


// CSaveRestoreFileSystem::RemoveFile  (line 358, @0x0000000002088b20, libserver.so)  // inlines: Element, GetFile, Purge, RemoveAt, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: CSaveRestoreFileSystem::GetFileIndex, operator delete, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAt, CUtlMemory<unsigned char, int>::Purge
void __fastcall CSaveRestoreFileSystem::RemoveFile(
        CSaveRestoreFileSystem *const this,
        const char *pRelativePath,
        const char *pathID)
{
  int FileIndex; // eax
  unsigned __int16 v5; // r13
  CSaveDirectory *m_pSaveDirectory; // rdx
  __int64 v7; // r12
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v8; // rax
  CUtlBuffer *pBuffer; // r14
  CUtlBuffer *pCompressedBuffer; // r12

  FileIndex = CSaveRestoreFileSystem::GetFileIndex(this, pRelativePath);
  if ( FileIndex != 0xFFFF )
  {
    v5 = FileIndex;
    m_pSaveDirectory = this->m_pSaveDirectory;
    v7 = FileIndex;
    v8 = &m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v7];
    pBuffer = v8->m_Data.elem.pBuffer;
    if ( pBuffer != 0 )
    {
      if ( (pBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned char,int>::Purge(&v8->m_Data.elem.pBuffer->m_Memory);
      operator delete(pBuffer);
      m_pSaveDirectory = this->m_pSaveDirectory;
      v8 = &m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v7];
    }
    pCompressedBuffer = v8->m_Data.elem.pCompressedBuffer;
    if ( pCompressedBuffer != 0 )
    {
      if ( (pCompressedBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned char,int>::Purge(&v8->m_Data.elem.pCompressedBuffer->m_Memory);
      operator delete(pCompressedBuffer);
      m_pSaveDirectory = this->m_pSaveDirectory;
    }
    CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
      &m_pSaveDirectory->m_Files.m_Tree,
      v5);
  }
}


// CSaveRestoreFileSystem::Open  (line 372, @0x0000000002088cc0, libserver.so)  // inlines: AddString, CUtlSymbol, Clear, Element, Find, GetFile, Insert, InsertAt, Node_t, V_strncpy<long unsigned int>, file_t, operator=, operator[]
// calls: V_UnqualifiedFileName, _V_strncpy, V_strlower_fast, CUtlSymbolTable::AddString, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::Find, V_stricmp_fast, CUtlBuffer::AddNullTermination, CSaveRestoreFileSystem::Uncompress, operator new, CUtlBuffer::CUtlBuffer, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::FindInsertionPosition, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode (18 total)
// strings: "wb", "ab+", "CSaveRestoreFileSystem: Attempted to open %s with unsupported option %s\n"
FileHandle_t __fastcall CSaveRestoreFileSystem::Open(
        CSaveRestoreFileSystem *const this,
        const char *pFullName,
        const char *pOptions,
        const char *pathID)
{
  __int64 v7; // rax
  const char *v8; // rax
  CSaveDirectory *m_pSaveDirectory; // rax
  int v10; // eax
  void *v11; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v12; // r15
  CUtlBuffer *pBuffer; // rdi
  CUtlBuffer *v15; // r15
  CSaveDirectory *v16; // r10
  CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int,CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // r15
  unsigned __int16 v18; // ax
  bool v19; // cl
  CUtlBuffer *v20; // rdi
  CSaveDirectory *v21; // [rsp+8h] [rbp-1C8h]
  unsigned __int16 v22; // [rsp+14h] [rbp-1BCh]
  SaveFile_t *pFile; // [rsp+18h] [rbp-1B8h]
  CUtlBuffer *pFilea; // [rsp+18h] [rbp-1B8h]
  bool leftchild; // [rsp+2Eh] [rbp-1A2h] BYREF
  bool isDuplicate; // [rsp+2Fh] [rbp-1A1h] BYREF
  CUtlSymbol id; // [rsp+30h] [rbp-1A0h]
  unsigned __int16 parent; // [rsp+3Eh] [rbp-192h] BYREF
  SaveFile_t newFile; // [rsp+40h] [rbp-190h]
  CUtlMap<CUtlSymbol,CSaveDirectory::file_t,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)>::Node_t search; // [rsp+60h] [rbp-170h] BYREF
  _BYTE v31[264]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+198h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v7 = V_UnqualifiedFileName(pFullName);
  _V_strncpy(v31, v7, 260);
  v8 = V_strlower_fast(v31);
  CUtlSymbolTable::AddString(&this->m_pSaveDirectory->m_SymbolTable, v8);
  search.elem.name.m_Id = -1;
  search.key = id;
  m_pSaveDirectory = this->m_pSaveDirectory;
  memset(&search.elem.nSize, 0, 24);
  v10 = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          &m_pSaveDirectory->m_Files.m_Tree,
          &search);
  if ( v10 == 0xFFFF )
  {
    if ( V_stricmp_fast(pOptions, "rb") == 0 )
      return 0;
    v15 = operator new(0x50u);
    CUtlBuffer::CUtlBuffer(v15, 0, 0, 0);
    pFilea = operator new(0x50u);
    CUtlBuffer::CUtlBuffer(pFilea, 0, 0, 0);
    search.elem.pBuffer = v15;
    v16 = this->m_pSaveDirectory;
    search.elem.nSize = 0;
    search.elem.nCompressedSize = 0;
    search.key = id;
    p_m_Tree = &v16->m_Files.m_Tree;
    v21 = v16;
    search.elem.name = id;
    search.elem.eType = newFile.eType;
    search.elem.pCompressedBuffer = pFilea;
    CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::FindInsertionPosition(
      &v16->m_Files.m_Tree,
      &search,
      0,
      &parent,
      &leftchild,
      &isDuplicate);
    v22 = parent;
    LOBYTE(pFilea) = leftchild;
    v18 = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            p_m_Tree,
            &search);
    v19 = pFilea;
    LODWORD(pFilea) = v18;
    CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      p_m_Tree,
      v18,
      v22,
      v19);
    v10 = pFilea;
    ++v21->m_Files.m_Tree.m_NumElements;
  }
  v11 = v10;
  v12 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v10];
  pFile = &v12->m_Data.elem;
  if ( V_stricmp_fast(pOptions, "rb") == 0 )
  {
    CSaveRestoreFileSystem::Uncompress(this, pFile);
    v12->m_Data.elem.eType = 0;
    return v11;
  }
  if ( V_stricmp_fast(pOptions, "wb") == 0 )
  {
    pBuffer = v12->m_Data.elem.pBuffer;
    pBuffer->m_Get = 0;
    pBuffer->m_Put = 0;
    pBuffer->m_Error = 0;
    pBuffer->m_nOffset = 0;
    pBuffer->m_nMaxPut = -1;
    CUtlBuffer::AddNullTermination(pBuffer);
    v12->m_Data.elem.eType = 1;
    return v11;
  }
  if ( V_stricmp_fast(pOptions, "a") == 0 )
  {
    CSaveRestoreFileSystem::Uncompress(this, pFile);
    v12->m_Data.elem.eType = 1;
    return v11;
  }
  if ( V_stricmp_fast(pOptions, "ab+") == 0 )
  {
    CSaveRestoreFileSystem::Uncompress(this, pFile);
    v20 = v12->m_Data.elem.pBuffer;
    v12->m_Data.elem.eType = 1;
    CUtlBuffer::SeekPut(v20, CUtlBuffer::SeekType_t::SEEK_TAIL, 0);
    return v11;
  }
  Warning("CSaveRestoreFileSystem: Attempted to open %s with unsupported option %s\n", pFullName, pOptions);
  return 0;
}


// CSaveRestoreFileSystem::Close  (line 431, @0x0000000002073e10, libserver.so)  // inlines: CUtlSymbol, Element, GetBool, GetFile, GetInt, GetString, HandleIsValid, IsIdxValid, IsValidIndex, LeftChild, Purge, operator[]
// calls: CUtlSymbolTable::String, Msg, CUtlMemory<unsigned char, int>::Purge, CSaveRestoreFileSystem::Compress
// strings: "SIM: Closed file: %s\n"
void __fastcall CSaveRestoreFileSystem::Close(CSaveRestoreFileSystem *const this, FileHandle_t hFile)
{
  CSaveDirectory *m_pSaveDirectory; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rbx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v4; // rbx
  const char *v5; // rax
  CUtlBuffer *pBuffer; // rdi
  bool v7; // zf
  UtlSymId_t m_Id; // [rsp-28h] [rbp-28h] BYREF

  if ( hFile != 0 )
  {
    m_pSaveDirectory = this->m_pSaveDirectory;
    if ( hFile < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
      && hFile <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index
      && hFile != 0xFFFF )
    {
      m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      if ( m_pMemory[hFile].m_Left != hFile )
      {
        v4 = &m_pMemory[hFile];
        if ( v4->m_Data.elem.eType != 0 )
        {
          CSaveRestoreFileSystem::Compress(this, &v4->m_Data.elem);
        }
        else
        {
          if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
          {
            m_Id = v4->m_Data.elem.name.m_Id;
            v5 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &m_Id);
            Msg("SIM: Closed file: %s\n", v5);
          }
          pBuffer = v4->m_Data.elem.pBuffer;
          v7 = (pBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0;
          pBuffer->m_Get = 0;
          pBuffer->m_Put = 0;
          pBuffer->m_nOffset = 0;
          pBuffer->m_nMaxPut = 0;
          pBuffer->m_Error = 0;
          if ( v7 )
            CUtlMemory<unsigned char,int>::Purge(&pBuffer->m_Memory);
          v4->m_Data.elem.nSize = 0;
        }
      }
    }
  }
}


// CSaveRestoreFileSystem::Read  (line 455, @0x000000000205c480, libserver.so)  // inlines: Element, GetFile, HandleIsValid, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: Warning, CUtlBuffer::GetUpTo
// strings: "Read: Attempted to read from a write-only file"
int __fastcall CSaveRestoreFileSystem::Read(
        CSaveRestoreFileSystem *const this,
        void *pOutput,
        int size,
        FileHandle_t hFile)
{
  CSaveDirectory *m_pSaveDirectory; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // r8
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v6; // rax

  if ( hFile == 0 )
    return 0;
  m_pSaveDirectory = this->m_pSaveDirectory;
  if ( hFile >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( hFile > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
    return 0;
  if ( hFile == 0xFFFF )
    return 0;
  m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
  if ( m_pMemory[hFile].m_Left == hFile )
    return 0;
  v6 = &m_pMemory[hFile];
  if ( v6->m_Data.elem.eType == 0 )
    return CUtlBuffer::GetUpTo(v6->m_Data.elem.pBuffer, pOutput, size);
  Warning("Read: Attempted to read from a write-only file", pOutput, size);
  return 0;
}


// CSaveRestoreFileSystem::Write  (line 479, @0x000000000205c500, libserver.so)  // inlines: Element, GetFile, HandleIsValid, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: Warning, CUtlBuffer::Put
// strings: "Write: Attempted to write to a read-only file"
int __fastcall CSaveRestoreFileSystem::Write(
        CSaveRestoreFileSystem *const this,
        const void *pInput,
        int size,
        FileHandle_t hFile)
{
  CSaveDirectory *m_pSaveDirectory; // rdx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rbx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v7; // rbx
  int sizea; // [rsp+0h] [rbp-1Ch]

  if ( hFile == 0 )
    return 0;
  m_pSaveDirectory = this->m_pSaveDirectory;
  if ( hFile >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
    || hFile > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index
    || hFile == 0xFFFF )
  {
    return 0;
  }
  m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
  if ( m_pMemory[hFile].m_Left == hFile )
    return 0;
  v7 = &m_pMemory[hFile];
  if ( v7->m_Data.elem.eType != 1 )
  {
    Warning("Write: Attempted to write to a read-only file", pInput);
    return 0;
  }
  sizea = size;
  CUtlBuffer::Put(v7->m_Data.elem.pBuffer, pInput, size);
  v7->m_Data.elem.nSize = v7->m_Data.elem.pBuffer->m_nMaxPut;
  return sizea;
}


// CSaveRestoreFileSystem::Seek  (line 506, @0x000000000205c010, libserver.so)  // inlines: Element, GetFile, HandleIsValid, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CUtlBuffer::SeekPut, CUtlBuffer::SeekGet
void __fastcall CSaveRestoreFileSystem::Seek(
        CSaveRestoreFileSystem *const this,
        FileHandle_t hFile,
        int pos,
        FileSystemSeek_t method)
{
  CSaveDirectory *m_pSaveDirectory; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // r8
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v6; // r8
  int eType; // eax

  if ( hFile != 0 )
  {
    m_pSaveDirectory = this->m_pSaveDirectory;
    if ( hFile < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
      && hFile <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index
      && hFile != 0xFFFF )
    {
      m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      if ( m_pMemory[hFile].m_Left != hFile )
      {
        v6 = &m_pMemory[hFile];
        eType = v6->m_Data.elem.eType;
        if ( eType != 0 )
        {
          if ( eType == 1 )
            CUtlBuffer::SeekPut(v6->m_Data.elem.pBuffer, method, pos);
        }
        else
        {
          CUtlBuffer::SeekGet(v6->m_Data.elem.pBuffer, method, pos);
        }
      }
    }
  }
}


// CSaveRestoreFileSystem::Tell  (line 530, @0x000000000205bf80, libserver.so)  // inlines: Element, GetFile, HandleIsValid, IsIdxValid, IsValidIndex, LeftChild, operator[]
unsigned int __fastcall CSaveRestoreFileSystem::Tell(CSaveRestoreFileSystem *const this, FileHandle_t hFile)
{
  CSaveDirectory *m_pSaveDirectory; // rdx
  unsigned int result; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rdi
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v5; // rdx
  int eType; // ecx

  if ( hFile == 0 )
    return 0;
  m_pSaveDirectory = this->m_pSaveDirectory;
  result = 0;
  if ( hFile < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
    && hFile <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index
    && hFile != 0xFFFF )
  {
    m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    if ( m_pMemory[hFile].m_Left != hFile )
    {
      v5 = &m_pMemory[hFile];
      eType = v5->m_Data.elem.eType;
      if ( eType != 0 )
      {
        if ( eType == 1 )
          return v5->m_Data.elem.pBuffer->m_Put;
      }
      else
      {
        return v5->m_Data.elem.pBuffer->m_Get;
      }
    }
  }
  return result;
}


// CSaveRestoreFileSystem::Size  (line 555, @0x000000000205bf20, libserver.so)  // inlines: Element, GetFile, HandleIsValid, IsIdxValid, IsValidIndex, LeftChild, operator[]
unsigned int __fastcall CSaveRestoreFileSystem::Size(CSaveRestoreFileSystem *const this, FileHandle_t hFile)
{
  CSaveDirectory *m_pSaveDirectory; // rdx
  unsigned int result; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rdi

  if ( hFile == 0 )
    return 0;
  m_pSaveDirectory = this->m_pSaveDirectory;
  result = 0;
  if ( hFile < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
    && hFile <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index
    && hFile != 0xFFFF )
  {
    m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    if ( m_pMemory[hFile].m_Left != hFile )
      return m_pMemory[hFile].m_Data.elem.nSize;
  }
  return result;
}


// CSaveRestoreFileSystem::Size  (line 567, @0x000000000207dee0, libserver.so)  // inlines: GetFileHandle
// calls: CSaveRestoreFileSystem::GetFileIndex
unsigned int __fastcall CSaveRestoreFileSystem::Size(
        CSaveRestoreFileSystem *const this,
        const char *pFileName,
        const char *pPathID)
{
  unsigned int (__fastcall *v4)(CSaveRestoreFileSystem *const, __int64); // r12
  int FileIndex; // eax
  __int64 v6; // rsi

  v4 = *(this->_vptr_ISaveRestoreFileSystem + 6);
  FileIndex = CSaveRestoreFileSystem::GetFileIndex(this, pFileName);
  v6 = 0;
  if ( FileIndex != 0xFFFF )
    v6 = FileIndex;
  return v4(this, v6);
}


// CSaveRestoreFileSystem::CompressedSize  (line 575, @0x000000000207df10, libserver.so)  // inlines: Element, GetFile, GetFileHandle, operator[]
// calls: CSaveRestoreFileSystem::GetFileIndex
// callers: CSaveRestoreFileSystem::DirectorCopyToMemory, CSaveRestoreFileSystem::DirectoryCopy
unsigned int __fastcall CSaveRestoreFileSystem::CompressedSize(
        CSaveRestoreFileSystem *const this,
        const char *pFileName)
{
  int FileIndex; // edx
  unsigned int result; // eax

  FileIndex = CSaveRestoreFileSystem::GetFileIndex(this, pFileName);
  result = 0;
  if ( FileIndex != 0xFFFF && FileIndex != 0 )
    return this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[FileIndex].m_Data.elem.nCompressedSize;
  return result;
}


// CSaveRestoreFileSystem::AsyncWrite  (line 588, @0x0000000002073d50, libserver.so)  // inlines: Element, GetFile, operator[]
// calls: CUtlBuffer::Put, CSaveRestoreFileSystem::Compress, operator delete [], Warning
// strings: "wb", "AsyncWrite: Attempted to write to a read-only file"
FSAsyncStatus_t __fastcall CSaveRestoreFileSystem::AsyncWrite(
        CSaveRestoreFileSystem *const this,
        const char *pFileName,
        const void *pSrc,
        int nSrcBytes,
        bool bFreeMemory,
        bool bAppend,
        FSAsyncControl_t *pControl)
{
  __int64 v11; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v12; // rbx
  FSAsyncStatus_t v13; // ebx
  SaveFile_t *file; // [rsp+8h] [rbp-38h]

  v11 = (*this->_vptr_ISaveRestoreFileSystem)(this, pFileName, "wb", 0, bFreeMemory, bAppend);
  if ( v11 != 0 )
  {
    v12 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v11];
    file = &v12->m_Data.elem;
    if ( v12->m_Data.elem.eType == 1 )
    {
      CUtlBuffer::Put(v12->m_Data.elem.pBuffer, pSrc, nSrcBytes);
      v12->m_Data.elem.nSize = v12->m_Data.elem.pBuffer->m_nMaxPut;
      v13 = FSAsyncStatus_t::FSASYNC_OK;
      CSaveRestoreFileSystem::Compress(this, file);
    }
    else
    {
      v13 = FSAsyncStatus_t::FSASYNC_ERR_FAILURE;
      Warning("AsyncWrite: Attempted to write to a read-only file");
    }
  }
  else
  {
    v13 = FSAsyncStatus_t::FSASYNC_ERR_FAILURE;
  }
  if ( bFreeMemory && pSrc != 0 )
    operator delete[](pSrc);
  return v13;
}


// CSaveRestoreFileSystem::AsyncAppend  (line 620, @0x0000000002073c90, libserver.so)  // inlines: Element, GetFile, operator[]
// calls: CUtlBuffer::Put, CSaveRestoreFileSystem::Compress, operator delete [], Warning
// strings: "AsyncAppend: Attempted to write to a read-only file"
FSAsyncStatus_t __fastcall CSaveRestoreFileSystem::AsyncAppend(
        CSaveRestoreFileSystem *const this,
        const char *pFileName,
        const void *pSrc,
        int nSrcBytes,
        bool bFreeMemory,
        FSAsyncControl_t *pControl)
{
  __int64 v10; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v11; // rbx
  FSAsyncStatus_t v12; // ebx
  SaveFile_t *file; // [rsp+8h] [rbp-38h]

  v10 = (*this->_vptr_ISaveRestoreFileSystem)(this, pFileName, "a", 0, bFreeMemory, pControl);
  if ( v10 != 0 )
  {
    v11 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v10];
    file = &v11->m_Data.elem;
    if ( v11->m_Data.elem.eType == 1 )
    {
      CUtlBuffer::Put(v11->m_Data.elem.pBuffer, pSrc, nSrcBytes);
      v11->m_Data.elem.nSize = v11->m_Data.elem.pBuffer->m_nMaxPut;
      v12 = FSAsyncStatus_t::FSASYNC_OK;
      CSaveRestoreFileSystem::Compress(this, file);
    }
    else
    {
      v12 = FSAsyncStatus_t::FSASYNC_ERR_FAILURE;
      Warning("AsyncAppend: Attempted to write to a read-only file");
    }
  }
  else
  {
    v12 = FSAsyncStatus_t::FSASYNC_ERR_FAILURE;
  }
  if ( bFreeMemory && pSrc != 0 )
    operator delete[](pSrc);
  return v12;
}


// CSaveRestoreFileSystem::AsyncAppendFile  (line 651, @0x0000000002059320, libserver.so)  // inlines: Element, GetFile, operator[]
FSAsyncStatus_t __fastcall CSaveRestoreFileSystem::AsyncAppendFile(
        CSaveRestoreFileSystem *const this,
        const char *pDestFileName,
        const char *pSrcFileName,
        FSAsyncControl_t *pControl)
{
  __int64 v6; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v7; // rax

  v6 = (*this->_vptr_ISaveRestoreFileSystem)(this, pSrcFileName, "rb", 0);
  if ( v6 == 0 )
    return FSAsyncStatus_t::FSASYNC_ERR_FILEOPEN;
  v7 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v6];
  return (*(this->_vptr_ISaveRestoreFileSystem + 15))(
           this,
           pDestFileName,
           v7->m_Data.elem.pBuffer->m_Memory.m_pMemory,
           v7->m_Data.elem.nSize,
           0,
           0);
}


// CSaveRestoreFileSystem::AsyncFinish  (line 665, @0x0000000002059390, libserver.so)
FSAsyncStatus_t __fastcall CSaveRestoreFileSystem::AsyncFinish(
        CSaveRestoreFileSystem *const this,
        FSAsyncControl_t hControl,
        bool wait)
{
  return FSAsyncStatus_t::FSASYNC_OK;
}


// CSaveRestoreFileSystem::AsyncRelease  (line 670, @0x00000000020593a0, libserver.so)
void __fastcall CSaveRestoreFileSystem::AsyncRelease(CSaveRestoreFileSystem *const this, FSAsyncControl_t hControl)
{
  ;
}


// CSaveRestoreFileSystem::AsyncFinishAllWrites  (line 674, @0x00000000020593b0, libserver.so)
void __fastcall CSaveRestoreFileSystem::AsyncFinishAllWrites(CSaveRestoreFileSystem *const this)
{
  ;
}


// CSaveRestoreFileSystem::DirectorCopyToMemory  (line 682, @0x000000000207df50, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetBool, GetFile, GetInt, GetString, IsIdxValid, IsRelevantFile, IsValidIndex, LeftChild, NextInorder, Purge, V_strncpy<long unsigned int>, memset, operator[]
// calls: CUtlBuffer::Put, CUtlSymbolTable::String, V_stristr_fast(char const*,char const*), CSaveRestoreFileSystem::CompressedSize, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<unsigned char, int>::Purge, Msg, _V_strncpy, __stack_chk_fail
// strings: "ab+", ".hl", "SIM: (%s) Total Files Packed: %d [Size: %.02f KB]\n", ".vrman", "SIM: Packed: %s [Size: %.02f KB]\n"
void __fastcall CSaveRestoreFileSystem::DirectorCopyToMemory(
        CSaveRestoreFileSystem *const this,
        const char *pPath,
        const char *pDestFileName)
{
  __int64 v4; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v5; // r15
  CUtlBuffer *pCompressedBuffer; // rdi
  bool v7; // zf
  const void **p_m_pMemory; // rax
  CSaveDirectory *m_pSaveDirectory; // rbx
  __int64 v10; // rdx
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rsi
  unsigned __int16 m_Left; // cx
  int v14; // r13d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v15; // r14
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v16; // r14
  const char *v17; // rbx
  int m_nMaxPut; // ebx
  CSaveDirectory *v19; // rdi
  const char *v20; // rax
  CSaveDirectory *v21; // rdi
  float v22; // xmm0_4
  const char *v23; // rax
  double v24; // [rsp+8h] [rbp-188h]
  unsigned int nNumFilesPacked; // [rsp+24h] [rbp-16Ch]
  UtlSymId_t m_Id; // [rsp+30h] [rbp-160h] BYREF
  int fileSize[4]; // [rsp+40h] [rbp-150h] BYREF
  char szFileName[260]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v29; // [rsp+158h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  v4 = (*this->_vptr_ISaveRestoreFileSystem)(this, pDestFileName, "ab+", pPath);
  if ( v4 != 0 )
  {
    v5 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v4];
    pCompressedBuffer = v5->m_Data.elem.pCompressedBuffer;
    v7 = (pCompressedBuffer->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    pCompressedBuffer->m_Get = 0;
    pCompressedBuffer->m_Put = 0;
    pCompressedBuffer->m_nOffset = 0;
    pCompressedBuffer->m_nMaxPut = 0;
    pCompressedBuffer->m_Error = 0;
    if ( v7 )
      CUtlMemory<unsigned char,int>::Purge(&pCompressedBuffer->m_Memory);
    p_m_pMemory = &v5->m_Data.elem.pBuffer->m_Memory.m_pMemory;
    v5->m_Data.elem.nCompressedSize = 0;
    CUtlBuffer::Put(v5->m_Data.elem.pCompressedBuffer, *p_m_pMemory, v5->m_Data.elem.nSize);
    m_pSaveDirectory = this->m_pSaveDirectory;
    v10 = 0xFFFF;
    m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      v10 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v10 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
    }
    nNumFilesPacked = 0;
    if ( m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount > v10
      && m_Root <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
    {
      v14 = m_Root;
      do
      {
        if ( m_Root == 0xFFFF )
          break;
        v15 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
        if ( v15[v10].m_Left == m_Root )
          break;
        v16 = &v15[v14];
        LOWORD(fileSize[0]) = v16->m_Data.elem.name.m_Id;
        v17 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, fileSize);
        if ( V_stristr_fast(v17, ".hl") != 0 || V_stristr_fast(v17, ".vrman") != 0 )
        {
          fileSize[0] = CSaveRestoreFileSystem::CompressedSize(this, v17);
          if ( fileSize[0] != 0 )
          {
            memset(szFileName, 0, sizeof(szFileName));
            _V_strncpy(szFileName, v17, 260);
            CUtlBuffer::Put(v5->m_Data.elem.pCompressedBuffer, szFileName, 260);
            CUtlBuffer::Put(v5->m_Data.elem.pCompressedBuffer, fileSize, 4);
            CUtlBuffer::Put(
              v5->m_Data.elem.pCompressedBuffer,
              v16->m_Data.elem.pCompressedBuffer->m_Memory.m_pMemory,
              v16->m_Data.elem.nCompressedSize);
            if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
            {
              v21 = this->m_pSaveDirectory;
              v22 = v16->m_Data.elem.nCompressedSize * 0.0009765625;
              m_Id = v16->m_Data.elem.name.m_Id;
              v24 = v22;
              v23 = CUtlSymbolTable::String(&v21->m_SymbolTable, &m_Id);
              Msg("SIM: Packed: %s [Size: %.02f KB]\n", v23, v24);
            }
            ++nNumFilesPacked;
          }
        }
        m_pSaveDirectory = this->m_pSaveDirectory;
        m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &m_pSaveDirectory->m_Files.m_Tree,
                   v14);
        v10 = m_Root;
        v14 = m_Root;
        if ( m_Root >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
          break;
      }
      while ( m_Root <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index );
    }
    m_nMaxPut = v5->m_Data.elem.pCompressedBuffer->m_nMaxPut;
    v5->m_Data.elem.nCompressedSize = m_nMaxPut;
    if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
    {
      v19 = this->m_pSaveDirectory;
      LOWORD(fileSize[0]) = v5->m_Data.elem.name.m_Id;
      v20 = CUtlSymbolTable::String(&v19->m_SymbolTable, fileSize);
      Msg("SIM: (%s) Total Files Packed: %d [Size: %.02f KB]\n", v20, nNumFilesPacked, (m_nMaxPut * 0.0009765625));
    }
  }
}


// CSaveRestoreFileSystem::DirectoryCopy  (line 733, @0x000000000207e300, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetFile, GetString, IsIdxValid, IsRelevantFile, IsValidIndex, LeftChild, NextInorder, memcpy, operator[]
// calls: V_stristr_fast(char const*,char const*), CUtlSymbolTable::String, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CSaveRestoreFileSystem::CompressedSize, operator new [], memcpy, operator new
// strings: ".hl", ".vrman"
void __fastcall CSaveRestoreFileSystem::DirectoryCopy(
        CSaveRestoreFileSystem *const this,
        const char *pPath,
        const char *pDestFileName,
        const char *pCurrentMod)
{
  __int64 v7; // rax
  CSaveDirectory *m_pSaveDirectory; // r15
  __int64 v9; // rdx
  __int64 v10; // r12
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rsi
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v13; // r12
  unsigned __int16 m_Left; // cx
  int v15; // r14d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v16; // rcx
  const char *v17; // r15
  CSaveDirectory *v18; // r12
  __int64 v19; // rdx
  unsigned __int16 Inorder; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v21; // rsi
  unsigned __int16 v22; // cx
  int v23; // r14d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v24; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v25; // r15
  const char *v26; // r12
  unsigned int v27; // eax
  void *v28; // rax
  void *v29; // rax
  void (__fastcall *v30)(IFileSystem *, const char *, _DWORD *, __int64, __int64, _QWORD); // r12
  _DWORD *v31; // rax
  int fileSize; // [rsp+Ch] [rbp-54h]
  void (__fastcall *v33)(IFileSystem *, const char *, void *, __int64, __int64, _QWORD); // [rsp+10h] [rbp-50h]
  _WORD v34[32]; // [rsp+20h] [rbp-40h] BYREF

  if ( V_stristr_fast(pPath, ".hl") != 0 || V_stristr_fast(pPath, ".vrman") != 0 )
  {
    v7 = (*this->_vptr_ISaveRestoreFileSystem)(this, pDestFileName, "rb", pPath);
    if ( v7 != 0 )
    {
      m_pSaveDirectory = this->m_pSaveDirectory;
      v9 = 0xFFFF;
      v10 = v7;
      m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
      v13 = &m_pMemory[v10];
      if ( m_Root != 0xFFFF )
      {
        v9 = m_Root;
        m_Left = m_pMemory[m_Root].m_Left;
        if ( m_Left != 0xFFFF )
        {
          while ( 1 )
          {
            v9 = m_Left;
            if ( m_pMemory[m_Left].m_Left == 0xFFFF )
              break;
            m_Left = m_pMemory[m_Left].m_Left;
          }
          m_Root = m_Left;
        }
      }
      if ( m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount > v9
        && m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index >= m_Root )
      {
        v15 = m_Root;
        do
        {
          if ( m_Root == 0xFFFF )
            break;
          v16 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
          if ( v16[v9].m_Left == m_Root )
            break;
          v34[0] = v16[v15].m_Data.elem.name.m_Id;
          v17 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, v34);
          if ( V_stristr_fast(v17, ".hl") == 0 )
            V_stristr_fast(v17, ".vrman");
          m_pSaveDirectory = this->m_pSaveDirectory;
          m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                     &m_pSaveDirectory->m_Files.m_Tree,
                     v15);
          v9 = m_Root;
          v15 = m_Root;
          if ( m_Root >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
            break;
        }
        while ( m_Root <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index );
      }
      (*(g_pFullFileSystem->_vptr_IAppSystem + 85))(
        g_pFullFileSystem,
        pDestFileName,
        v13->m_Data.elem.pBuffer,
        v13->m_Data.elem.nSize,
        1,
        0,
        0);
      v13->m_Data.elem.pBuffer = 0;
      (*(this->_vptr_ISaveRestoreFileSystem + 10))(this, pDestFileName, 0);
      v18 = this->m_pSaveDirectory;
      v19 = 0xFFFF;
      Inorder = v18->m_Files.m_Tree.m_Root;
      if ( Inorder != 0xFFFF )
      {
        v21 = v18->m_Files.m_Tree.m_Elements.m_pMemory;
        v19 = Inorder;
        v22 = v21[Inorder].m_Left;
        if ( v22 != 0xFFFF )
        {
          while ( 1 )
          {
            v19 = v22;
            if ( v21[v22].m_Left == 0xFFFF )
              break;
            v22 = v21[v22].m_Left;
          }
          Inorder = v22;
        }
      }
      if ( v19 < v18->m_Files.m_Tree.m_Elements.m_nAllocationCount && Inorder <= v18->m_Files.m_Tree.m_LastAlloc.index )
      {
        v23 = Inorder;
        do
        {
          if ( Inorder == 0xFFFF )
            break;
          v24 = v18->m_Files.m_Tree.m_Elements.m_pMemory;
          if ( v24[v19].m_Left == Inorder )
            break;
          v25 = &v24[v23];
          v34[0] = v25->m_Data.elem.name.m_Id;
          v26 = CUtlSymbolTable::String(&v18->m_SymbolTable, v34);
          if ( V_stristr_fast(v26, ".hl") != 0 || V_stristr_fast(v26, ".vrman") != 0 )
          {
            v27 = CSaveRestoreFileSystem::CompressedSize(this, v26);
            if ( v27 != 0 )
            {
              fileSize = v27;
              v33 = *(g_pFullFileSystem->_vptr_IAppSystem + 49);
              v28 = operator new[](0x104u);
              v29 = memcpy(v28, v26, 0x104u);
              v33(g_pFullFileSystem, pDestFileName, v29, 260, 1, 0);
              v30 = *(g_pFullFileSystem->_vptr_IAppSystem + 49);
              v31 = operator new(4u);
              *v31 = fileSize;
              v30(g_pFullFileSystem, pDestFileName, v31, 4, 1, 0);
              (*(g_pFullFileSystem->_vptr_IAppSystem + 85))(
                g_pFullFileSystem,
                pDestFileName,
                v25->m_Data.elem.pCompressedBuffer,
                v25->m_Data.elem.nCompressedSize,
                0,
                1,
                0);
            }
          }
          v18 = this->m_pSaveDirectory;
          Inorder = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                      &v18->m_Files.m_Tree,
                      v23);
          v19 = Inorder;
          v23 = Inorder;
          if ( Inorder >= v18->m_Files.m_Tree.m_Elements.m_nAllocationCount )
            break;
        }
        while ( Inorder <= v18->m_Files.m_Tree.m_LastAlloc.index );
      }
    }
  }
}


// CSaveRestoreFileSystem::DirectoryExtract  (line 803, @0x000000000205a520, libserver.so)  // inlines: CUtlSymbol, Element, GetBool, GetFile, GetInt, GetString, PeekPut, operator[]
// calls: CUtlBuffer::EnsureCapacity, CUtlBuffer::SeekPut, CUtlSymbolTable::String, Msg, __stack_chk_fail
// strings: "wb", "SIM: Extracted: %s [Size: %d KB]\n"
bool __fastcall CSaveRestoreFileSystem::DirectoryExtract(
        CSaveRestoreFileSystem *const this,
        FileHandle_t pFile,
        int fileCount,
        const char *pCurrentMod)
{
  int v6; // r12d
  __int64 v7; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v8; // r14
  int v9; // eax
  int v10; // edx
  CSaveDirectory *m_pSaveDirectory; // rdi
  const char *v12; // rax
  unsigned int v14; // [rsp+10h] [rbp-160h]
  UtlSymId_t m_Id; // [rsp+20h] [rbp-150h] BYREF
  int fileSize; // [rsp+2Ch] [rbp-144h] BYREF
  char fileName[264]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v19; // [rsp+138h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( fileCount <= 0 )
    return 1;
  v6 = 0;
  while ( 1 )
  {
    (*(this->_vptr_ISaveRestoreFileSystem + 2))(this, fileName, 260, pFile);
    (*(this->_vptr_ISaveRestoreFileSystem + 2))(this, &fileSize, 4, pFile);
    if ( fileSize == 0 )
      break;
    v7 = (*this->_vptr_ISaveRestoreFileSystem)(this, fileName, "wb", 0);
    if ( v7 == 0 )
      break;
    v8 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v7];
    CUtlBuffer::EnsureCapacity(v8->m_Data.elem.pCompressedBuffer, fileSize);
    v9 = (*(this->_vptr_ISaveRestoreFileSystem + 2))(
           this,
           &v8->m_Data.elem.pCompressedBuffer->m_Memory.m_pMemory[v8->m_Data.elem.pCompressedBuffer->m_Put
                                                                - v8->m_Data.elem.pCompressedBuffer->m_nOffset],
           fileSize,
           pFile);
    if ( v9 != fileSize )
      break;
    CUtlBuffer::SeekPut(v8->m_Data.elem.pCompressedBuffer, CUtlBuffer::SeekType_t::SEEK_HEAD, v9);
    v10 = fileSize;
    v8->m_Data.elem.nCompressedSize = fileSize;
    if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
    {
      m_pSaveDirectory = this->m_pSaveDirectory;
      v14 = v10;
      ++v6;
      m_Id = v8->m_Data.elem.name.m_Id;
      v12 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &m_Id);
      Msg("SIM: Extracted: %s [Size: %d KB]\n", v12, v14 >> 10);
      if ( v6 == fileCount )
        return 1;
    }
    else if ( ++v6 == fileCount )
    {
      return 1;
    }
  }
  return 0;
}


// CSaveRestoreFileSystem::LoadFileFromDisk  (line 841, @0x0000000002059420, libserver.so)  // inlines: Element, GetBool, GetFile, GetInt, operator[]
// calls: Msg
// strings: "wb", "SIM: Loaded %s into memory\n"
bool __fastcall CSaveRestoreFileSystem::LoadFileFromDisk(CSaveRestoreFileSystem *const this, const char *pFilename)
{
  __int64 v4; // r12
  __int64 v5; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v6; // rbx
  char v7; // r12

  v4 = (*this->_vptr_ISaveRestoreFileSystem)(this, pFilename, "wb", 0);
  if ( v4 == 0 )
    return 0;
  v5 = (*(g_pFullFileSystem->_vptr_IAppSystem + 78))(g_pFullFileSystem, pFilename, "rb", 0, 0);
  if ( v5 == 0 )
    return 0;
  v6 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v4];
  v7 = (*(g_pFullFileSystem->_vptr_IAppSystem + 90))(g_pFullFileSystem, v5, v6->m_Data.elem.pCompressedBuffer, 0, 0);
  if ( v7 == 0 )
    return 0;
  v6->m_Data.elem.nCompressedSize = v6->m_Data.elem.pCompressedBuffer->m_nMaxPut;
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v5);
  if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
    Msg("SIM: Loaded %s into memory\n", pFilename);
  return v7;
}


// CSaveRestoreFileSystem::DirectoryCount  (line 873, @0x000000000207d470, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetFile, GetString, IsIdxValid, IsRelevantFile, IsValidIndex, LeftChild, NextInorder, operator[]
// calls: V_stristr_fast(char const*,char const*), CUtlSymbolTable::String, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// strings: ".hl", ".vrman"
int __fastcall CSaveRestoreFileSystem::DirectoryCount(CSaveRestoreFileSystem *const this, const char *pPath)
{
  CSaveDirectory *m_pSaveDirectory; // rbx
  __int64 v5; // rdx
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rsi
  unsigned __int16 m_Left; // cx
  int v9; // r13d
  __int64 v10; // rax
  int v11; // r12d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v12; // rcx
  const char *v13; // rbx
  CUtlSymbol id; // [rsp+0h] [rbp-40h] BYREF

  if ( V_stristr_fast(pPath, ".hl") != 0 || (v10 = V_stristr_fast(pPath, ".vrman")) != 0 )
  {
    m_pSaveDirectory = this->m_pSaveDirectory;
    v5 = 0xFFFF;
    m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v5 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
    }
    v9 = 0;
    if ( v5 < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
      && m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index >= m_Root )
    {
      v11 = m_Root;
      do
      {
        if ( m_Root == 0xFFFF )
          break;
        v12 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
        if ( m_Root == v12[v5].m_Left )
          break;
        id.m_Id = v12[v11].m_Data.elem.name.m_Id;
        v13 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &id);
        if ( V_stristr_fast(v13, ".hl") != 0 || V_stristr_fast(v13, ".vrman") != 0 )
          ++v9;
        m_pSaveDirectory = this->m_pSaveDirectory;
        m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &m_pSaveDirectory->m_Files.m_Tree,
                   v11);
        v5 = m_Root;
        v11 = m_Root;
        if ( m_Root >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
          break;
      }
      while ( m_Root <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index );
    }
    LODWORD(v10) = v9;
  }
  return v10;
}


// CSaveRestoreFileSystem::DirectoryClear  (line 899, @0x000000000207d600, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetBool, GetFile, GetInt, GetString, IsIdxValid, IsRelevantFile, IsValidIndex, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlSymbolTable::String, V_stristr_fast(char const*,char const*), Msg
// callers: CSaveRestoreFileSystem::DirectoryClear, CSaveRestoreFileSystem::ChangeSaveInMemory
// strings: ".hl", "SIM: Cleared: %s\n", ".vrman"
void __fastcall CSaveRestoreFileSystem::DirectoryClear(
        CSaveRestoreFileSystem *const this,
        const char *pPath,
        const char *pCurrentMod)
{
  CSaveDirectory *m_pSaveDirectory; // r12
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v8; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v9; // r15
  const char *v10; // r12
  CSaveDirectory *v11; // rdi
  void (__fastcall *v12)(CSaveRestoreFileSystem *const, const char *, _QWORD); // r12
  const char *v13; // rax
  CSaveDirectory *v14; // rdi
  const char *v15; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-40h] BYREF

  m_pSaveDirectory = this->m_pSaveDirectory;
  m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
  }
  while ( m_Root < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
  {
    if ( m_Root > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
      break;
    if ( m_Root == 0xFFFF )
      break;
    v8 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    if ( m_Root == v8[m_Root].m_Left )
      break;
    v9 = &v8[m_Root];
    m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &m_pSaveDirectory->m_Files.m_Tree,
               m_Root);
    id.m_Id = v9->m_Data.elem.name.m_Id;
    v10 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &id);
    if ( V_stristr_fast(v10, ".hl") != 0 || V_stristr_fast(v10, ".vrman") != 0 )
    {
      if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
      {
        v14 = this->m_pSaveDirectory;
        id.m_Id = v9->m_Data.elem.name.m_Id;
        v15 = CUtlSymbolTable::String(&v14->m_SymbolTable, &id);
        Msg("SIM: Cleared: %s\n", v15);
      }
      v11 = this->m_pSaveDirectory;
      v12 = *(this->_vptr_ISaveRestoreFileSystem + 10);
      id.m_Id = v9->m_Data.elem.name.m_Id;
      v13 = CUtlSymbolTable::String(&v11->m_SymbolTable, &id);
      v12(this, v13, 0);
    }
    m_pSaveDirectory = this->m_pSaveDirectory;
  }
}


// CSaveRestoreFileSystem::DirectoryClear  (line 899, @0x000000000207d780, libserver.so)  // inlines: IsRelevantFile
// calls: V_stristr_fast(char const*,char const*), CSaveRestoreFileSystem::DirectoryClear
// strings: ".hl", ".vrman"
void __fastcall CSaveRestoreFileSystem::DirectoryClear(
        CSaveRestoreFileSystem *const this,
        const char *pPath,
        const char *pCurrentMod)
{
  const char *v5; // rdx
  const char *v6; // rsi

  if ( V_stristr_fast(pPath, ".hl") != 0 || V_stristr_fast(pPath, ".vrman") != 0 )
    CSaveRestoreFileSystem::DirectoryClear(this, v6, v5);
}


// CSaveRestoreFileSystem::WriteSaveDirectoryToDisk  (line 926, @0x000000000207d7d0, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetFile, GetString, IsIdxValid, IsRelevantFile, IsValidIndex, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlSymbolTable::String, V_stristr_fast(char const*,char const*), V_snprintf, __stack_chk_fail
// callers: CSaveRestoreFileSystem::ChangeSaveInMemory
// strings: ".hl", "SAVE/", ".vrman"
void __fastcall CSaveRestoreFileSystem::WriteSaveDirectoryToDisk(CSaveRestoreFileSystem *const this)
{
  CSaveDirectory *m_pSaveDirectory; // r15
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rsi
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v6; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v7; // r13
  const char *v8; // r15
  UtlSymId_t m_Id; // [rsp+10h] [rbp-150h] BYREF
  char szPath[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  m_pSaveDirectory = this->m_pSaveDirectory;
  m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
  }
  while ( m_Root < m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
  {
    if ( m_Root > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
      break;
    if ( m_Root == 0xFFFF )
      break;
    v6 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    if ( m_Root == v6[m_Root].m_Left )
      break;
    v7 = &v6[m_Root];
    m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &m_pSaveDirectory->m_Files.m_Tree,
               m_Root);
    m_Id = v7->m_Data.elem.name.m_Id;
    v8 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &m_Id);
    if ( V_stristr_fast(v8, ".hl") != 0 || V_stristr_fast(v8, ".vrman") != 0 )
    {
      (*this->_vptr_ISaveRestoreFileSystem)(this, v8, "rb", 0);
      V_snprintf(szPath, 260, "%s%s", "SAVE/", v8);
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(
        &g_pFullFileSystem->IBaseFileSystem,
        szPath,
        "MOD",
        v7->m_Data.elem.pBuffer);
    }
    m_pSaveDirectory = this->m_pSaveDirectory;
  }
}


// CSaveRestoreFileSystem::LoadSaveDirectoryFromDisk  (line 949, @0x00000000020740a0, libserver.so)  // inlines: Element, FileFindHandle_t, GetFile, operator[], ~FileFindHandle_t
// calls: V_snprintf, _Unwind_Resume, __stack_chk_fail
// callers: CSaveRestoreFileSystem::ChangeSaveInMemory
// strings: "DEFAULT_WRITE_PATH", "SAVE/", "wb"
void __fastcall CSaveRestoreFileSystem::LoadSaveDirectoryFromDisk(
        CSaveRestoreFileSystem *const this,
        const char *pPath)
{
  const char *i; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v6; // rbx
  FileFindHandle_t hfind; // [rsp+10h] [rbp-150h] BYREF
  char szPath[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v9; // [rsp+128h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  hfind.m_pFileSystem = 0;
  hfind.m_nFindDataIndex = 0;
  for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pPath, "DEFAULT_WRITE_PATH", &hfind);
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hfind) )
  {
    V_snprintf(szPath, 260, "%s%s", "SAVE/", i);
    v4 = (*this->_vptr_ISaveRestoreFileSystem)(this, i, "wb", 0);
    v5 = v4;
    if ( v4 != 0 )
    {
      v6 = &this->m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory[v4];
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
        &g_pFullFileSystem->IBaseFileSystem,
        szPath,
        "MOD",
        v6->m_Data.elem.pBuffer,
        0,
        0,
        0);
      v6->m_Data.elem.nSize = v6->m_Data.elem.pBuffer->m_nMaxPut;
      (*(this->_vptr_ISaveRestoreFileSystem + 1))(this, v5);
    }
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hfind);
  if ( hfind.m_pFileSystem != 0 )
    (*(hfind.m_pFileSystem->_vptr_IAppSystem + 40))(hfind.m_pFileSystem, &hfind);
}


// CSaveRestoreFileSystem::AuditFiles  (line 981, @0x000000000207d990, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetFile, GetString, IsIdxValid, IsValidIndex, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlSymbolTable::String, Msg
// strings: "SIM: File: %s [c: %.02f KB / u: %.02f KB]\n", "SIM: ------------------------------------------------------------", "SIM: Total files: %d [c: %.02f KB / c: %.02f KB] : Total Size: %.02f KB\n"
void __fastcall CSaveRestoreFileSystem::AuditFiles(CSaveRestoreFileSystem *const this)
{
  __int64 v1; // rax
  CSaveDirectory *m_pSaveDirectory; // r14
  unsigned __int16 m_Root; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rdi
  unsigned __int16 m_Left; // si
  __int64 m_nAllocationCount; // rsi
  int v7; // ebx
  int v8; // r12d
  const CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int,CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // rdi
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v10; // r8
  UtlSymId_t m_Id; // ax
  int nCompressedSize; // r13d
  const char *v13; // rax
  int v14; // r14d
  unsigned int nTotalFiles; // [rsp+20h] [rbp-50h]
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v17; // [rsp+28h] [rbp-48h]
  UtlSymId_t v18; // [rsp+30h] [rbp-40h] BYREF

  v1 = 0xFFFF;
  m_pSaveDirectory = this->m_pSaveDirectory;
  m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    v1 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v1 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
  }
  m_nAllocationCount = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount;
  if ( v1 >= m_nAllocationCount )
  {
    v14 = 0;
    v7 = 0;
    v8 = 0;
    nTotalFiles = 0;
  }
  else if ( m_Root > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
  {
    v14 = 0;
    v7 = 0;
    v8 = 0;
    nTotalFiles = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    m_nAllocationCount = m_Root;
    p_m_Tree = &m_pSaveDirectory->m_Files.m_Tree;
    for ( nTotalFiles = 0; m_Root != 0xFFFF; m_nAllocationCount = m_Root )
    {
      v10 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      if ( v10[v1].m_Left == m_Root )
        break;
      v17 = &v10[m_nAllocationCount];
      m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 p_m_Tree,
                 m_nAllocationCount);
      ++nTotalFiles;
      m_Id = v17->m_Data.elem.name.m_Id;
      nCompressedSize = v17->m_Data.elem.nCompressedSize;
      v7 += v17->m_Data.elem.nSize;
      LODWORD(v17) = v17->m_Data.elem.nSize;
      v18 = m_Id;
      v13 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, &v18);
      v8 += nCompressedSize;
      Msg("SIM: File: %s [c: %.02f KB / u: %.02f KB]\n", v13, (nCompressedSize * 0.0009765625), (v17 * 0.0009765625));
      m_pSaveDirectory = this->m_pSaveDirectory;
      v1 = m_Root;
      m_nAllocationCount = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount;
      p_m_Tree = &m_pSaveDirectory->m_Files.m_Tree;
      if ( m_Root >= m_nAllocationCount )
        break;
      if ( m_Root > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
        break;
    }
    v14 = v8 + v7;
  }
  Msg("SIM: ------------------------------------------------------------", m_nAllocationCount);
  Msg(
    "SIM: Total files: %d [c: %.02f KB / c: %.02f KB] : Total Size: %.02f KB\n",
    nTotalFiles,
    (v8 * 0.0009765625),
    (v7 * 0.0009765625),
    (v14 * 0.0009765625));
}


// CSaveRestoreFileSystemPassthrough::FileExists  (line 1050, @0x000000000208ee30, libserver.so)
bool __fastcall CSaveRestoreFileSystemPassthrough::FileExists(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pFileName,
        const char *pPathID)
{
  return (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(&g_pFullFileSystem->IBaseFileSystem, pFileName, pPathID);
}


// CSaveRestoreFileSystemPassthrough::RemoveFile  (line 1055, @0x000000000208ee50, libserver.so)
void __fastcall CSaveRestoreFileSystemPassthrough::RemoveFile(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pRelativePath,
        const char *pathID)
{
  (*(g_pFullFileSystem->_vptr_IAppSystem + 25))(g_pFullFileSystem, pRelativePath, pathID);
}


// CSaveRestoreFileSystemPassthrough::RenameFile  (line 1060, @0x000000000208ee70, libserver.so)
void __fastcall CSaveRestoreFileSystemPassthrough::RenameFile(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pOldPath,
        const char *pNewPath,
        const char *pathID)
{
  (*(g_pFullFileSystem->_vptr_IAppSystem + 26))(g_pFullFileSystem, pOldPath, pNewPath, pathID);
}


// CSaveRestoreFileSystemPassthrough::AsyncFinishAllWrites  (line 1065, @0x000000000208ee90, libserver.so)
void __fastcall CSaveRestoreFileSystemPassthrough::AsyncFinishAllWrites(CSaveRestoreFileSystemPassthrough *const this)
{
  (*(g_pFullFileSystem->_vptr_IAppSystem + 52))(g_pFullFileSystem);
}


// CSaveRestoreFileSystemPassthrough::Open  (line 1070, @0x000000000208eeb0, libserver.so)
FileHandle_t __fastcall CSaveRestoreFileSystemPassthrough::Open(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pFullName,
        const char *pOptions,
        const char *pathID)
{
  return (*(g_pFullFileSystem->_vptr_IAppSystem + 78))(g_pFullFileSystem, pFullName, pOptions, 4, pathID);
}


// CSaveRestoreFileSystemPassthrough::Close  (line 1075, @0x000000000208eee0, libserver.so)
void __fastcall CSaveRestoreFileSystemPassthrough::Close(
        CSaveRestoreFileSystemPassthrough *const this,
        FileHandle_t hSaveFile)
{
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, hSaveFile);
}


// CSaveRestoreFileSystemPassthrough::Read  (line 1080, @0x000000000208ef00, libserver.so)
int __fastcall CSaveRestoreFileSystemPassthrough::Read(
        CSaveRestoreFileSystemPassthrough *const this,
        void *pOutput,
        int size,
        FileHandle_t hFile)
{
  return (*g_pFullFileSystem->_vptr_IBaseFileSystem)(&g_pFullFileSystem->IBaseFileSystem, pOutput, size, hFile);
}


// CSaveRestoreFileSystemPassthrough::Write  (line 1085, @0x000000000208ef20, libserver.so)
int __fastcall CSaveRestoreFileSystemPassthrough::Write(
        CSaveRestoreFileSystemPassthrough *const this,
        const void *pInput,
        int size,
        FileHandle_t hFile)
{
  return (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(&g_pFullFileSystem->IBaseFileSystem, pInput, size, hFile);
}


// CSaveRestoreFileSystemPassthrough::AsyncWrite  (line 1090, @0x000000000208fa20, libserver.so)  // inlines: GetBool, GetInt
// calls: Msg
// strings: "AsyncWrite (%s/%d)...\n"
// local variable allocation has failed, the output may be wrong!
FSAsyncStatus_t __fastcall CSaveRestoreFileSystemPassthrough::AsyncWrite(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pFileName,
        const void *pSrc,
        int nSrcBytes,
        bool bFreeMemory,
        bool bAppend,
        FSAsyncControl_t *pControl)
{
  bool v10; // [rsp+4h] [rbp-2Ch]
  bool v11; // [rsp+8h] [rbp-28h]
  unsigned int nSrcBytesa; // [rsp+Ch] [rbp-24h]

  if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
  {
    v10 = bAppend;
    v11 = bFreeMemory;
    nSrcBytesa = nSrcBytes;
    Msg("AsyncWrite (%s/%d)...\n", pFileName, nSrcBytes);
    bAppend = v10;
    bFreeMemory = v11;
    *&nSrcBytes = nSrcBytesa;
  }
  return (*(g_pFullFileSystem->_vptr_IAppSystem + 84))(
           g_pFullFileSystem,
           pFileName,
           pSrc,
           *&nSrcBytes,
           bFreeMemory,
           bAppend,
           pControl);
}


// CSaveRestoreFileSystemPassthrough::Seek  (line 1096, @0x000000000208ef40, libserver.so)
void __fastcall CSaveRestoreFileSystemPassthrough::Seek(
        CSaveRestoreFileSystemPassthrough *const this,
        FileHandle_t hFile,
        int pos,
        FileSystemSeek_t method)
{
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 4))(&g_pFullFileSystem->IBaseFileSystem, hFile, pos, method);
}


// CSaveRestoreFileSystemPassthrough::Tell  (line 1101, @0x000000000208ef60, libserver.so)
unsigned int __fastcall CSaveRestoreFileSystemPassthrough::Tell(
        CSaveRestoreFileSystemPassthrough *const this,
        FileHandle_t hFile)
{
  return (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 5))(&g_pFullFileSystem->IBaseFileSystem, hFile);
}


// CSaveRestoreFileSystemPassthrough::Size  (line 1106, @0x000000000208ef80, libserver.so)
unsigned int __fastcall CSaveRestoreFileSystemPassthrough::Size(
        CSaveRestoreFileSystemPassthrough *const this,
        FileHandle_t hFile)
{
  return (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 6))(&g_pFullFileSystem->IBaseFileSystem, hFile);
}


// CSaveRestoreFileSystemPassthrough::Size  (line 1111, @0x000000000208efa0, libserver.so)
unsigned int __fastcall CSaveRestoreFileSystemPassthrough::Size(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pFileName,
        const char *pPathID)
{
  return (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, pFileName, pPathID);
}


// CSaveRestoreFileSystemPassthrough::AsyncFinish  (line 1116, @0x000000000208efc0, libserver.so)
FSAsyncStatus_t __fastcall CSaveRestoreFileSystemPassthrough::AsyncFinish(
        CSaveRestoreFileSystemPassthrough *const this,
        FSAsyncControl_t hControl,
        bool wait)
{
  return (*(g_pFullFileSystem->_vptr_IAppSystem + 58))(g_pFullFileSystem, hControl, wait);
}


// CSaveRestoreFileSystemPassthrough::AsyncRelease  (line 1121, @0x000000000208efe0, libserver.so)
void __fastcall CSaveRestoreFileSystemPassthrough::AsyncRelease(
        CSaveRestoreFileSystemPassthrough *const this,
        FSAsyncControl_t hControl)
{
  (*(g_pFullFileSystem->_vptr_IAppSystem + 64))(g_pFullFileSystem, hControl);
}


// CSaveRestoreFileSystemPassthrough::AsyncAppend  (line 1126, @0x000000000208f000, libserver.so)
FSAsyncStatus_t __fastcall CSaveRestoreFileSystemPassthrough::AsyncAppend(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pFileName,
        const void *pSrc,
        int nSrcBytes,
        bool bFreeMemory,
        FSAsyncControl_t *pControl)
{
  return (*(g_pFullFileSystem->_vptr_IAppSystem + 49))(
           g_pFullFileSystem,
           pFileName,
           pSrc,
           nSrcBytes,
           bFreeMemory,
           pControl);
}


// CSaveRestoreFileSystemPassthrough::AsyncAppendFile  (line 1131, @0x000000000208f020, libserver.so)
FSAsyncStatus_t __fastcall CSaveRestoreFileSystemPassthrough::AsyncAppendFile(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pDestFileName,
        const char *pSrcFileName,
        FSAsyncControl_t *pControl)
{
  return (*(g_pFullFileSystem->_vptr_IAppSystem + 50))(g_pFullFileSystem, pDestFileName, pSrcFileName, pControl);
}


// CSaveRestoreFileSystemPassthrough::DirectoryCopy  (line 1139, @0x0000000002097370, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, FileFindHandle_t, GetBool, GetInt, GrowMemory, Purge, RemoveAll, V_strncpy<long unsigned int>, memcpy, memset, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~FileFindHandle_t
// calls: _V_strncpy, CUtlMemory<filelistelem_t, int>::Grow, V_snprintf, V_FixSlashes, Msg, operator new [], memcpy, operator new, CUtlMemory<filelistelem_t, int>::Purge, __stack_chk_fail, _Unwind_Resume
// strings: "DEFAULT_WRITE_PATH", "SAVE/", "DirectoryCopy: AsyncAppend %s, %s\n", "DirectoryCopy....\n", "DirectoryCopy: AsyncFinishAllWrites\n"
void __fastcall CSaveRestoreFileSystemPassthrough::DirectoryCopy(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pPath,
        const char *pDestFileName,
        const char *pCurrentMod)
{
  __int64 i; // r13
  filelistelem_t *v6; // rdi
  filelistelem_t *v7; // rdx
  __int64 m_Size; // r12
  int v9; // eax
  __int64 v10; // r13
  int v11; // r14d
  int v12; // r15d
  void *v13; // rax
  void *v14; // rdx
  _DWORD *v15; // rax
  double v16; // xmm0_8
  filelistelem_t *src; // [rsp+8h] [rbp-188h]
  CUtlMemory<filelistelem_t,int> *v18; // [rsp+10h] [rbp-180h]
  CUtlMemory<filelistelem_t,int> *v19; // [rsp+10h] [rbp-180h]
  FileFindHandle_t hfind; // [rsp+20h] [rbp-170h] BYREF
  CUtlVector<filelistelem_t,CUtlMemory<filelistelem_t,int> > list; // [rsp+30h] [rbp-160h] BYREF
  char szName[264]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v24; // [rsp+158h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
  {
    *&v16 = Msg("DirectoryCopy....\n", pPath, pDestFileName, pCurrentMod).m128_u64[0];
    list.m_Size = 0;
    list.m_Memory.m_pMemory = 0;
    list.m_Memory.m_nAllocationCount = 0;
    list.m_Memory.m_nGrowSize = 0;
    if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
      Msg("DirectoryCopy: AsyncFinishAllWrites\n", v16);
  }
  else
  {
    list.m_Size = 0;
    list.m_Memory.m_pMemory = 0;
    list.m_Memory.m_nAllocationCount = 0;
    list.m_Memory.m_nGrowSize = 0;
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 52))(g_pFullFileSystem, pPath, pDestFileName, pCurrentMod);
  hfind.m_pFileSystem = 0;
  hfind.m_nFindDataIndex = 0;
  for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pPath, "DEFAULT_WRITE_PATH");
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hfind) )
  {
    m_Size = list.m_Size;
    v9 = list.m_Size;
    if ( list.m_Size == list.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<filelistelem_t,int>::Grow(&list.m_Memory, 1);
      v9 = list.m_Size;
    }
    list.m_Size = v9 + 1;
    v6 = &list.m_Memory.m_pMemory[m_Size];
    memset(v6, 0, 0x100u);
    v7 = &list.m_Memory.m_pMemory[m_Size];
    *&v6->szFileName[256] = 0;
    _V_strncpy(v7, i, 260);
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hfind);
  if ( list.m_Size > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      V_snprintf(szName, 260, "%s%s", "SAVE/", list.m_Memory.m_pMemory[v10].szFileName);
      V_FixSlashes(szName, 47);
      v12 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, szName, 0);
      if ( v12 != 0 )
      {
        if ( save_spew.m_pParent->m_Value.m_nValue != 0 )
          Msg("DirectoryCopy: AsyncAppend %s, %s\n", szName, pDestFileName);
        v18 = *(g_pFullFileSystem->_vptr_IAppSystem + 49);
        src = &list.m_Memory.m_pMemory[v10];
        v13 = operator new[](0x104u);
        v14 = memcpy(v13, src, 0x104u);
        (v18)(g_pFullFileSystem, pDestFileName, v14, 260, 1, 0);
        v19 = *(g_pFullFileSystem->_vptr_IAppSystem + 49);
        v15 = operator new(4u);
        *v15 = v12;
        (v19)(g_pFullFileSystem, pDestFileName, v15, 4, 1, 0);
        (*(g_pFullFileSystem->_vptr_IAppSystem + 50))(g_pFullFileSystem, pDestFileName, szName, 0);
      }
      ++v11;
      ++v10;
    }
    while ( list.m_Size > v11 );
  }
  if ( hfind.m_pFileSystem != 0 )
    (*(hfind.m_pFileSystem->_vptr_IAppSystem + 40))(hfind.m_pFileSystem, &hfind);
  hfind.m_pFileSystem = 0;
  hfind.m_nFindDataIndex = 0;
  list.m_Size = 0;
  if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<filelistelem_t,int>::Purge(&list.m_Memory);
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<filelistelem_t,int>::Purge(&list.m_Memory);
  }
}


// CSaveRestoreFileSystemPassthrough::DirectoryExtract  (line 1186, @0x0000000002090240, libserver.so)  // inlines: FileCopy
// calls: V_snprintf, V_FixSlashes, Warning, __stack_chk_fail
// strings: "SAVE/", "wb", "Unexpected end of file expanding save game\n"
// globals: g_pSaveRestoreFileSystem
bool __fastcall CSaveRestoreFileSystemPassthrough::DirectoryExtract(
        CSaveRestoreFileSystemPassthrough *const this,
        FileHandle_t pFile,
        int fileCount,
        const char *pCurrentMod)
{
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // r13
  int v8; // r12d
  int v9; // eax
  int i; // [rsp+Ch] [rbp-274h]
  int fileSize; // [rsp+2Ch] [rbp-254h] BYREF
  char szName[260]; // [rsp+30h] [rbp-250h] BYREF
  char fileName[264]; // [rsp+140h] [rbp-140h] BYREF
  unsigned __int64 v16; // [rsp+248h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( fileCount <= 0 )
    return 1;
  i = 0;
  while ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(
            g_pSaveRestoreFileSystem,
            fileName,
            260,
            pFile) == 260 )
  {
    if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &fileSize, 4, pFile) != 4 )
      break;
    if ( fileSize == 0 )
      break;
    V_snprintf(szName, 260, "%s%s", "SAVE/", fileName);
    V_FixSlashes(szName, 47);
    v5 = (*g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem)(g_pSaveRestoreFileSystem, szName, "wb", "MOD");
    if ( v5 == 0 )
      break;
    v6 = fileSize;
    v7 = (**g_pMemAlloc)(g_pMemAlloc, 0x100000);
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        v8 = 0x100000;
        if ( v6 <= 0x100000 )
          v8 = v6;
        v9 = (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, v7, v8, pFile);
        if ( v8 > v9 )
          break;
        v6 -= v8;
        (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 3))(g_pSaveRestoreFileSystem, v7, v9, v5);
        if ( v6 <= 0 )
          goto LABEL_15;
      }
      Warning("Unexpected end of file expanding save game\n");
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
      (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, v5);
      return 0;
    }
LABEL_15:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
    (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, v5);
    if ( ++i == fileCount )
      return 1;
  }
  return 0;
}


// CSaveRestoreFileSystemPassthrough::DirectoryCount  (line 1220, @0x000000000208f040, libserver.so)  // inlines: FileFindHandle_t, ~FileFindHandle_t
// calls: _Unwind_Resume
// strings: "DEFAULT_WRITE_PATH"
int __fastcall CSaveRestoreFileSystemPassthrough::DirectoryCount(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pPath)
{
  __int64 v2; // rax
  int v3; // ebx
  FileFindHandle_t hfind; // [rsp+0h] [rbp-30h] BYREF

  hfind.m_pFileSystem = 0;
  hfind.m_nFindDataIndex = 0;
  v2 = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pPath, "DEFAULT_WRITE_PATH", &hfind);
  v3 = 0;
  while ( v2 != 0 )
  {
    ++v3;
    v2 = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hfind);
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hfind);
  if ( hfind.m_pFileSystem != 0 )
    (*(hfind.m_pFileSystem->_vptr_IAppSystem + 40))(hfind.m_pFileSystem, &hfind);
  return v3;
}


// CSaveRestoreFileSystemPassthrough::DirectoryClear  (line 1239, @0x000000000208f8b0, libserver.so)  // inlines: FileFindHandle_t, ~FileFindHandle_t
// calls: V_snprintf, _Unwind_Resume, __stack_chk_fail
// callers: CSaveRestoreFileSystem::ChangeSaveInMemory
// strings: "DEFAULT_WRITE_PATH", "SAVE/"
void __fastcall CSaveRestoreFileSystemPassthrough::DirectoryClear(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pPath,
        const char *pCurrentMod)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *i; // r8
  FileFindHandle_t hfind; // [rsp+0h] [rbp-140h] BYREF
  char szPath[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v8; // [rsp+118h] [rbp-28h]

  hfind.m_pFileSystem = 0;
  v8 = __readfsqword(0x28u);
  hfind.m_nFindDataIndex = 0;
  for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, pPath, "DEFAULT_WRITE_PATH", &hfind);
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hfind) )
  {
    V_snprintf(szPath, 260, "%s%s", "SAVE/", i);
    (*(g_pFullFileSystem->_vptr_IAppSystem + 25))(g_pFullFileSystem, szPath, "MOD");
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hfind, v3, v4, i);
  if ( hfind.m_pFileSystem != 0 )
    (*(hfind.m_pFileSystem->_vptr_IAppSystem + 40))(hfind.m_pFileSystem, &hfind);
}


// CSaveRestoreFileSystemPassthrough::AuditFiles  (line 1259, @0x000000000208f9e0, libserver.so)
// calls: Msg
// strings: "Not using save-in-memory path!\n"
void __fastcall CSaveRestoreFileSystemPassthrough::AuditFiles(CSaveRestoreFileSystemPassthrough *const this)
{
  Msg("Not using save-in-memory path!\n");
}


// CSaveRestoreFileSystemPassthrough::LoadFileFromDisk  (line 1264, @0x000000000208fa00, libserver.so)
// calls: Msg
// strings: "Not using save-in-memory path!\n"
bool __fastcall CSaveRestoreFileSystemPassthrough::LoadFileFromDisk(
        CSaveRestoreFileSystemPassthrough *const this,
        const char *pFilename)
{
  Msg("Not using save-in-memory path!\n", pFilename);
  return 1;
}


// CSaveRestoreFileSystemPassthrough::ChangeSaveInMemory  (line 1285, @0x0000000002083310, libserver.so)
// calls: CSaveRestoreFileSystem::ChangeSaveInMemory
// globals: s_SaveRestoreFileSystem
void __fastcall CSaveRestoreFileSystemPassthrough::ChangeSaveInMemory(
        CSaveRestoreFileSystemPassthrough *const this,
        bool bState,
        const char *pCurrentMod)
{
  CSaveRestoreFileSystem::ChangeSaveInMemory(&s_SaveRestoreFileSystem, bState, pCurrentMod);
}


// CSaveRestoreFileSystem::ChangeSaveInMemory  (line 1293, @0x0000000002082e30, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Destruct<CUtlString>, DirectoryClear, Element, FileFindHandle_t, GrowMemory, IsRelevantFile, Purge, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~FileFindHandle_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlString::operator=, CUtlString::operator+=, V_stristr_fast(char const*,char const*), CSaveRestoreFileSystem::DirectoryClear, CSaveRestoreFileSystem::LoadSaveDirectoryFromDisk, V_snprintf, CSaveRestoreFileSystemPassthrough::DirectoryClear (17 total)
// callers: CSaveRestoreFileSystemPassthrough::ChangeSaveInMemory
// strings: "SaveInMemoryCallback:  UNTESTED CODE PATH IN SOURCE2!!!\n", "SAVE/", ".hl", "DEFAULT_WRITE_PATH", ".vrman"
// globals: s_SaveRestoreFileSystem, g_pSaveRestoreFileSystem, s_SaveRestoreFileSystemPassthrough
void __fastcall CSaveRestoreFileSystem::ChangeSaveInMemory(
        CSaveRestoreFileSystem *const this,
        bool bState,
        const char *pCurrentMod)
{
  __int64 m_Size; // rbx
  int v4; // eax
  CUtlString *v5; // rbx
  const char *v6; // rax
  int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // rbx
  const char *v10; // rbx
  const char *v11; // rdx
  const char *v12; // rsi
  const char *v13; // rax
  const char *v14; // rax
  const char *i; // rax
  __int64 j; // r12
  const char *v17; // rax
  const char *v18; // rbx
  const char *v19; // rdx
  const char *v20; // rsi
  CUtlString pathWithId; // [rsp+10h] [rbp-180h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-170h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > paths; // [rsp+30h] [rbp-160h] BYREF
  _BYTE v26[264]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v27; // [rsp+158h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
    LoggingSystem_Log(LOG_SAVERESTORE, 2, "SaveInMemoryCallback:  UNTESTED CODE PATH IN SOURCE2!!!\n");
  paths.m_Size = 0;
  paths.m_Memory.m_pMemory = 0;
  paths.m_Memory.m_nAllocationCount = 0;
  paths.m_Memory.m_nGrowSize = 0;
  pathWithId.m_pString = 0;
  CUtlString::Set(&pathWithId, "*.hl?");
  m_Size = paths.m_Size;
  v4 = paths.m_Size;
  if ( paths.m_Size == paths.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlString,int>::Grow(&paths.m_Memory, 1);
    v4 = paths.m_Size;
  }
  paths.m_Size = v4 + 1;
  v5 = &paths.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    v5->m_pString = 0;
    v6 = CUtlString::Get(&pathWithId);
    CUtlString::Set(v5, v6);
  }
  if ( pathWithId.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&pathWithId);
  v7 = paths.m_Size;
  if ( paths.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      pathWithId.m_pString = 0;
      CUtlString::operator=(&pathWithId, "SAVE/");
      v9 = v8;
      CUtlString::operator+=(&pathWithId, &paths.m_Memory.m_pMemory[v8]);
      if ( bState )
      {
        g_pSaveRestoreFileSystem = &s_SaveRestoreFileSystem;
        v10 = CUtlString::Get(&paths.m_Memory.m_pMemory[v9]);
        if ( V_stristr_fast(v10, ".hl") != 0 || V_stristr_fast(v10, ".vrman") != 0 )
          CSaveRestoreFileSystem::DirectoryClear(&s_SaveRestoreFileSystem, v12, v11);
        v13 = CUtlString::Get(&pathWithId);
        CSaveRestoreFileSystem::LoadSaveDirectoryFromDisk(&s_SaveRestoreFileSystem, v13);
        v14 = CUtlString::Get(&pathWithId);
        v24[0] = 0;
        v24[1] = 0;
        for ( i = (*(g_pFullFileSystem->_vptr_IAppSystem + 41))(g_pFullFileSystem, v14, "DEFAULT_WRITE_PATH", v24);
              i != 0;
              i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, v24) )
        {
          V_snprintf(v26, 260, "%s%s", "SAVE/", i);
          (*(g_pFullFileSystem->_vptr_IAppSystem + 25))(g_pFullFileSystem, v26, "MOD");
        }
        (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, v24);
        if ( v24[0] != 0 )
          (*(*v24[0] + 320LL))(v24[0], v24);
      }
      else
      {
        g_pSaveRestoreFileSystem = &s_SaveRestoreFileSystemPassthrough;
        v17 = CUtlString::Get(&pathWithId);
        CSaveRestoreFileSystemPassthrough::DirectoryClear(&s_SaveRestoreFileSystemPassthrough, v17, pCurrentMod);
        CSaveRestoreFileSystem::WriteSaveDirectoryToDisk(&s_SaveRestoreFileSystem);
        v18 = CUtlString::Get(&paths.m_Memory.m_pMemory[v9]);
        if ( V_stristr_fast(v18, ".hl") != 0 || V_stristr_fast(v18, ".vrman") != 0 )
          CSaveRestoreFileSystem::DirectoryClear(&s_SaveRestoreFileSystem, v20, v19);
      }
      if ( pathWithId.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&pathWithId);
      v7 = paths.m_Size;
      ++v8;
    }
    while ( paths.m_Size > v8 );
  }
  for ( j = 8LL * v7 - 8; --v7 >= 0; j -= 8 )
  {
    if ( *(&paths.m_Memory.m_pMemory->m_pString + j) != 0 )
      CUtlString::FreeMemoryBlock((paths.m_Memory.m_pMemory + j));
  }
  paths.m_Size = 0;
  if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&paths.m_Memory);
    if ( (paths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&paths.m_Memory);
  }
}


// CSaveRestoreFileSystem::DumpSaveDirectory  (line 1335, @0x000000000207dbe0, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, GetFile, GetString, IsIdxValid, IsValidIndex, LeftChild, NextInorder, operator[]
// calls: CUtlSymbolTable::String, Msg, CUtlRBTree<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: DumpSaveRestoreDirctory
// strings: "File %d: %s Size:%d\n", "Total Size: %.2f Mb (%d bytes)\n", "Compression: %.2f Mb to %.2f Mb (%.0f%%)\n"
void __fastcall CSaveRestoreFileSystem::DumpSaveDirectory(CSaveRestoreFileSystem *const this)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  CSaveDirectory *m_pSaveDirectory; // r15
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *m_pMemory; // rdi
  unsigned __int16 m_Left; // si
  int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v10; // r8
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t>::Node_t,short unsigned int> *v11; // r14
  const char *v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  double v15; // xmm1_8
  float percenta; // [rsp+10h] [rbp-50h]
  unsigned int nCompressedSize; // [rsp+18h] [rbp-48h]
  double v19; // [rsp+18h] [rbp-48h]
  _WORD v20[32]; // [rsp+20h] [rbp-40h] BYREF

  v2 = 0xFFFF;
  m_pSaveDirectory = this->m_pSaveDirectory;
  m_Root = m_pSaveDirectory->m_Files.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
    v2 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
  }
  if ( v2 >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount
    || m_Root > m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index )
  {
    v9 = 0;
    v8 = 0;
    v15 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v1 = v20;
    v7 = m_Root;
    v8 = 0;
    v9 = 0;
    do
    {
      if ( m_Root == 0xFFFF )
        break;
      v10 = m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_pMemory;
      if ( v10[v2].m_Left == m_Root )
        break;
      v11 = &v10[v7];
      nCompressedSize = v11->m_Data.elem.nCompressedSize;
      v20[0] = v11->m_Data.elem.name.m_Id;
      v12 = CUtlSymbolTable::String(&m_pSaveDirectory->m_SymbolTable, v20);
      Msg("File %d: %s Size:%d\n", v7, v12, nCompressedSize);
      v8 += v11->m_Data.elem.nSize;
      v9 += v11->m_Data.elem.nCompressedSize;
      m_pSaveDirectory = this->m_pSaveDirectory;
      m_Root = CUtlRBTree<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,CSaveDirectory::file_t,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &m_pSaveDirectory->m_Files.m_Tree,
                 v7);
      v2 = m_Root;
      v7 = m_Root;
      if ( m_Root >= m_pSaveDirectory->m_Files.m_Tree.m_Elements.m_nAllocationCount )
        break;
    }
    while ( m_Root <= m_pSaveDirectory->m_Files.m_Tree.m_LastAlloc.index );
    if ( v8 != 0 )
    {
      v1 = v9 % v8;
      v13 = v9 * 0.00000095367432;
      v14 = 100.0 - ((v9 / v8) * 100.0);
    }
    else
    {
      v14 = 0.0;
      v13 = v9 * 0.00000095367432;
    }
    v15 = v13;
  }
  percenta = v14;
  v19 = v15;
  Msg("Total Size: %.2f Mb (%d bytes)\n", v9, v1, v15);
  Msg("Compression: %.2f Mb to %.2f Mb (%.0f%%)\n", (v8 * 0.00000095367432), v19, percenta);
}


// DumpSaveRestoreDirctory  (line 1354, @0x000000000207de10, libserver.so)
// calls: CSaveRestoreFileSystem::DumpSaveDirectory
// callers: dumpsavedir
// globals: s_SaveRestoreFileSystem
void __cdecl DumpSaveRestoreDirctory()
{
  CSaveRestoreFileSystem::DumpSaveDirectory(&s_SaveRestoreFileSystem);
}


