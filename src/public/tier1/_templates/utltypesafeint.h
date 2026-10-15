// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utltypesafeint.h:18
class CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> {
private:

	signed char m_nVal;  // +0x0
	CUtlTypesafeInt();
	CUtlTypesafeInt(signed char);
	void Set(signed char);
	signed char Get();
	void FromInt(signed char);
	signed char ToInt();
	signed char * ToPtr();
	const signed char * ToPtr();
	bool operator<(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	bool operator<=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	bool operator>(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	bool operator>=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> & operator++();
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> & operator--();
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> operator++(int);
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> operator--(int);
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> operator+(signed char);
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> operator-(signed char);
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> operator+(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> operator-(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	bool operator==(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);
	bool operator!=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, signed char> &);

	// sizeof = 1
};
