// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/rangeiterator.h:15
class IntegerRangeIterator_t {
	struct IntegerValue_t {
		int m_nValue;  // +0x0
		IntegerValue_t(int);
		void operator++();
		int operator*();
		int operator!=(const IntegerValue_t &);

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int m_nLimit;  // +0x0
	IntegerRangeIterator_t(int);
	IntegerValue_t begin();
	IntegerValue_t end();

	// sizeof = 4
};
