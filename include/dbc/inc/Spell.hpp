#ifndef Spell_HPP
#define Spell_HPP

#include "../DBCHeader.hpp"

//
//

struct SpellRecord
{
	uint32_t ID;
	uint32_t SpellCategory;
	uint32_t DispelType;
	uint32_t SpellMechanic;
	uint32_t Attributes;
	uint32_t AttributesEx;
	uint32_t AttributesExB;
	uint32_t AttributesExC;
	uint32_t AttributesExD;
	uint32_t AttributesExE;
	uint32_t AttributesExF;
	uint32_t AttributesExG;
	uint32_t Stances;
	uint32_t unk1;
	uint32_t ExcludedStances;
	uint32_t unk2;
	uint32_t Targets;
	uint32_t TargetCreatureType;
	uint32_t SpellFocusObject;
	uint32_t FacingCasterFlags;
	uint32_t CasterAuraState;
	uint32_t TargetAuraState;
	uint32_t CasterAuraStateNot;
	uint32_t TargetAuraStateNot;
	uint32_t casterAuraSpell;
	uint32_t targetAuraSpell;
	uint32_t excludeCasterAuraSpell;
	uint32_t excludeTargetAuraSpell;
	uint32_t CastingTimeIndex;
	uint32_t RecoveryTime;
	uint32_t CategoryRecoveryTime;
	uint32_t InterruptFlags;
	uint32_t AuraInterruptFlags;
	uint32_t ChannelInterruptFlags;
	uint32_t procFlags;
	uint32_t procChance;
	uint32_t procCharges;
	uint32_t maxLevel;
	uint32_t baseLevel;
	uint32_t spellLevel;
	uint32_t DurationIndex;
	uint32_t powerType;
	uint32_t manaCost;
	uint32_t manaCostPerlevel;
	uint32_t manaPerSecond;
	uint32_t manaPerSecondPerLevel;
	uint32_t RangeIndex;
	float speed;
	uint32_t modalNextSpell;
	uint32_t StackAmount;
	uint32_t Totem1;
	uint32_t Totem2;
	int32_t Reagent1;
	int32_t Reagent2;
	int32_t Reagent3;
	int32_t Reagent4;
	int32_t Reagent5;
	int32_t Reagent6;
	int32_t Reagent7;
	int32_t Reagent8;
	int32_t ReagentCount1;
	int32_t ReagentCount2;
	int32_t ReagentCount3;
	int32_t ReagentCount4;
	int32_t ReagentCount5;
	int32_t ReagentCount6;
	int32_t ReagentCount7;
	int32_t ReagentCount8;
	int32_t EquippedItemClass;
	int32_t EquippedItemSubClassMask;
	int32_t EquippedItemInventoryTypeMask;
	int32_t Effect1;
	int32_t Effect2;
	int32_t Effect3;
	int32_t EffectDieSides1;
	int32_t EffectDieSides2;
	int32_t EffectDieSides3;
	float EffectRealPointsPerLevel1;
	float EffectRealPointsPerLevel2;
	float EffectRealPointsPerLevel3;
	int32_t EffectBasePoints1;
	int32_t EffectBasePoints2;
	int32_t EffectBasePoints3;
	int32_t EffectMechanic1;
	int32_t EffectMechanic2;
	int32_t EffectMechanic3;
	uint32_t EffectImplicitTargetA1;
	uint32_t EffectImplicitTargetA2;
	uint32_t EffectImplicitTargetA3;
	uint32_t EffectImplicitTargetB1;
	uint32_t EffectImplicitTargetB2;
	uint32_t EffectImplicitTargetB3;
	uint32_t EffectRadiusIndex1;
	uint32_t EffectRadiusIndex2;
	uint32_t EffectRadiusIndex3;
	uint32_t EffectApplyAuraName1;
	uint32_t EffectApplyAuraName2;
	uint32_t EffectApplyAuraName3;
	uint32_t EffectAuraPeriod1;
	uint32_t EffectAuraPeriod2;
	uint32_t EffectAuraPeriod3;
	uint32_t EffectMultipleValue1;
	uint32_t EffectMultipleValue2;
	uint32_t EffectMultipleValue3;
	uint32_t EffectChainTarget1;
	uint32_t EffectChainTarget2;
	uint32_t EffectChainTarget3;
	uint32_t EffectItemType1;
	uint32_t EffectItemType2;
	uint32_t EffectItemType3;
	int32_t EffectMiscValue1;
	int32_t EffectMiscValue2;
	int32_t EffectMiscValue3;
	int32_t EffectMiscValueB1;
	int32_t EffectMiscValueB2;
	int32_t EffectMiscValueB3;
	uint32_t EffectTriggerSpell1;
	uint32_t EffectTriggerSpell2;
	uint32_t EffectTriggerSpell3;
	float EffectPointsPerComboPoint1;
	float EffectPointsPerComboPoint2;
	float EffectPointsPerComboPoint3;
	uint32_t EffectSpellClassMaskA1;
	uint32_t EffectSpellClassMaskA2;
	uint32_t EffectSpellClassMaskA3;
	uint32_t EffectSpellClassMaskB1;
	uint32_t EffectSpellClassMaskB2;
	uint32_t EffectSpellClassMaskB3;
	uint32_t EffectSpellClassMaskC1;
	uint32_t EffectSpellClassMaskC2;
	uint32_t EffectSpellClassMaskC3;
	uint32_t SpellVisual1; //! need for patch
	uint32_t SpellVisual2; //! need for patch
	uint32_t SpellIconID;
	uint32_t activeIconID;
	uint32_t spellPriority;
	stringref SpellName1;
	stringref SpellName2;
	stringref SpellName3;
	stringref SpellName4;
	stringref SpellName5;
	stringref SpellName6;
	stringref SpellName7;
	stringref SpellName8;
	stringref SpellName9;
	stringref SpellName10;
	stringref SpellName11;
	stringref SpellName12;
	stringref SpellName13;
	stringref SpellName14;
	stringref SpellName15;
	stringref SpellName16;
	stringref SpellName17;
	stringref SpellSubtext1;
	stringref SpellSubtext2;
	stringref SpellSubtext3;
	stringref SpellSubtext4;
	stringref SpellSubtext5;
	stringref SpellSubtext6;
	stringref SpellSubtext7;
	stringref SpellSubtext8;
	stringref SpellSubtext9;
	stringref SpellSubtext10;
	stringref SpellSubtext11;
	stringref SpellSubtext12;
	stringref SpellSubtext13;
	stringref SpellSubtext14;
	stringref SpellSubtext15;
	stringref SpellSubtext16;
	uint32_t SpellSubtextMask;
	stringref Description1;
	stringref Description2;
	stringref Description3;
	stringref Description4;
	stringref Description5;
	stringref Description6;
	stringref Description7;
	stringref Description8;
	stringref Description9;
	stringref Description10;
	stringref Description11;
	stringref Description12;
	stringref Description13;
	stringref Description14;
	stringref Description15;
	stringref Description16;
	uint32_t DescriptionMask;
	stringref ToolTip1;
	stringref ToolTip2;
	stringref ToolTip3;
	stringref ToolTip4;
	stringref ToolTip5;
	stringref ToolTip6;
	stringref ToolTip7;
	stringref ToolTip8;
	stringref ToolTip9;
	stringref ToolTip10;
	stringref ToolTip11;
	stringref ToolTip12;
	stringref ToolTip13;
	stringref ToolTip14;
	stringref ToolTip15;
	stringref ToolTip16;
	stringref ToolTipMask;
	uint32_t ManaCostPercentage;
	uint32_t StartRecoveryCategory;
	uint32_t StartRecoveryTime;
	uint32_t MaxTargetLevel;
	uint32_t SpellClassSet;
	uint32_t SpellClassMask1;
	uint32_t SpellClassMask2;
	uint32_t SpellClassMask3;
	uint32_t MaxAffectedTargets;
	uint32_t DefenseType;
	uint32_t PreventionType;
	uint32_t StanceBarOrder;
	float EffectChainAmplitude1;
	float EffectChainAmplitude2;
	float EffectChainAmplitude3;
	uint32_t MinFactionId;
	uint32_t MinReputation;
	uint32_t RequiredAuraVision;
	uint32_t TotemCategory1;
	uint32_t TotemCategory2;
	uint32_t RequiredAreaGroupId;
	uint32_t SchoolMask;
	uint32_t RuneCostID;
	uint32_t SpellMissileID;
	uint32_t PowerDisplayId;
	float EffectBonusMultiplier1;
	float EffectBonusMultiplier2;
	float EffectBonusMultiplier3;
	uint32_t SpellDescriptionVariableID;
	uint32_t SpellDifficultyId;
};
struct SpellFile
{
	DBCHeader header;
	// static_assert (header.record_size == sizeof (record_type));
	SpellRecord *records;
	char *stringBlock;
	bool changeRecord_spellVisual1(uint32_t recordId, uint32_t newValue)
	{
		if (recordId > header.recordCount)
			return false;
		SpellRecord &record = records[recordId];
		record.SpellVisual1 = newValue;
		return true;
	};
	bool changeRecord_spellVisual1_ByID(uint32_t id, uint32_t newValue)
	{
		for (uint32_t i = 0; i < header.recordCount; i++)
		{
			SpellRecord &record = records[i];
			if (record.ID == id)
			{
				record.SpellVisual1 = newValue;
				return true;
			}
		}
		return false;
	};
	bool changeRecord_spellVisual2(uint32_t recordId, uint32_t newValue)
	{
		if (recordId > header.recordCount)
			return false;
		SpellRecord &record = records[recordId];
		record.SpellVisual2 = newValue;
		return true;
	};
	bool changeRecord_spellVisual2_ByID(uint32_t id, uint32_t newValue)
	{
		// if (recordId > header.recordCount) return false;
		for (uint32_t i = 1; i < header.recordCount; i++)
		{
			SpellRecord &record = records[i];
			if (record.ID == id)
			{
				record.SpellVisual2 = newValue;
				return true;
			}
		}
		return false;
	};
	bool addNewRecord(SpellRecord newRecord)
	{
		SpellRecord *newRecords = new SpellRecord[header.recordCount + 1];
		for (uint32_t i = 0; i < header.recordCount; i++)
		{
			newRecords[i] = records[i];
		};
		newRecords[header.recordCount] = newRecord;
		records = newRecords;
		header.recordCount++;
		return true;
	};
};
#endif
