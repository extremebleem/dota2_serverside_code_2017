// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_misc_modifiers.h:26
class CDOTA_Modifier_MagicImmune : public CDOTA_Buff {
public:

	CDOTA_Modifier_MagicImmune(CDOTA_Modifier_MagicImmune &);
	CDOTA_Modifier_MagicImmune(const CDOTA_Modifier_MagicImmune &);
	CDOTA_Modifier_MagicImmune();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_MagicImmune();

	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:41
class CDOTA_Modifier_CameraFollow : public CDOTA_Buff {
public:

	CDOTA_Modifier_CameraFollow();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_CameraFollow();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:54
class CDOTA_Modifier_Hexed : public CDOTA_Buff {
public:

	CDOTA_Modifier_Hexed();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedOverride(const CModifierParams &);
	virtual bool IsHexDebuff();
	virtual const char * GetHexType();
	virtual const char * GetDefaultHexModel();
	virtual const char * GetHexModel();
	virtual float GetMoveSpeedModifier();
	virtual int GetPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual bool SpeakMorphConcept();
	virtual ~CDOTA_Modifier_Hexed();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[17] IsHexDebuff
	// vtable[89] GetHexType
	// vtable[90] GetDefaultHexModel
	// vtable[91] GetHexModel
	// vtable[92] GetMoveSpeedModifier
	// vtable[6] GetPriority
	// vtable[5] CheckState
	// vtable[93] SpeakMorphConcept
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:86
class CDOTA_Modifier_Item_Editor : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Editor(CDOTA_Modifier_Item_Editor &);
	CDOTA_Modifier_Item_Editor(const CDOTA_Modifier_Item_Editor &);
	CDOTA_Modifier_Item_Editor();
	virtual bool IsHidden();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Item_Editor();

	// vtable[11] IsHidden
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:99
class CDOTA_Modifier_Prosperous_Soul : public CDOTA_Buff {
public:

	CDOTA_Modifier_Prosperous_Soul(CDOTA_Modifier_Prosperous_Soul &);
	CDOTA_Modifier_Prosperous_Soul(const CDOTA_Modifier_Prosperous_Soul &);
	CDOTA_Modifier_Prosperous_Soul();
	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_Prosperous_Soul();

	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:115
class CDOTA_Modifier_MoveSpeed_Percentage : public CDOTA_Buff {
public:

private:

	int movespeed;  // +0xba8
	CDOTA_Modifier_MoveSpeed_Percentage();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_MoveSpeed_Percentage();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.h:133
class CDOTA_Modifier_Kill : public CDOTA_Buff {
public:

	CDOTA_Modifier_Kill();
	virtual void OnDestroy();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	virtual ~CDOTA_Modifier_Kill();

	// vtable[60] OnDestroy
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:149
class CDOTA_Modifier_Phased : public CDOTA_Buff {
public:

	CDOTA_Modifier_Phased();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Phased();

	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:161
class CDOTA_Modifier_Dominated : public CDOTA_Buff {
public:

	CDOTA_Modifier_Dominated();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Dominated();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:175
class CDOTA_Modifier_TrueSight : public CDOTA_Buff {
public:

	CDOTA_Modifier_TrueSight();
	virtual void OnCreated(KeyValues *);
	virtual bool ProvidesTruesightForTeam(int);
	virtual int GetPriority();
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_TrueSight();

	// vtable[57] OnCreated
	// vtable[84] ProvidesTruesightForTeam
	// vtable[6] GetPriority
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:192
class CDOTA_Modifier_Stunned : public CDOTA_Buff {
public:

	CDOTA_Modifier_Stunned(CDOTA_Modifier_Stunned &);
	CDOTA_Modifier_Stunned(const CDOTA_Modifier_Stunned &);
	CDOTA_Modifier_Stunned();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Stunned();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:212
class CDOTA_Modifier_Bashed : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Bashed();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Bashed();

	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:232
class CDOTA_Modifier_Taunt : public CDOTA_Buff {
public:

	CDOTA_Modifier_Taunt();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_Taunt();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:251
class CDOTA_Modifier_PersistentInvisibility : public CDOTA_Buff {
public:

private:

	float fade_delay;  // +0xba8
	float m_flFadeTime;  // +0xbac
	float m_flLastActionTime;  // +0xbb0
	CDOTA_Modifier_PersistentInvisibility();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPersistentInvisibility(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_PersistentInvisibility();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnAbilityExecuted
	// vtable[90] OnAttack
	// vtable[91] OnBreakInvisibility
	// vtable[92] GetModifierPersistentInvisibility
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3000
};

// src/game/shared/dota/dota_misc_modifiers.h:288
class CDOTA_Modifier_Invisible : public CDOTA_Buff {
public:

private:

	bool m_bSubtle;  // +0xba8

	float m_flFadeTime;  // +0xbac
	float m_flFadeTimeValue;  // +0xbb0
	CDOTA_Modifier_Invisible(CDOTA_Modifier_Invisible &);
	CDOTA_Modifier_Invisible(const CDOTA_Modifier_Invisible &);
	CDOTA_Modifier_Invisible();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsInvisible();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Invisible();

