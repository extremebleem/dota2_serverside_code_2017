// Reconstructed from DWARF by pahole; not original source.

// src/game/public/bonesetup/bone_setup.h:191
class CIKTarget {
	struct x2 {
		const char * pAttachmentName;  // +0x0
		x2();

		// sizeof = 40
	};

	struct x3 {
		x3();

		// sizeof = 28
	};

	struct x4 {
		float latched;  // +0x0
		float release;  // +0x4
		float height;  // +0x8
		float floor;  // +0xc
		float radius;  // +0x10
		float flTime;  // +0x14
		float flWeight;  // +0x18
		bool onWorld;  // +0x38
		x4();

		// sizeof = 60
	};

	struct x5 {
		float hipToFoot;  // +0x0
		float hipToKnee;  // +0x4
		float kneeToFoot;  // +0x8
		x5();

		// sizeof = 72
	};

	struct x1 {
		bool bNeedsLatch;  // +0x0
		bool bHasLatch;  // +0x1

		float influence;  // +0x4
		int iFramecounter;  // +0x8
		int owner;  // +0xc
		x1();

		// sizeof = 124
	};

	struct x6 {
		float flTime;  // +0x0
		float flErrorTime;  // +0x4
		float ramp;  // +0x8
		bool bInError;  // +0xc

		// sizeof = 16
	};

	int chain;  // +0x0
	int type;  // +0x4

private:

	CIKTarget();
	void SetOwner(int, const Vector &, const QAngle &);
	void ClearOwner();
	int GetOwner();
	void UpdateOwner(int, const Vector &, const QAngle &);
	void SetPos(const Vector &);
	void SetAngles(const QAngle &);
	void SetQuaternion(const Quaternion &);
	void SetNormal(const Vector &);
	void SetPosWithNormalOffset(const Vector &, const Vector &);
	void SetOnWorld(bool);
	bool IsActive();
	void IKFailed();
	void MoveReferenceFrame(Vector &, QAngle &);

	// sizeof = 352
};

// src/game/public/bonesetup/bone_setup.h:273
struct ikchainresult_t {
	int target;  // +0x0
	float flScale;  // +0x20
	float flWeight;  // +0x24
	ikchainresult_t();

	// sizeof = 40
};

// src/game/public/bonesetup/bone_setup.h:335
class C2JointIKSolver {
	float Mfwd[3][3];  // +0x0
	float Minv[3][3];  // +0x24
	bool solve(float, float, const float *, const float *, float *);
	void defineM(const float *, const float *);
	float findD(float, float, float);
	float findE(float, float);
	float dot(const float *, const float *);
	float length(const float *);
	void normalize(float *);
	void cross(const float *, const float *, float *);
	void rot(float *, const float *, float *);

	// sizeof = 72
};
