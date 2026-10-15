// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/inetworkclientservice.h:74
class IEntityReport {
	int ()() * * _vptr.IEntityReport;  // +0x0
	IEntityReport();
	virtual ~IEntityReport();
	virtual void Record(const char *, CEntityIndex, int, int);
	virtual void Add(const char *, CEntityIndex);
	virtual void LeavePVS(const char *, CEntityIndex);
	virtual void DeleteEntity(const char *, CEntityIndex);
	virtual void NetworkPacketFinished();

	// vtable[2] Record
	// vtable[3] Add
	// vtable[4] LeavePVS
	// vtable[5] DeleteEntity
	// vtable[6] NetworkPacketFinished
	// sizeof = 8
};
