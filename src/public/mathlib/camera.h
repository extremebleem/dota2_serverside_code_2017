// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/camera.h:31
struct Camera_t {
	float m_flFOVX;  // +0x18
	float m_flAspect;  // +0x1c
	float m_flZNear;  // +0x20
	float m_flZFar;  // +0x24
	float m_flWidth;  // +0x28
	float m_flHeight;  // +0x2c
	Camera_t();
	void Init(const Vector &, const QAngle &, float, float, float, float);
	void InitOrtho(const Vector &, const QAngle &, float, float, float, float);
	void InitViewParameters(const Vector &, const QAngle &);
	void InitOrthoProjection(float, float, float, float);
	bool IsOrthographic();
	void InitPerspectiveProjection(float, float, float, float);
	void ComputeGeometry(Vector *);
	void ComputeGeometry(Vector *, const Vector &, const Vector &, const Vector &);
	bool operator==(const Camera_t &);
	bool operator!=(const Camera_t &);

	// sizeof = 48
};

// src/public/mathlib/camera.h:270
class CFrustum {
protected:

	float m_flClipSpaceBottomLeftX;  // +0x170
	float m_flClipSpaceBottomLeftY;  // +0x174
	float m_flClipSpaceTopRightX;  // +0x178
	float m_flClipSpaceTopRightY;  // +0x17c
	bool m_bUseD3DClippingRange;  // +0x180

	bool m_bHaveOverrideProjectionMatrix;  // +0x308

	CFrustum();
	~CFrustum();
	void InitCamera(const Camera_t &);
	void InitCamera(const Vector &, const QAngle &, float, float, float, float, float, float, float, float);
	void InitOrthoCamera(const Vector &, const QAngle &, float, float, float, float, float, float, float, float);
	bool IsOrthographic();
	void SetCameraPosition(const Vector &);
	const Vector & GetCameraPosition();
	void SetCameraAngles(const QAngle &);
	const QAngle & GetCameraAngles();
	void SetCameraPositionAndAngles(const Vector &, const QAngle &);
	void SetCameraVectors(const Vector &, const Vector &, const Vector &);
	void SetCameraNearFarPlanes(float, float);
	void GetCameraNearFarPlanes(float &, float &);
	void SetCameraNearPlane(float);
	float GetCameraNearPlane();
	void SetCameraFarPlane(float);
	float GetCameraFarPlane();
	void SetCameraFOV(float);
	float GetCameraFOV();
	void SetCameraWidthHeight(float, float);
	void GetCameraWidthHeight(float &, float &);
	float GetCameraWidth();
	float GetCameraHeight();
	void SetCameraAspect(float);
	float GetCameraAspect();
	int CheckBoxAgainstNearAndFarPlanes(const VectorAligned &, const VectorAligned &);
	void GetNearAndFarPlanesAroundBox(float *, float *, const AABB_t &, const Vector &);
	float ComputeScreenSize(Vector, float);
	float SinFOV();
	const Camera_t & GetCameraStruct();
	void SetFrustumStruct(const Frustum_t &);
	const Vector & CameraForward();
	const Vector & CameraLeft();
	const Vector & CameraUp();
	void ViewForward(Vector &);
	void ViewLeft(Vector &);
	void ViewUp(Vector &);
	void SetView(const VMatrix &);
	const matrix3x4_t & GetView();
	void SetProj(const VMatrix &);
	const VMatrix & GetProj();
	const VMatrix & GetInvProj();
	void SetViewProj(const VMatrix &);
	const VMatrix & GetViewProj();
	VMatrix GetViewProjTranspose();
	void SetInvViewProj(const VMatrix &);
	const VMatrix & GetInvViewProj();
	VMatrix GetInvViewProjTranspose();
	void SetOverrideProj(const VMatrix &);
	void ClearOverrideProj();
	bool BoundingVolumeIntersectsFrustum(const AABB_t &);
	bool BoundingVolumeIntersectsFrustum(const Vector &, const Vector &);
	bool BoundingVolumeIntersectsFrustum(const AABB_t &, Vector &);
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const Vector &, const Vector &);
	bool CheckBoxInline(const VectorAligned &, const VectorAligned &);
	void BuildFrustumFromVectors(const Vector &, float, float, float, float, const Vector &, const Vector &, const Vector &);
	void BuildShadowFrustum(const VMatrix &, const VMatrix &);
	void CalcFarPlaneCameraRelativePoints(Vector *, float, float, float, float, float);
	void CalcViewProj();
	Vector4D TransformPointToHomogenousViewCoordinates(const Vector &);
	void SetClipSpaceBounds(float, float, float, float);
	void GetClipSpaceBounds(float &, float &, float &, float &);
	void ComputeBounds(Vector *, Vector *);
	void ComputeGeometry(Vector *);
	const Frustum_t & GetFrustumStruct();
	void ViewToWorld(const Vector2D &, Vector *);
	void WorldToView(const Vector &, Vector2D *);
	void BuildRay(const Vector2D &, Vector *, Vector *);

private:

	void UpdateViewAndProjectionFromCamera();
	void UpdateProjectionFromCamera();

	// sizeof = 880
};
