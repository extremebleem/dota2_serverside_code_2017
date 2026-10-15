// Reconstructed from DWARF by pahole; not original source.

// src/game/public/modellib/studioboneconstraints.h:26
class CStudioConstraintBones {
protected:

	static const float s_flWeightEps;
	void ComputePointConstraint(matrix3x4a_t *, const CModel *, const CPointConstraint *);
	void ComputeOrientConstraint(matrix3x4a_t *, const CModel *, const COrientConstraint *);
	void ComputeAimConstraint(matrix3x4a_t *, const CModel *, const CAimConstraint *);
	void ComputeParentConstraint(matrix3x4a_t *, const CModel *, const CParentConstraint *);
	void ComputeTwistConstraint(matrix3x4a_t *, const CModel *, const CTwistConstraint *);
	void UpdateWorldTransformAndChildren(matrix3x4a_t *, const CModel *, int, const matrix3x4a_t &);
	float ComputeTargetPosition(Vector &, const CConstraintTarget *, int, const matrix3x4a_t *, const CModel *);
	float ComputeTargetOrientation(Quaternion &, const CConstraintTarget *, int, const matrix3x4a_t *, const CModel *);
	float ComputeTargetPositionOrientation(Vector &, Quaternion &, const CConstraintTarget *, int, const matrix3x4a_t *, const CModel *);

	// sizeof = 1
};
