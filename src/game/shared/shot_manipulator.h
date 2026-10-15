// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/shot_manipulator.h:26
class CShotManipulator {
private:

	CShotManipulator(const Vector &);
	void SetShootDir(const Vector &);
	const Vector & ApplySpread(const Vector &, float);
	const Vector & ApplyAngularSpread(const Vector &, float);
	const Vector & GetShotDirection();
	const Vector & GetResult();
	const Vector & GetRightVector();
	const Vector & GetUpVector();

	// sizeof = 48
};
