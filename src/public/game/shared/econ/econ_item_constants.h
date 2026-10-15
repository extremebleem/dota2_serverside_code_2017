// Reconstructed from DWARF by pahole; not original source.

// src/public/game/shared/econ/econ_item_constants.h:185
class style_index_t {
private:

	uint8 m_Data;  // +0x0
	style_index_t(uint8);
	uint8 GetRaw();
	void SetRaw(uint8);
	uint8 * GetRawPtrForWrite();
	bool operator==(const style_index_t &);
	bool operator!=(const style_index_t &);
	bool operator<(const style_index_t &);
	bool operator<=(const style_index_t &);
	bool operator>(const style_index_t &);
	bool operator>=(const style_index_t &);
	style_index_t & operator++();
	style_index_t operator++(int);
	style_index_t & operator--();
	style_index_t operator--(int);
	style_index_t & operator=(uint8);

	// sizeof = 1
};

// src/public/game/shared/econ/econ_item_constants.h:209
class item_definition_index_t {
private:

	uint16 m_Data;  // +0x0
	item_definition_index_t();
	item_definition_index_t(uint16);
	uint16 GetRaw();
	void SetRaw(uint16);
	uint16 * GetRawPtrForWrite();
	bool operator==(const item_definition_index_t &);
	bool operator!=(const item_definition_index_t &);
	bool operator<(const item_definition_index_t &);
	bool operator<=(const item_definition_index_t &);
	bool operator>(const item_definition_index_t &);
	bool operator>=(const item_definition_index_t &);
	item_definition_index_t & operator++();
	item_definition_index_t operator++(int);
	item_definition_index_t & operator--();
	item_definition_index_t operator--(int);
	item_definition_index_t & operator=(uint16);

	// sizeof = 2
};

// src/public/game/shared/econ/econ_item_constants.h:235
class itemid_t {
private:

	uint64 m_Data;  // +0x0
	itemid_t(uint64);
	uint64 GetRaw();
	void SetRaw(uint64);
	uint64 * GetRawPtrForWrite();
	bool operator==(const itemid_t &);
	bool operator!=(const itemid_t &);
	bool operator<(const itemid_t &);
	bool operator<=(const itemid_t &);
	bool operator>(const itemid_t &);
	bool operator>=(const itemid_t &);
	itemid_t & operator++();
	itemid_t operator++(int);
	itemid_t & operator--();
	itemid_t operator--(int);
	itemid_t & operator=(uint64);

	// sizeof = 8
};

// src/public/game/shared/econ/econ_item_constants.h:264
struct EconItemIDs_t {
	EconItemIDs_t();
	EconItemIDs_t(itemid_t, item_definition_index_t);
	bool operator==(const EconItemIDs_t &);
	bool operator!=(const EconItemIDs_t &);

	// sizeof = 16
};
