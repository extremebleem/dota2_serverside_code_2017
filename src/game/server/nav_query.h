// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_query.h:33
class ClusteredDistributionParams_t {
private:

	float m_flClusterCoverageFraction;  // +0x0
	float m_flClusterArea;  // +0x4

	ClusteredDistributionParams_t();

	// sizeof = 8
};

// src/game/server/nav_query.h:55
class CNavQuery {
	int SelectRandomNavAreas(int, const NavAreaVector &, FuncNavAreaWeight_t &, FuncNavAreaSelect_t &);
	int SelectRandomNavAreasAtDensity(float, const NavAreaVector &, FuncNavAreaWeight_t &, FuncNavAreaSelect_t &);
	int SelectRandomNavAreas(int, const NavAreaVector &, const NavAreaWeightVector_t &, float, FuncNavAreaSelect_t &);
	int SelectRandomNavAreasAtDensity(float, const NavAreaVector &, const NavAreaWeightVector_t &, float, FuncNavAreaSelect_t &);
	int SelectRandomNavAreasOverVolume(int, const CNavVolume &, FuncNavAreaWeight_t &, FuncNavAreaSelect_t &);
	int SelectRandomNavAreasAtDensityOverVolume(float, const CNavVolume &, FuncNavAreaWeight_t &, FuncNavAreaSelect_t &);
	int SelectRandomNavAreasAtDensityInClustersOverVolume(float, int, const CNavVolume &, const ClusteredDistributionParams_t &, FuncNavAreaWeight_t &, FuncNavAreaWeight_t &, FuncNavAreaSelect_t &);
	ScriptVariant_t Script_NavGetRandomPoints(int, HSCRIPT, HSCRIPT);

protected:

	int GetRandomElementInWeightedVector(const NavAreaWeightVector_t &, float);

	// sizeof = 1
};
