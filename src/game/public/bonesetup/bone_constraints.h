// Reconstructed from DWARF by pahole; not original source.

// src/game/public/bonesetup/bone_constraints.h:32
class CConstraintBones {
	enum AimConstraintUpType_t {
		AC_UP_TYPE_OBJECT_ROTATION = 0,
		AC_UP_TYPE_VECTOR = 0x1,
		AC_UP_TYPE_OBJECT = 0x2,
		AC_UP_TYPE_PARENT_ROTATION = 0x3,
		AC_UP_TYPE_FIRST = 0,
		AC_UP_TYPE_LAST = 0x3,
	};
	float ComputeTargetPosition(Vector &, int, float *, Vector *, Vector *);
	float ComputeTargetOrientation(Quaternion &, int, float *, Quaternion *, Quaternion *);
	float ComputeTargetPositionOrientation(Vector &, Quaternion &, int, float *, Vector *, Vector *, Quaternion *, Quaternion *);
	float ComputeTargetPositionOrientation(Vector &, Quaternion &, int, float *, matrix3x4a_t *, matrix3x4a_t *);
	void ComputeAimConstraintOffset(Quaternion &, bool, const Vector &, const matrix3x4a_t &, const Vector &, const Vector &, const Quaternion &, matrix3x4a_t *, AimConstraintUpType_t);
	void ComputeAimConstraintAimAt(Quaternion &, const Vector &, const Vector &);
	void ComputeAimConstraint(Quaternion &, const Vector &, const matrix3x4a_t &, const Vector &, const Vector &, const matrix3x4a_t *, AimConstraintUpType_t);
	void ComputeWorldUpVector(Vector *, const matrix3x4_t &, const Vector &, const Vector &, const matrix3x4_t *, AimConstraintUpType_t);

	// sizeof = 1
};
