/****************************************************************************
* Copyright (C) 2019 Eric Mor
*
* This file is part of Spore ModAPI.
*
* Spore ModAPI is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
****************************************************************************/
#pragma once

#include <Spore\ResourceKey.h>
#include <Spore\Simulator\cCreatureAbility.h>
#include <EASTL\fixed_vector.h>
#include <EASTL\vector.h>
#include <EASTL\string.h>
#include <EASTL\fixed_hash_map.h>

namespace Simulator
{
	class cSpeciesProfile
	{
	public:

		const ResourceKey& GetSpeciesKey();

		void GetSpeciesName(eastl::string16& dst);

	public:
		struct UnkStruct
		{
			int field_0;
			int field_4;
			int field_8;
			int field_C;
			int field_10;
		};
		ASSERT_SIZE(UnkStruct, 0x14);

		typedef eastl::sp_fixed_hash_map<int, UnkStruct, 32> UnkStructPool;
		ASSERT_SIZE(UnkStructPool, 0x4E0);

		/* 00h */	UnkStructPool field_0;
		/* 4E0h */	ResourceKey field_4E0[3];
		/* 504h */	ResourceKey mSpeciesKey;  //TODO this is the main key?
		/* 510h */	ResourceKey field_510;
		/* 51Ch */	eastl::string16 mName;
		/* 52Ch */	eastl::string16 field_52C;
		/* 53Ch */	ResourceKey mProfileSeq;
		/* 548h */	float field_548;
		/* 54Ch */	float field_54C;
		/* 550h */	float field_550;
		/* 554h */	char padding_554[0x56C - 0x554];
		/* 56Ch */	float field_56C;  // 100.0
		/* 570h */	float field_570;  // 200.0
		/* 574h */	float field_574;
		/* 578h */	bool field_578;
		/* 57Ch */	int field_57C;
		/* 580h */	int field_580;  // not initialized
		/* 584h */	int field_584;  // not initialized
		/* 588h */	int field_588;  // 1
		/* 58Ch */	float field_58C;
		/* 590h */	float field_590;
		/* 594h */	float field_594;
		/* 598h */	float field_598;
		/* 59Ch */	float field_59C;
		/* 5A0h */	float field_5A0;
		/* 5A4h */	float field_5A4;
		/* 5A8h */	float field_5A8;
		/* 5ACh */	float field_5AC;
		/* 5B0h */	float field_5B0;
		/* 5B4h */	float field_5B4;
		/* 5B8h */	float field_5B8;
		/* 5BCh */	float field_5BC;
		/* 5C0h */	float field_5C0;
		/* 5C4h */	float field_5C4;
		/* 5C8h */	int field_5C8;  // 5000
		/* 5CCh */	float field_5CC;  // 1.0
		/* 5D0h */	int field_5D0;  // 2
		/* 5D4h */	int field_5D4;
		/* 5D8h */	int field_5D8;
		/* 5DCh */	int field_5DC;
		/* 5E0h */	int field_5E0;
		/* 5E4h */	int field_5E4;
		/* 5E8h */	int field_5E8;
		/* 5ECh */	int field_5EC;
		/* 5F0h */	int field_5F0;
		/* 5F4h */	int field_5F4;
		/* 5F8h */	int field_5F8;
		/* 5FCh */	int field_5FC;
		/* 600h */	int field_600;
		/* 604h */	int field_604;
		/* 608h */	int field_608;
		/* 60Ch */	int field_60C;
		/* 610h */	int field_610;
		/* 614h */	int field_614;
		/* 618h */	int field_618;  // not initialized
		/* 61Ch */	int field_61C;  // flight level?
		/* 620h */	char padding_620[0x640 - 0x620];
		/* 640h */	float mEnergyRecoveryRate;
		/* 644h */	float mMaxEnergy;
		/* 648h */	int field_648;
		/* 64Ch */	int field_64C;
		/* 650h */	int field_650;
		/* 654h */	int field_654;
		/* 658h */	int field_658;
		/* 65Ch */	int field_65C;
		/* 660h */	int field_660;
		/* 664h */	int field_664;
		/* 668h */	int field_668;
		/* 66Ch */	float mHealthRecoveryRate;
		/* 670h */	int field_670;
		/* 674h */	int field_674;
		/* 678h */	int field_678;
		/* 67Ch */	int field_67C;
		/* 680h */	int field_680;
		/* 684h */	int field_684;
		/* 688h */	int field_688;
		/* 68Ch */	int field_68C;
		/* 690h */	int field_690;
		/* 694h */	int field_694;
		/* 698h */	int field_698;
		/* 69Ch */	int field_69C;
		/* 6A0h */	int field_6A0;
		/* 6A4h */	int field_6A4;
		/* 6A8h */	int field_6A8;
		/* 6ACh */	int field_6AC;
		/* 6B0h */	float field_6B0;
		/* 6B4h */	int field_6B4;
		/* 6B8h */	eastl::vector<int> field_6B8;
		/* 6CCh */	bool field_6CC;
		/* 6D0h */	int field_6D0;
		/* 6D4h */	eastl::fixed_vector<cCreatureAbility*, 20> mAbilities;  //TODO abilities
		/* 73Ch */	eastl::fixed_vector<cCreatureAbility*, 20> field_73C;  // maybe food-related abilities?
		/* 7A4h */	eastl::fixed_vector<int, 20> field_7A4;
		/* 80Ch */	bool field_80C;
		/* 80Dh */	bool field_80D;
		/* 810h */	eastl::fixed_vector<int, 20> field_810;
		/* 878h */	eastl::fixed_vector<int, 20> field_878;
		/* 8E0h */	eastl::fixed_vector<int, 20> field_8E0;
		/* 948h */	eastl::fixed_vector<int, 20> field_948;
		/* 9B0h */	eastl::fixed_vector<int, 20> field_9B0;
	};
	ASSERT_SIZE(cSpeciesProfile, 0xA18);

	namespace Addresses(cSpeciesProfile) 
	{
		DeclareAddress(GetSpeciesName);  // 0x4DA1C0 0x4DA390
		DeclareAddress(GetSpeciesName);  // 0x4DA1C0 0x4DA390
	}
}