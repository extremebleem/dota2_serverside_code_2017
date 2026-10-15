// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_networkquantizedtypes.h:39
class CNetworkOriginCellCoordQuantizedVector {
private:

protected:

	uint16 m_cellX;  // +0xc
	uint16 m_cellY;  // +0xe
	uint16 m_cellZ;  // +0x10
	uint16 m_nOutsideWorld;  // +0x12

private:

	CNetworkOriginCellCoordQuantizedVector();
	CNetworkOriginCellCoordQuantizedVector(const Vector &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CNetworkOriginCellCoordQuantizedVector *);
	bool IsIdenticalWithinTolerance(const CNetworkOriginCellCoordQuantizedVector &);
	void NetworkStateChanged(intp, int32);
	void SetNetworkStateChangedRouter(INetworkStateChangedRouter *);
	const CNetworkedQuantizedFloat * GetElement(int);
	CNetworkedQuantizedFloat * GetElement(int);
	const Vector & QuantizeInPlace();
	void Init(float, float, float);
	const Vector & Set(const Vector &);
	const Vector & operator=(const CNetworkOriginCellCoordQuantizedVector &);
	const Vector & operator const Vector&();
	const Vector & Get();
	float operator[](int);

protected:

	void OnVectorComponentChanged();
	void SetUnflattened(bool);
	bool IsUnflattened();
	void OnCellChanged();
	void SetCell(int, uint16);
	int GetCell(int);
	int CellBits();
	int CellWidth();

private:

	void Init();
	void LatchComponent(int);
	void NetworkComponentChanged(int);

	// sizeof = 56
};

// src/game/shared/game_networkquantizedtypes.h:222
class CNetworkOriginQuantizedVector {
private:

protected:

private:

	CNetworkOriginQuantizedVector();
	CNetworkOriginQuantizedVector(const Vector &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CNetworkOriginQuantizedVector *);
	bool IsIdenticalWithinTolerance(const CNetworkOriginQuantizedVector &);
	void NetworkStateChanged(intp, int32);
	void SetNetworkStateChangedRouter(INetworkStateChangedRouter *);
	const CNetworkedQuantizedFloat * GetElement(int);
	CNetworkedQuantizedFloat * GetElement(int);
	const Vector & QuantizeInPlace();
	void Init(float, float, float);
	const Vector & Set(const Vector &);
	const Vector & operator=(const CNetworkOriginQuantizedVector &);
	const Vector & operator const Vector&();
	const Vector & Get();
	float operator[](int);

protected:

	void OnVectorComponentChanged();
	void Init();
	void SetUnflattened(bool);
	bool IsUnflattened();
	void LatchComponent(int);
	void NetworkComponentChanged(int);

	// sizeof = 48
};

// src/game/shared/game_networkquantizedtypes.h:231
class CNetworkVelocityVector {
private:

protected:

private:

	CNetworkVelocityVector();
	CNetworkVelocityVector(const Vector &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CNetworkVelocityVector *);
	bool IsIdenticalWithinTolerance(const CNetworkVelocityVector &);
	void NetworkStateChanged(intp, int32);
	void SetNetworkStateChangedRouter(INetworkStateChangedRouter *);
	const CNetworkedQuantizedFloat * GetElement(int);
	CNetworkedQuantizedFloat * GetElement(int);
	const Vector & QuantizeInPlace();
	void Init(float, float, float);
	const Vector & Set(const Vector &);
	const Vector & operator=(const CNetworkVelocityVector &);
	const Vector & operator const Vector&();
	const Vector & Get();
	float operator[](int);

protected:

	void OnVectorComponentChanged();
	void Init();
	void SetUnflattened(bool);
	bool IsUnflattened();
	void LatchComponent(int);
	void NetworkComponentChanged(int);

	// sizeof = 48
};

// src/game/shared/game_networkquantizedtypes.h:237
class CNetworkViewOffsetVector {
private:

protected:

private:

	CNetworkViewOffsetVector();
	CNetworkViewOffsetVector(const Vector &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CNetworkViewOffsetVector *);
	bool IsIdenticalWithinTolerance(const CNetworkViewOffsetVector &);
	void NetworkStateChanged(intp, int32);
	void SetNetworkStateChangedRouter(INetworkStateChangedRouter *);
	const CNetworkedQuantizedFloat * GetElement(int);
	CNetworkedQuantizedFloat * GetElement(int);
	const Vector & QuantizeInPlace();
	void Init(float, float, float);
	const Vector & Set(const Vector &);
	const Vector & operator=(const CNetworkViewOffsetVector &);
	const Vector & operator const Vector&();
	const Vector & Get();
	float operator[](int);

protected:

	void OnVectorComponentChanged();
	void Init();
	void SetUnflattened(bool);
	bool IsUnflattened();
	void LatchComponent(int);
	void NetworkComponentChanged(int);
	CNetworkViewOffsetVector(const CNetworkViewOffsetVector &);

	// sizeof = 48
};