	// vtable[89] GetModifierInvisibilityLevel
	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// vtable[92] OnBreakInvisibility
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[93] IsInvisible
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3000
};

// src/game/shared/dota/dota_misc_modifiers.h:324
class CDOTA_Modifier_Followthrough : public CDOTA_Buff {
public:

	CDOTA_Modifier_Followthrough();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Followthrough();

	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:337
class CDOTA_Modifier_Silence : public CDOTA_Buff {
public:

	CDOTA_Modifier_Silence();
	virtual bool IsDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_Silence();

	// vtable[12] IsDebuff
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:354
class CDOTA_Modifier_Invulnerable : public CDOTA_Buff {
public:

	CDOTA_Modifier_Invulnerable(CDOTA_Modifier_Invulnerable &);
	CDOTA_Modifier_Invulnerable(const CDOTA_Modifier_Invulnerable &);
	CDOTA_Modifier_Invulnerable();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Invulnerable();

	// vtable[5] CheckState
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:367
class CDOTA_Modifier_AttackImmune : public CDOTA_Buff {
public:

	CDOTA_Modifier_AttackImmune();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_AttackImmune();

	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:378
class CDOTA_Modifier_Disarmed : public CDOTA_Buff {
public:

	CDOTA_Modifier_Disarmed();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Disarmed();

	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:389
class CDOTA_Modifier_Rooted : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rooted(CDOTA_Modifier_Rooted &);
	CDOTA_Modifier_Rooted(const CDOTA_Modifier_Rooted &);
	CDOTA_Modifier_Rooted();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Rooted();

	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:400
class CDOTA_Modifier_NoHealthBar : public CDOTA_Buff {
public:

	CDOTA_Modifier_NoHealthBar();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_NoHealthBar();

	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:424
class CDOTA_Modifier_FountainAura : public CDOTA_Buff {
public:

	CDOTA_Modifier_FountainAura(CDOTA_Modifier_FountainAura &);
	CDOTA_Modifier_FountainAura(const CDOTA_Modifier_FountainAura &);
	CDOTA_Modifier_FountainAura();
	virtual bool IsHidden();
	virtual float GetAuraDuration();
	virtual ~CDOTA_Modifier_FountainAura();

	// vtable[11] IsHidden
	// vtable[83] GetAuraDuration
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:437
class CDOTA_Modifier_FountainAuraBuff : public CDOTA_Buff {
public:

	CDOTA_Modifier_FountainAuraBuff();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierPercentageHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierTotalPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_FountainAuraBuff();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:459
class CDOTA_Modifier_Illusion : public CDOTA_Buff {
public:

private:

	int outgoing_damage;  // +0xba8
	int outgoing_damage_structure;  // +0xbac
	int incoming_damage;  // +0xbb0
	int bounty_base;  // +0xbb4
	int bounty_growth;  // +0xbb8

	char m_szIllusionLabel[64];  // +0xbc8
	CDOTA_Modifier_Illusion();
	virtual void OnDestroy();
	virtual bool IsDebuff();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingSpellDamage_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIsIllusion(const CModifierParams &);
	ModifierVariant_t GetModifierIllusionLabel(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	virtual const char * GetTexture();
	virtual bool ShouldSendToTeam(int);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Illusion();

	// vtable[60] OnDestroy
	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[32] GetTexture
	// vtable[9] ShouldSendToTeam
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3080
};

// src/game/shared/dota/dota_misc_modifiers.h:504
class CDOTA_Modifier_Rune_DoubleDamage : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rune_DoubleDamage();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Rune_DoubleDamage();

	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:520
class CDOTA_Modifier_Rune_Haste : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rune_Haste();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Rune_Haste();

	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:537
class CDOTA_Modifier_Rune_Invisibility : public CDOTA_Modifier_Invisible {
public:

	CDOTA_Modifier_Rune_Invisibility(CDOTA_Modifier_Rune_Invisibility &);
	CDOTA_Modifier_Rune_Invisibility(const CDOTA_Modifier_Rune_Invisibility &);
	CDOTA_Modifier_Rune_Invisibility();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Rune_Invisibility();

