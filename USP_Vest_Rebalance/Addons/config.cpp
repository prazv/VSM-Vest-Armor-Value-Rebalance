class CfgPatches {
    class USP_Vest_Rebalance {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = 
		{
			"USP_Gear_Vest"
		};
    };
};
class CfgWeapons {
	class Vest_NoCamo_Base;  // BIS base
	class VestItem;
	//cpc
	class USP_CRYE_CPC_COMMS: Vest_NoCamo_Base {
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_comms.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel = "\usp_gear_vest\model\crye_cpc_comms.p3d";
			hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa","","\usp_gear_vest\data\tex\radio_coy.paa","\usp_gear_vest\data\tex\pouch_coy.paa","\usp_gear_vest\data\tex\gear_coy.paa"};
			mass = 100;
			containerClass = "Supply220";
			class HitpointsProtectionInfo 
			{
				class Chest {
					hitpointName = "HitChest";
					armor = 14;
					passThrough = 0.5;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 4;
					passThrough = 0.5;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.5;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC: Vest_NoCamo_Base
	{
		scope = 2;
		model="\usp_gear_vest\model\crye_cpc.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel="\usp_gear_vest\model\crye_cpc.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
			{
				"\usp_gear_vest\data\tex\cpc_cbr_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_COMMS_BELT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_comms_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel="\usp_gear_vest\model\crye_cpc_comms_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_FAST: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_fast.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel="\usp_gear_vest\model\crye_cpc_fast.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_LEAD: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_lead.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel="\usp_gear_vest\model\crye_cpc_lead.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_LIGHT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_light.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_light.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_LIGHT_BELT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_light_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_light_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_MEDIC: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_medic.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_medic.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_WEAPON: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_weapon.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_weapon.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_WEAPON_BELT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_weapon_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_weapon_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_MEDIC_BELT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_medic_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_medic_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_LEAD_BELT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_lead_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_lead_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_CPC_FAST_BELT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_cpc_fast_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_cpc_fast_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\cpc_cbr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	//jpc
	class USP_CRYE_JPC: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_ASLT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_assaulter.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_assaulter.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_ASLTB: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_assaulter_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_assaulter_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_DM: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_marksman.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_marksman.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_DMB: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_marksman_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_marksman_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_FS: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_light.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_light.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_GR: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_grenadier.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_grenadier.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_GRB: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_grenadier_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_grenadier_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_MG: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_hgunner.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_hgunner.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_MGB: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_hgunner_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_hgunner_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_TL: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_teamleader.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_teamleader.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_JPC_TLB: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_jpc_teamleader_belt.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_jpc_teamleader_belt.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_jpc_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	//ncpc
	class USP_CRYE_NCPC: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_ncpc.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_ncpc.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_ncpc_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_NCPC_ASLT: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_ncpc_assault.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_ncpc_assault.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_ncpc_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_CRYE_NCPC_FAST: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\crye_ncpc_fast.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\crye_ncpc_fast.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\crye_ncpc_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	//eagle mbav
	class USP_EAGLE_MBAV: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\eagle_mbav.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\eagle_mbav.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\eagle_mbav_tan_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_EAGLE_MBAV_LOAD: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\eagle_mbav.p3d";
		class ItemInfo: VestItem 
		{
			model = "\usp_gear_vest\model\eagle_mbav_loadout.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5"};
			hiddenSelectionsTextures[] = 
			{
				"\usp_gear_vest\data\tex\eagle_mbav_tan_co.paa",
				"",
				"\usp_gear_vest\data\tex\gear_coy.paa",
				"\usp_gear_vest\data\tex\radio_coy.paa",
				"\usp_gear_vest\data\tex\pouch_coy.paa",
				"\usp_gear_vest\data\tex\belt_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_EAGLE_MMAC_FAST: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\eagle_mmac_fast.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\eagle_mmac_fast.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\eagle_mmac_cbr_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	//lbt6094
	class USP_LBT_6094: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\lbt_6094.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\lbt_6094.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\lbt_6094_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_LBT_6094SLICK: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\lbt_6094slick.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\lbt_6094slick.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\lbt_6094slick_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	// eagle ciras
	class USP_EAGLE_CIRAS: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\eagle_ciras.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\eagle_ciras.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\eagle_ciras_rgr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_EAGLE_CIRAS_LOAD: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\eagle_ciras_loadout.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\eagle_ciras_loadout.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\eagle_ciras_rgr_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	//plateframre
	class USP_VEST_PLATEFRAME_BLK: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\sns_plateframe.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\sns_plateframe.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\sns_plateframe_blk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_VEST_PLATEFRAME_LOAD_BLK: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\sns_plateframe_loadout.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\sns_plateframe_loadout.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\sns_plateframe_blk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_VEST_PLATEFRAME_LOAD2_BLK: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\sns_plateframe_loadout2.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\sns_plateframe_loadout2.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\sns_plateframe_blk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_VEST_PLATEFRAME_BLK2: Vest_NoCamo_Base {
		scope = 2;
		model = "\usp_gear_vest\model\sns_plateframe.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {
			"\usp_gear_vest\data\tex\ss_plateframe_blk2_co.paa"
		};
		class ItemInfo: VestItem {
			scope = 2;
			uniformModel = "\usp_gear_vest\model\sns_plateframe.p3d";
			containerClass = "Supply220";
			mass = 100;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {
				"\usp_gear_vest\data\tex\ss_plateframe_blk2_co.paa"
			};
			class HitpointsProtectionInfo {
				class Chest {
					hitpointName = "HitChest";
					armor = 14;
					passThrough = 0.5;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 4;
					passThrough = 0.5;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.5;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};

	//strandhogg
	class USP_VEST_STRANDHOGG: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\fsp_strandhogg.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\fsp_strandhogg.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\fsp_strandhogg_blk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class USP_VEST_STRANDHOGG2: Vest_NoCamo_Base
	{
		scope = 2;
		model = "\usp_gear_vest\model\fsp_strandhogg2.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel= "\usp_gear_vest\model\fsp_strandhogg2.p3d";
			mass=100;
			containerClass="Supply220";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\usp_gear_vest\data\tex\fsp_strandhogg_blk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=14;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
};

