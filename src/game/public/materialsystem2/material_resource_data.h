// Reconstructed from DWARF by pahole; not original source.

// src/game/public/materialsystem2/material_resource_data.h:15
struct MaterialParam_t {
private:

	MaterialParam_t();

	// sizeof = 4
};

// src/game/public/materialsystem2/material_resource_data.h:22
struct MaterialParamInt_t : public MaterialParam_t {
public:

private:

	int32 m_nValue;  // +0x4
	MaterialParamInt_t();

	// sizeof = 8
};

// src/game/public/materialsystem2/material_resource_data.h:29
struct MaterialParamFloat_t : public MaterialParam_t {
public:

private:

	float32 m_flValue;  // +0x4
	MaterialParamFloat_t();

	// sizeof = 8
};

// src/game/public/materialsystem2/material_resource_data.h:36
struct MaterialParamVector_t : public MaterialParam_t {
public:

private:

	MaterialParamVector_t();

	// sizeof = 20
};

// src/game/public/materialsystem2/material_resource_data.h:43
struct MaterialParamTexture_t : public MaterialParam_t {
public:

private:

	MaterialParamTexture_t();

	// sizeof = 16
};

// src/game/public/materialsystem2/material_resource_data.h:50
struct MaterialParamString_t : public MaterialParam_t {
public:

private:

	MaterialParamString_t();

	// sizeof = 8
};

// src/game/public/materialsystem2/material_resource_data.h:57
struct MaterialParamBuffer_t : public MaterialParam_t {
public:

private:

	MaterialParamBuffer_t();

	// sizeof = 12
};

// src/game/public/materialsystem2/material_resource_data.h:66
struct MaterialResourceData_t {
private:

	MaterialResourceData_t();

	// sizeof = 104
};