	// vtable[32] GetTexture
	// sizeof = 3000
};

// src/game/shared/dota/dota_misc_modifiers.h:548
class CDOTA_Modifier_Rune_Regen : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rune_Regen();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Rune_Regen();

	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:566
class CDOTA_Modifier_Rune_Arcane : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rune_Arcane();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPercentageCooldownStacking(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManacost(const CModifierParams &);
	ModifierVariant_t GetModifierUnitStatsNeedsRefresh(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Rune_Arcane();

	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:585
class CDOTA_Modifier_Teleporting : public CDOTA_Buff {
public:

private:

	float m_fStartTime;  // +0xbc8
	char m_iszPortalLoopAppear[260];  // +0xbcc
	char m_iszPortalLoopDisappear[260];  // +0xcd0
	char m_iszHeroLoopAppear[260];  // +0xdd4
	char m_iszHeroLoopDisappear[260];  // +0xed8
	bool m_bSkipTeleportAnim;  // +0xfdc
	bool m_bPlayingCoopAnim;  // +0xfdd
	bool m_bIsPlayingTauntGesture;  // +0xfde

	float m_fChannelTime;  // +0xfe0
	CDOTA_Modifier_Teleporting();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTeleported(const CModifierParams &);
	SndOpEventGuid_t GenerateSound(const char *, Vector);
	const Vector & GetEndPos();
	float GetChannelTime();
	virtual ~CDOTA_Modifier_Teleporting();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[10] AddCustomTransmiterData
	// vtable[65] DeclareFunctions
	// sizeof = 4096
};

// src/game/shared/dota/dota_misc_modifiers.h:636
class CDOTA_Modifier_Knockback : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	int knockback_distance;  // +0xbd0
	int knockback_height;  // +0xbd4
	float knockback_duration;  // +0xbd8
	float m_fCurrentTimeHoriz;  // +0xbf4
	float m_fCurrentTimeVert;  // +0xbf8
	bool m_bShouldStun;  // +0xbfc
	CDOTA_Modifier_Knockback(CDOTA_Modifier_Knockback &);
	CDOTA_Modifier_Knockback(const CDOTA_Modifier_Knockback &);
	CDOTA_Modifier_Knockback();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Knockback();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3072
};

// src/game/shared/dota/dota_misc_modifiers.h:687
class CDOTA_Modifier_Cyclone : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flStartTime;  // +0xbc4
	float m_flCurTime;  // +0xbd4
	float m_flHeightT;  // +0xbd8
	CDOTA_Modifier_Cyclone();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationWeight(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Cyclone();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3040
};

// src/game/shared/dota/dota_misc_modifiers.h:734
class CDOTA_Modifier_IceSlide : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_fLastUpdateTime;  // +0xbb4
	CDOTA_Modifier_IceSlide();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual bool IgnoresIntermediateMovement();
	virtual ~CDOTA_Modifier_IceSlide();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[92] IgnoresIntermediateMovement
	// sizeof = 3016
};

// src/game/shared/dota/dota_misc_modifiers.h:769
class CDOTA_Modifier_Tutorial_LastHitHelper : public CDOTA_Buff {
public:

private:

	bool m_bTargetFriendlies;  // +0xba8
	CDOTA_Modifier_Tutorial_LastHitHelper();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	void EnableTargetingFriendlies(bool);
	float GetDamageRatio(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Tutorial_LastHitHelper();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.h:801
class CDOTA_Modifier_TeamShowcase_Global : public CDOTA_Buff {
public:

	CDOTA_Modifier_TeamShowcase_Global();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsStunDebuff();
	virtual ~CDOTA_Modifier_TeamShowcase_Global();

	// vtable[5] CheckState
	// vtable[16] IsStunDebuff
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:814
class CDOTA_Modifier_TeamShowcase_Showcase : public CDOTA_Buff {
public:

	CDOTA_Modifier_TeamShowcase_Showcase();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_TeamShowcase_Showcase();

	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:833
class CDOTA_Modifier_HallOfFame_Glow : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_HallOfFame_Glow();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetTexture();
	virtual int GetAttributes();
	virtual int GetTeamSendMask();
	void SetGlowingPlayerIDs(const CUtlVector<int, CUtlMemory<int, int> > &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_HallOfFame_Glow();

	// vtable[57] OnCreated
	// vtable[32] GetTexture
	// vtable[7] GetAttributes
	// vtable[86] GetTeamSendMask
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3008
};

// src/game/shared/dota/dota_misc_modifiers.h:867
class CDOTA_Modifier_DisableTauntAnimationCancel : public CDOTA_Buff {
public:

	CDOTA_Modifier_DisableTauntAnimationCancel(CDOTA_Modifier_DisableTauntAnimationCancel &);
	CDOTA_Modifier_DisableTauntAnimationCancel(const CDOTA_Modifier_DisableTauntAnimationCancel &);
	CDOTA_Modifier_DisableTauntAnimationCancel();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_DisableTauntAnimationCancel();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.h:883
class CDOTA_Modifier_MonkeyKing_BouncePerch : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	EHANDLE m_hTree;  // +0xbb4
	bool m_bGroundToTree;  // +0xbb8
	bool m_bTreeToGround;  // +0xbb9
	bool m_bTreeToTree;  // +0xbba

	float perched_vision;  // +0xbbc
	bool m_bAbilityIsStolen;  // +0xbc0
	CDOTA_Modifier_MonkeyKing_BouncePerch();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t GetVisualZDelta(const CModifierParams &);
	ModifierVariant_t GetModifierTranslateActivityModifiers(const CModifierParams &);
	ModifierVariant_t GetFixedVision(const CModifierParams &);
	virtual void OnHorizontalMotionInterrupted();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsMotionController();
	virtual bool IsHorizontalMotionValidToApply();
	EHANDLE GetPerchedTree();
	virtual ~CDOTA_Modifier_MonkeyKing_BouncePerch();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnHorizontalMotionInterrupted
	// vtable[90] UpdateHorizontalMotion
	// vtable[21] IsMotionController
	// vtable[91] IsHorizontalMotionValidToApply
	// sizeof = 3016
};
