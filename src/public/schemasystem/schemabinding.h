// Reconstructed from DWARF by pahole; not original source.

// src/public/schemasystem/schemabinding.h:181
class ISchemaInspectionManipulator {
	int ()() * * _vptr.ISchemaInspectionManipulator;  // +0x0
	ISchemaInspectionManipulator(ISchemaInspectionManipulator &);
	ISchemaInspectionManipulator(const ISchemaInspectionManipulator &);
	ISchemaInspectionManipulator();
	SchemaManipulatorInterfaceType_t InterfaceType();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};
