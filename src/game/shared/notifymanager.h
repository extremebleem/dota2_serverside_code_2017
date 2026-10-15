// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/notifymanager.h:31
struct notify_teleport_params_t {
	bool physicsRotate;  // +0x18
	notify_teleport_params_t();
	matrix3x4_t CalculateRelativeTransform(const matrix3x4_t &);

	// sizeof = 28
};

// src/game/shared/notifymanager.h:41
struct notify_destroy_params_t {
	// sizeof = 1
};

// src/game/shared/notifymanager.h:45
struct notify_death_params_t {
	// sizeof = 1
};

// src/game/shared/notifymanager.h:49
struct notify_enemy_params_t {
	EHANDLE m_hEnemy;  // +0x0
	notify_enemy_params_t();

	// sizeof = 4
};

// src/game/shared/notifymanager.h:54
struct notify_child_created_params_t {
	EHANDLE m_hChild;  // +0x0
	notify_child_created_params_t();

	// sizeof = 4
};

// src/game/shared/notifymanager.h:59
struct notify_system_event_params_t {
	union {
		const notify_teleport_params_t * pTeleport;  // +0x0
		const notify_destroy_params_t * pDestroy;  // +0x0
		const notify_death_params_t * pDeath;  // +0x0
		const notify_enemy_params_t * pEnemy;  // +0x0
		const notify_child_created_params_t * pChild;  // +0x0
	};

	union {
		const notify_teleport_params_t * pTeleport;  // +0x0
		const notify_destroy_params_t * pDestroy;  // +0x0
		const notify_death_params_t * pDeath;  // +0x0
		const notify_enemy_params_t * pEnemy;  // +0x0
		const notify_child_created_params_t * pChild;  // +0x0
	};
	notify_system_event_params_t(const notify_teleport_params_t *);
	notify_system_event_params_t(const notify_destroy_params_t *);
	notify_system_event_params_t(const notify_death_params_t *);
	notify_system_event_params_t(const notify_enemy_params_t *);
	notify_system_event_params_t(const notify_child_created_params_t *);

	// sizeof = 8
};

// src/game/shared/notifymanager.h:77
class INotify {
	int ()() * * _vptr.INotify;  // +0x0
	~INotify();
	INotify(INotify &);
	INotify(const INotify &);
	INotify();
	virtual void AddEntity(CEntityInstance *, CEntityInstance *);
	virtual void RemoveEntity(CEntityInstance *, CEntityInstance *);
	virtual void ReportNamedEvent(CEntityInstance *, const char *);
	virtual void ReportSystemEvent(CEntityInstance *, notify_system_event_t, const notify_system_event_params_t &);
	void ReportDestroyEvent(CEntityInstance *);
	void ReportDeathEvent(CEntityInstance *);
	void ReportEnemySeenEvent(CEntityInstance *, CBaseEntity *);
	void ReportEnemyUnseenEvent(CEntityInstance *, CBaseEntity *);
	void ReportChildNPCCreatedEvent(CEntityInstance *, CBaseEntity *);
	void ReportTeleportEvent(CEntityInstance *, const Vector &, const QAngle &, bool);
	virtual void ClearEntity(CEntityInstance *);

	// vtable[0] AddEntity
	// vtable[1] RemoveEntity
	// vtable[2] ReportNamedEvent
	// vtable[3] ReportSystemEvent
	// vtable[4] ClearEntity
	// sizeof = 8
};
