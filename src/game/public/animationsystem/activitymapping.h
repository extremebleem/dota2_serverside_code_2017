// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/activitymapping.h:39
class CActivityToSequenceMapping {
	struct SequenceTuple {
		int m_nWeight;  // +0x4
		SequenceTuple();

		// sizeof = 8
	};

	struct HashValueType {
		class HashFuncs {
			HashFuncs(int);
			bool operator()(const HashValueType &, const HashValueType &);
			unsigned int operator()(const HashValueType &);

			// sizeof = 1
		};
		/* tag__fprintf: const_type tag not supported! */;

		int activityIdx;  // +0x0
		int startingIdx;  // +0x4
		int count;  // +0x8
		int totalWeight;  // +0xc
		HashValueType(int, int, int, int);
		HashValueType();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_iSequenceTuplesCount;  // +0x8

	typedef CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequenceMapping::HashValueType::HashFuncs> ActivityToValueIdxHash;

	ActivityToValueIdxHash m_ActToSeqHash;  // +0x10
	const CModel * m_pModel;  // +0x30
	CActivityToSequenceMapping(const CModel *);
	~CActivityToSequenceMapping();
	const SequenceTuple * GetSequences(Activity, int *, int *);
	/* tag__fprintf: const_type tag not supported! */;
	int NumSequencesForActivity(Activity);
	void Initialize();
	void Reinitialize();
	HSequence SelectWeightedSequence(Activity, HSequence);
	HSequence SelectWeightedSequenceFromModifiers(Activity, CUtlSymbolTable *, const CUtlSymbol *, int);
	int GetSequenceVariantForActivity(HSequence, Activity);
	HSequence GetSequenceByVariantForActivity(int, Activity);

	// sizeof = 56
};
