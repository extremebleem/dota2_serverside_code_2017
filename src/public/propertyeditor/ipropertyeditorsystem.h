// Reconstructed from DWARF by pahole; not original source.

// src/public/propertyeditor/ipropertyeditorsystem.h:151
struct PropEdSpecificAttr_t {
	PropEdTypeId_t m_pElementType;  // +0x0
	PropEdElementId_t m_pElement;  // +0x8
	PropEdAttributeId_t m_pAttr;  // +0x10

	// sizeof = 24
};

// src/public/propertyeditor/ipropertyeditorsystem.h:158
struct PropEdSpecificElement_t {
	PropEdTypeId_t m_pElementType;  // +0x0
	PropEdElementId_t m_pElement;  // +0x8
	bool operator==(const PropEdSpecificElement_t &);

	// sizeof = 16
};

// src/public/propertyeditor/ipropertyeditorsystem.h:170
union PropEdMultiValue_t {
	float32 m_flFloat;  // +0x0
	int32 m_nInt;  // +0x0
};

// src/public/propertyeditor/ipropertyeditorsystem.h:188
struct PropEdCustomCommand_t {
	int32 m_CommandFlags;  // +0x20
	PropEdCustomCommand_t();
	bool operator==(const PropEdCustomCommand_t &);

	// sizeof = 40
};

// src/public/propertyeditor/ipropertyeditorsystem.h:212
struct PropEdAttributeInfo_t {
	bool m_bBiasedRange;  // +0x48
	bool m_bIsImportant;  // +0x49

	int m_nDecimalPlaces;  // +0x4c
	int m_nSortPriority;  // +0x50

	bool m_bHiddenByDefault;  // +0x78
	bool m_bDiffersFromDefaultValue;  // +0x79
	bool m_bAutoExpand;  // +0x7a

	bool m_bCustomCommandBtnWidthOverride;  // +0xb0
	PropEdAttributeInfo_t();
	PropEdAttributeInfo_t(const PropEdAttributeInfo_t &);
	void SetInvalid();
	void ClearDerivedInfo();
	PropEdAttributeInfo_t & operator=(const PropEdAttributeInfo_t &);
	void AggregateMultipleAttributes(const CUtlVector<PropEdAttributeInfo_t, CUtlMemory<PropEdAttributeInfo_t, int> > &);

	// sizeof = 184
};

// src/public/propertyeditor/ipropertyeditorsystem.h:468
class IPropertyEditDomain {
	int ()() * * _vptr.IPropertyEditDomain;  // +0x0
	IPropertyEditDomain();
	virtual ~IPropertyEditDomain();
	virtual PropEdTypeId_t D_ElementSubType(PropEdSpecificElement_t);
	virtual bool D_ElementName(PropEdSpecificElement_t, CUtlString *);
	virtual bool D_ElementIsNull(PropEdSpecificElement_t);
	virtual CUtlString D_ElementTypeName(PropEdSpecificElement_t);
	virtual void D_TypeAttributes(PropEdSpecificElement_t, CUtlVector<void*, CUtlMemory<void*, int> > *);
	virtual PropEdAttributeType_t D_AttributeType(const PropEdSpecificAttr_t &);
	virtual bool D_AttributeInfo(const PropEdSpecificAttr_t &, PropEdAttributeInfo_t *);
	virtual void D_BeginSetAttributes(PropEdModifyType_t);
	virtual void D_EndSetAttributes(PropEdModifyType_t);
	virtual void D_SetAttribute(const PropEdSpecificAttr_t &, const CUtlVector<int, CUtlMemory<int, int> > &, const CUtlString &, PropEdModifyType_t);
	virtual void D_GetAttribute(const PropEdSpecificAttr_t &, const CUtlVector<int, CUtlMemory<int, int> > &, CUtlString *);
	virtual void D_GetAttributeElement(const PropEdSpecificAttr_t &, const CUtlVector<int, CUtlMemory<int, int> > &, PropEdSpecificElement_t *);
	virtual void D_GetChoices(const PropEdSpecificAttr_t &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool D_ArrayOperation(const PropEdSpecificAttr_t &, const CUtlVector<int, CUtlMemory<int, int> > &, PropertyArrayOperation_t, int, int);
	virtual void D_ReadAttributeIndirection(const PropEdSpecificAttr_t &, const CUtlVector<int, CUtlMemory<int, int> > &, int *);
	virtual void D_ExecuteCustomCommandForAttr(const char *, const PropEdSpecificAttr_t &, int);
	virtual bool IsEditorRebuildNeeded();
	virtual void OnEditorRebuilt();
	virtual const char * GetContextTag(CUtlStringToken);
	virtual bool D_HelpInfoForElement(PropEdSpecificElement_t, CUtlString *, CUtlString *);

	// vtable[2] D_ElementSubType
	// vtable[3] D_ElementName
	// vtable[4] D_ElementIsNull
	// vtable[5] D_ElementTypeName
	// vtable[6] D_TypeAttributes
	// vtable[7] D_AttributeType
	// vtable[8] D_AttributeInfo
	// vtable[9] D_BeginSetAttributes
	// vtable[10] D_EndSetAttributes
	// vtable[11] D_SetAttribute
	// vtable[12] D_GetAttribute
	// vtable[13] D_GetAttributeElement
	// vtable[14] D_GetChoices
	// vtable[15] D_ArrayOperation
	// vtable[16] D_ReadAttributeIndirection
	// vtable[17] D_ExecuteCustomCommandForAttr
	// vtable[18] IsEditorRebuildNeeded
	// vtable[19] OnEditorRebuilt
	// vtable[20] GetContextTag
	// vtable[21] D_HelpInfoForElement
	// sizeof = 8
};

// src/public/propertyeditor/ipropertyeditorsystem.h:511
class IPropertyEditor {
	int ()() * * _vptr.IPropertyEditor;  // +0x0
	IPropertyEditor(const IPropertyEditor &);
	IPropertyEditor();

protected:

	virtual ~IPropertyEditor();
	virtual void SetTarget(PropEdSpecificElement_t);
	virtual void SetTargets(const CUtlVector<PropEdSpecificElement_t, CUtlMemory<PropEdSpecificElement_t, int> > &);
	void SetTargetsNone();
	virtual void GetTargets(CUtlVector<PropEdSpecificElement_t, CUtlMemory<PropEdSpecificElement_t, int> > *);
	virtual void SetDomain(IPropertyEditDomain *);
	virtual void SetDomainAndTakeOwnership(IPropertyEditDomain *);
	virtual IPropertyEditDomain * GetDomain();
	virtual QWidget * GetWidget();
	virtual void AddModificationListener(IPropertyModificationListener *);
	virtual void RemoveModificationListener(IPropertyModificationListener *);
	virtual void RemoveAllModificationListeners();
	virtual void SetModificationListeners(CUtlVector<IPropertyModificationListener*, CUtlMemory<IPropertyModificationListener*, int> > &);
	virtual void NotifyDomainChanged();
	virtual void SetShowHiddenAttributes(bool);
	virtual bool IsModifyingAttributes();
	virtual void FlushUiState();
	virtual bool GetContextData(void * *, CUtlStringToken);
	virtual void SetContextData(CUtlStringToken, void *);
	virtual void RestoreToolSettings(KeyValues *);
	virtual void SaveToolSettings(KeyValues *);
	virtual void PasteStringIntoAttributes(const char *);
	virtual void SetReadOnly(bool);

	// vtable[2] SetTarget
	// vtable[3] SetTargets
	// vtable[4] GetTargets
	// vtable[5] SetDomain
	// vtable[6] SetDomainAndTakeOwnership
	// vtable[7] GetDomain
	// vtable[8] GetWidget
	// vtable[9] AddModificationListener
	// vtable[10] RemoveModificationListener
	// vtable[11] RemoveAllModificationListeners
	// vtable[12] SetModificationListeners
	// vtable[13] NotifyDomainChanged
	// vtable[14] SetShowHiddenAttributes
	// vtable[15] IsModifyingAttributes
	// vtable[16] FlushUiState
	// vtable[17] GetContextData
	// vtable[18] SetContextData
	// vtable[19] RestoreToolSettings
	// vtable[20] SaveToolSettings
	// vtable[21] PasteStringIntoAttributes
	// vtable[22] SetReadOnly
	// sizeof = 8
};
