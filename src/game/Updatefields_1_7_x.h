#ifdef _VERSION_1_7_0_

#pragma once
/* UpdateFields.h
 *
 * Copyright (C) 2004 Wow Daemon
 * Copyright (C) 2005 MaNGOS <https://opensvn.csie.org/traccgi/MaNGOS/trac.cgi/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _UPDATEFIELDS_H
#define _UPDATEFIELDS_H

enum DamageType
{
DMG_PHYSICAL = 0,
DMG_HOLY,
DMG_FIRE,
DMG_NATURE,
DMG_FROST,
DMG_SHADOW,
DMG_ARCANE
};

#define ver 171

/*
#if ver <171
enum ObjectUpdateFields
{
OBJECT_FIELD_GUID = 0, // 2 4 1
OBJECT_FIELD_TYPE = 2, // 1 1 1
OBJECT_FIELD_ENTRY = 3, // 1 1 1
OBJECT_FIELD_SCALE_X = 4, // 1 3 1
OBJECT_FIELD_PADDING = 5, // 1 1 0
OBJECT_END = 6
};

enum ItemUpdateFields
{
ITEM_FIELD_OWNER = OBJECT_END, // 2 4 1
ITEM_FIELD_CONTAINED = 8, // 2 4 1
ITEM_FIELD_CREATOR = 10, // 2 4 1
ITEM_FIELD_GIFTCREATOR = 12, // 2 4 1
ITEM_FIELD_STACK_COUNT = 14, // 1 1 20
ITEM_FIELD_DURATION = 15, // 1 1 20
ITEM_FIELD_SPELL_CHARGES = 16, // 5 1 20
ITEM_FIELD_FLAGS = 21, // 1 2 1
ITEM_FIELD_ENCHANTMENT = 22, // 21 1 1
ITEM_FIELD_PROPERTY_SEED = 43, // 1 1 1
ITEM_FIELD_RANDOM_PROPERTIES_ID = 44, // 1 1 1
ITEM_FIELD_ITEM_TEXT_ID = 45, // 1 1 4
ITEM_FIELD_DURABILITY = 46, // 1 1 20
ITEM_FIELD_MAXDURABILITY = 47, // 1 1 20
ITEM_END = 48
};

enum ContainerUpdateFields
{
CONTAINER_FIELD_NUM_SLOTS = ITEM_END, // 1 1 1
CONTAINER_ALIGN_PAD = 49, // 1 5 0
CONTAINER_FIELD_SLOT_1 = 50, // 40 4 1
CONTAINER_END = 90
};

enum UnitUpdateFields
{
UNIT_FIELD_CHARM = OBJECT_END, // 2 4 1
UNIT_FIELD_SUMMON = 8, // 2 4 1
UNIT_FIELD_CHARMEDBY = 10, // 2 4 1
UNIT_FIELD_SUMMONEDBY = 12, // 2 4 1
UNIT_FIELD_CREATEDBY = 14, // 2 4 1
UNIT_FIELD_TARGET = 16, // 2 4 1
UNIT_FIELD_PERSUADED = 18, // 2 4 1
UNIT_FIELD_CHANNEL_OBJECT = 20, // 2 4 1
UNIT_FIELD_HEALTH = 22, // 1 1 256
UNIT_FIELD_POWER1 = 23, // 1 1 1
UNIT_FIELD_POWER2 = 24, // 1 1 1
UNIT_FIELD_POWER3 = 25, // 1 1 1
UNIT_FIELD_POWER4 = 26, // 1 1 1
UNIT_FIELD_POWER5 = 27, // 1 1 1
UNIT_FIELD_MAXHEALTH = 28, // 1 1 256
UNIT_FIELD_MAXPOWER1 = 29, // 1 1 1
UNIT_FIELD_MAXPOWER2 = 30, // 1 1 1
UNIT_FIELD_MAXPOWER3 = 31, // 1 1 1
UNIT_FIELD_MAXPOWER4 = 32, // 1 1 1
UNIT_FIELD_MAXPOWER5 = 33, // 1 1 1
UNIT_FIELD_LEVEL = 34, // 1 1 1
UNIT_FIELD_FACTIONTEMPLATE = 35, // 1 1 1
UNIT_FIELD_BYTES_0 = 36, // 1 5 1
UNIT_VIRTUAL_ITEM_SLOT_DISPLAY = 37, // 3 1 1
UNIT_VIRTUAL_ITEM_INFO = 40, // 6 5 1
UNIT_FIELD_FLAGS = 46, // 1 1 1
UNIT_FIELD_AURA = 47, // 56 1 1
UNIT_FIELD_AURALEVELS = 103, // 10 5 1
UNIT_FIELD_AURAAPPLICATIONS = 113, // 10 5 1
UNIT_FIELD_AURAFLAGS = 123, // 7 5 1
UNIT_FIELD_AURASTATE = 130, // 1 1 1
UNIT_FIELD_BASEATTACKTIME = 131, // 2 1 1
UNIT_FIELD_RANGEDATTACKTIME = 133, // 1 1 2
UNIT_FIELD_BOUNDINGRADIUS = 134, // 1 3 1
UNIT_FIELD_COMBATREACH = 135, // 1 3 1
UNIT_FIELD_DISPLAYID = 136, // 1 1 1
UNIT_FIELD_NATIVEDISPLAYID = 137, // 1 1 1
UNIT_FIELD_MOUNTDISPLAYID = 138, // 1 1 1
UNIT_FIELD_MINDAMAGE = 139, // 1 3 38
UNIT_FIELD_MAXDAMAGE = 140, // 1 3 38
UNIT_FIELD_MINOFFHANDDAMAGE = 141, // 1 3 38
UNIT_FIELD_MAXOFFHANDDAMAGE = 142, // 1 3 38
UNIT_FIELD_BYTES_1 = 143, // 1 5 1
UNIT_FIELD_PETNUMBER = 144, // 1 1 1
UNIT_FIELD_PET_NAME_TIMESTAMP = 145, // 1 1 1
UNIT_FIELD_PETEXPERIENCE = 146, // 1 1 4
UNIT_FIELD_PETNEXTLEVELEXP = 147, // 1 1 4
UNIT_DYNAMIC_FLAGS = 148, // 1 1 256
UNIT_CHANNEL_SPELL = 149, // 1 1 1
UNIT_MOD_CAST_SPEED = 150, // 1 1 1
UNIT_CREATED_BY_SPELL = 151, // 1 1 1
UNIT_NPC_FLAGS = 152, // 1 1 1
UNIT_NPC_EMOTESTATE = 153, // 1 1 1
UNIT_TRAINING_POINTS = 154, // 1 2 4
// UQ1: Not sure of these...
UNIT_FIELD_STAT0 = 155, // 1 1 6
UNIT_FIELD_STR = 155,
UNIT_FIELD_STAT1 = 156, // 1 1 6
UNIT_FIELD_AGILITY = 156,
UNIT_FIELD_STAT2 = 157, // 1 1 6
UNIT_FIELD_STAMINA = 157,
UNIT_FIELD_STAT3 = 158, // 1 1 6
UNIT_FIELD_SPIRIT = 158,
UNIT_FIELD_STAT4 = 159, // 1 1 6
UNIT_FIELD_ARMOR = 159,
// END UQ1...
UNIT_FIELD_RESISTANCES = 160, // 7 1 38
UNIT_FIELD_ATTACKPOWER = 167, // 1 1 6
UNIT_FIELD_BASE_MANA = 168, // 1 1 6
UNIT_FIELD_ATTACK_POWER_MODS = 169, // 1 2 6
UNIT_FIELD_BYTES_2 = 170, // 1 5 1
UNIT_FIELD_RANGEDATTACKPOWER = 171, // 1 1 6
UNIT_FIELD_RANGED_ATTACK_POWER_MODS = 172, // 1 2 6
UNIT_FIELD_MINRANGEDDAMAGE = 173, // 1 3 6
UNIT_FIELD_MAXRANGEDDAMAGE = 174, // 1 3 6

UNIT_FIELD_POWER_COST_MODIFIER, // new 170?
UNIT_FIELD_POWER_COST_MULTIPLIER, // new 170?

UNIT_FIELD_PADDING = 175, // 1 1 0 // changed in 170?
UNIT_END = 176
};

enum PlayerUpdateFields
{
PLAYER_SELECTION = UNIT_END,// 2 4 1
PLAYER_SELECTION__HI,
PLAYER_DUEL_ARBITER, // 2 4 1
PLAYER_DUEL_ARBITER__HI,
PLAYER_FLAGS, // 1 1 1 = 180
PLAYER_GUILDID, // 1 1 1
PLAYER_GUILDRANK, // 1 1 1
PLAYER_BYTES, // 1 5 1 = 183
PLAYER_BYTES_2, // 1 5 1
PLAYER_BYTES_3, // 1 5 1
PLAYER_DUEL_TEAM, // 1 1 1
PLAYER_GUILD_TIMESTAMP, // 1 1 1 = 187
//-------------------------------------------
PLAYER_QUEST_LOG_1_1, // 1 1 64
PLAYER_QUEST_LOG_1_2, // 2 1 2
PLAYER_QUEST_LOG_1_2__HI,
//
PLAYER_QUEST_LOG_2_1, // 1 1 64 = 191
PLAYER_QUEST_LOG_2_2, // 2 1 2
PLAYER_QUEST_LOG_2_2__HI,
//
PLAYER_QUEST_LOG_3_1, // 1 1 64 = 194
PLAYER_QUEST_LOG_3_2, // 2 1 2
PLAYER_QUEST_LOG_3_2__HI,
//
PLAYER_QUEST_LOG_4_1, // 1 1 64 = 197
PLAYER_QUEST_LOG_4_2, // 2 1 2
PLAYER_QUEST_LOG_4_2__HI,
//
PLAYER_QUEST_LOG_5_1, // 1 1 64 = 200
PLAYER_QUEST_LOG_5_2, // 2 1 2
PLAYER_QUEST_LOG_5_2__HI,
//
PLAYER_QUEST_LOG_6_1, // 1 1 64 = 203
PLAYER_QUEST_LOG_6_2, // 2 1 2
PLAYER_QUEST_LOG_6_2__HI,
//
PLAYER_QUEST_LOG_7_1, // 1 1 64 = 206
PLAYER_QUEST_LOG_7_2, // 2 1 2
PLAYER_QUEST_LOG_7_2__HI,
//
PLAYER_QUEST_LOG_8_1, // 1 1 64 = 209
PLAYER_QUEST_LOG_8_2, // 2 1 2
PLAYER_QUEST_LOG_8_2__HI,
//
PLAYER_QUEST_LOG_9_1, // 1 1 64 = 212
PLAYER_QUEST_LOG_9_2, // 2 1 2
PLAYER_QUEST_LOG_9_2__HI,
//
PLAYER_QUEST_LOG_10_1, // 1 1 64 = 215
PLAYER_QUEST_LOG_10_2, // 2 1 2
PLAYER_QUEST_LOG_10_2__HI,
//
PLAYER_QUEST_LOG_11_1, // 1 1 64 = 218
PLAYER_QUEST_LOG_11_2, // 2 1 2
PLAYER_QUEST_LOG_11_2__HI,
//
PLAYER_QUEST_LOG_12_1, // 1 1 64 = 221
PLAYER_QUEST_LOG_12_2, // 2 1 2
PLAYER_QUEST_LOG_12_2__HI,
//
PLAYER_QUEST_LOG_13_1, // 1 1 64 = 224
PLAYER_QUEST_LOG_13_2, // 2 1 2
PLAYER_QUEST_LOG_13_2__HI,
//
PLAYER_QUEST_LOG_14_1, // 1 1 64 = 227
PLAYER_QUEST_LOG_14_2, // 2 1 2
PLAYER_QUEST_LOG_14_2__HI,
//
PLAYER_QUEST_LOG_15_1, // 1 1 64 = 230
PLAYER_QUEST_LOG_15_2, // 2 1 2
PLAYER_QUEST_LOG_15_2__HI,
//
PLAYER_QUEST_LOG_16_1, // 1 1 64 = 233
PLAYER_QUEST_LOG_16_2, // 2 1 2
PLAYER_QUEST_LOG_16_2__HI,
//
PLAYER_QUEST_LOG_17_1, // 1 1 64 = 236
PLAYER_QUEST_LOG_17_2, // 2 1 2
PLAYER_QUEST_LOG_17_2__HI,
//
PLAYER_QUEST_LOG_18_1, // 1 1 64 = 239
PLAYER_QUEST_LOG_18_2, // 2 1 2
PLAYER_QUEST_LOG_18_2__HI,
//
PLAYER_QUEST_LOG_19_1, // 1 1 64 = 242
PLAYER_QUEST_LOG_19_2, // 2 1 2
PLAYER_QUEST_LOG_19_2__HI,
//
PLAYER_QUEST_LOG_20_1, // 1 1 64 = 245
PLAYER_QUEST_LOG_20_2, // 2 1 2
PLAYER_QUEST_LOG_20_2__HI,
//-----------------------------------------

#define PLAYER_VISIBLE_ITEM_DEF(n) 
PLAYER_VISIBLE_ITEM_##n##_CREATOR, \
PLAYER_VISIBLE_ITEM_##n##_CREATOR__HI, \
PLAYER_VISIBLE_ITEM_##n##_0, \ //* 8 1 1
PLAYER_VISIBLE_ITEM_##n##_1, \
PLAYER_VISIBLE_ITEM_##n##_2, \
PLAYER_VISIBLE_ITEM_##n##_3, \
PLAYER_VISIBLE_ITEM_##n##_4, \
PLAYER_VISIBLE_ITEM_##n##_5, \
PLAYER_VISIBLE_ITEM_##n##_6, \
PLAYER_VISIBLE_ITEM_##n##_7, \
PLAYER_VISIBLE_ITEM_##n##_PROPERTIES, \ ///* 1 2 1
PLAYER_VISIBLE_ITEM_##n##_PAD
// !!! IMPORTANT CHANGE THIS AFTER RESIZING VISIBLE ITEM !!!
#define PLAYER_VISIBLE_ITEM_SIZE 12
// !!! !!! !!! !!! !!! !!! !!! !!! !!! !!! !!! !!! !!! !!!

PLAYER_VISIBLE_ITEM_DEF(1),
PLAYER_VISIBLE_ITEM_DEF(2),
PLAYER_VISIBLE_ITEM_DEF(3),
PLAYER_VISIBLE_ITEM_DEF(4),
PLAYER_VISIBLE_ITEM_DEF(5),
PLAYER_VISIBLE_ITEM_DEF(6),
PLAYER_VISIBLE_ITEM_DEF(7),
PLAYER_VISIBLE_ITEM_DEF(8),
PLAYER_VISIBLE_ITEM_DEF(9),
PLAYER_VISIBLE_ITEM_DEF(10),
PLAYER_VISIBLE_ITEM_DEF(11),
PLAYER_VISIBLE_ITEM_DEF(12),
PLAYER_VISIBLE_ITEM_DEF(14),
PLAYER_VISIBLE_ITEM_DEF(13),
PLAYER_VISIBLE_ITEM_DEF(15),
PLAYER_VISIBLE_ITEM_DEF(16),
PLAYER_VISIBLE_ITEM_DEF(17),
PLAYER_VISIBLE_ITEM_DEF(18),
PLAYER_VISIBLE_ITEM_DEF(19),

//PLAYER_FIELD_PAD_0, // 1 1 0
PLAYER_FIELD_INV_SLOT_HEAD, // 46 4 1 - equipped inventory and first bag
PLAYER_FIELD_PACK_SLOT_1 = PLAYER_FIELD_INV_SLOT_HEAD + 46, // 32 4 2
PLAYER_FIELD_BANK_SLOT_1 = PLAYER_FIELD_PACK_SLOT_1 + 32, // 48 4 2
PLAYER_FIELD_BANKBAG_SLOT_1 = PLAYER_FIELD_BANK_SLOT_1 + 48, // 12 4 2
PLAYER_FIELD_VENDORBUYBACK_SLOT = PLAYER_FIELD_BANKBAG_SLOT_1 + 12, // 2 =
4 2
//-------------------------------------------
PLAYER_FIELD_VENDORBUYBACK_SLOT__HI,
PLAYER_FARSIGHT, // 2 4 2
PLAYER_FARSIGHT__HI,
PLAYER__FIELD_COMBO_TARGET, // 2 4 2
PLAYER__FIELD_COMBO_TARGET__HI,
PLAYER_FIELD_BUYBACK_NPC, // 2 4 2
PLAYER_FIELD_BUYBACK_NPC__HI,
//-------------------------------------------
PLAYER_XP, // 1 1 2
PLAYER_NEXT_LEVEL_XP, // 1 1 2
PLAYER_SKILL_INFO_1_1, // 384 2 2
PLAYER_CHARACTER_POINTS1 = PLAYER_SKILL_INFO_1_1 + 384, // 1 1 2 -- talen=
t
points
PLAYER_CHARACTER_POINTS2, // 1 1 2 -- free professions
PLAYER_TRACK_CREATURES, // 1 1 2
PLAYER_TRACK_RESOURCES, // 1 1 2
PLAYER_BLOCK_PERCENTAGE, // 1 3 2
PLAYER_DODGE_PERCENTAGE, // 1 3 2
PLAYER_PARRY_PERCENTAGE, // 1 3 2
PLAYER_CRIT_PERCENTAGE, // 1 3 2
PLAYER_RANGED_CRIT_PERCENTAGE, // 1 3 2 ! new 1.5.0
PLAYER_EXPLORED_ZONES_1, // 64 5 2
PLAYER_REST_STATE_EXPERIENCE = PLAYER_EXPLORED_ZONES_1 + 64, // 1 1 2
PLAYER_FIELD_COINAGE, // 1 1 2
//-------------------------------------------
PLAYER_FIELD_POSSTAT0, // 1 1 2
PLAYER_FIELD_POSSTAT1, // 1 1 2
PLAYER_FIELD_POSSTAT2, // 1 1 2
PLAYER_FIELD_POSSTAT3, // 1 1 2
PLAYER_FIELD_POSSTAT4, // 1 1 2
//
PLAYER_FIELD_NEGSTAT0, // 1 1 2
PLAYER_FIELD_NEGSTAT1, // 1 1 2
PLAYER_FIELD_NEGSTAT2, // 1 1 2
PLAYER_FIELD_NEGSTAT3, // 1 1 2
PLAYER_FIELD_NEGSTAT4, // 1 1 2
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE, // 7 1 2
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE = 
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE + 7, // 7 1 2
PLAYER_FIELD_MOD_DAMAGE_DONE_POS = PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIV=
E +
7, // 7 1 2
PLAYER_FIELD_MOD_DAMAGE_DONE_NEG = PLAYER_FIELD_MOD_DAMAGE_DONE_POS + 7, =
//
7 1 2
PLAYER_FIELD_MOD_DAMAGE_DONE_PCT = PLAYER_FIELD_MOD_DAMAGE_DONE_NEG + 7, =
//
7 1 2
PLAYER_FIELD_BYTES = PLAYER_FIELD_MOD_DAMAGE_DONE_PCT + 7, // 1 5 2
PLAYER_AMMO_ID, // 1 1 2
PLAYER_SELF_RES_SPELL, // -- new in 1.6.x
PLAYER_FIELD_PVP_MEDALS, // 1 1 2
PLAYER_FIELD_BUYBACK_ITEM_ID, // 1 1 2
PLAYER_FIELD_BUYBACK_RANDOM_PROPERTIES_ID, // 1 1 2
PLAYER_FIELD_BUYBACK_SEED, // 1 1 2
PLAYER_FIELD_BUYBACK_PRICE, // 1 1 2
PLAYER_FIELD_BUYBACK_DURABILITY, // 1 1 2
PLAYER_FIELD_BUYBACK_COUNT, // 1 1 2
PLAYER_FIELD_SESSION_KILLS,
PLAYER_FIELD_YESTERDAY_KILLS, // Below this point update values sizes are
uncertain
PLAYER_FIELD_LAST_WEEK_KILLS, // but order is preserved for sure
PLAYER_FIELD_THIS_WEEK_KILLS, // -- new in 1.6.x
PLAYER_FIELD_THIS_WEEK_CONTRIBUTION, // -- new in 1.6.x
PLAYER_FIELD_LIFETIME_HONORBALE_KILLS,
PLAYER_FIELD_LIFETIME_DISHONORBALE_KILLS,
PLAYER_FIELD_YESTERDAY_CONTRIBUTION,
PLAYER_FIELD_LAST_WEEK_CONTRIBUTION,
PLAYER_FIELD_LAST_WEEK_RANK,
PLAYER_FIELD_BYTES2, // -- new in 1.6.x
PLAYER_FIELD_PADDING, // 1 1 0
PLAYER_END
};

enum GameObjectUpdateFields
{
GAMEOBJECT_CREATED_BY = OBJECT_END, // 1 1 1
GAMEOBJECT_CREATED_BY__HI = 7, // 1 1 1
GAMEOBJECT_DISPLAYID = 8, // 1 1 1
GAMEOBJECT_FLAGS = 9, // 1 1 1
GAMEOBJECT_ROTATION = 10, // 4 3 1
GAMEOBJECT_STATE = 14, // 1 1 1
GAMEOBJECT_TIMESTAMP = 15, // 1 1 1
GAMEOBJECT_POS_X = 16, // 1 3 1
GAMEOBJECT_POS_Y = 17, // 1 3 1
GAMEOBJECT_POS_Z = 18, // 1 3 1
GAMEOBJECT_FACING = 19, // 1 3 1
GAMEOBJECT_DYN_FLAGS = 20, // 1 1 256
GAMEOBJECT_FACTION = 21, // 1 1 1
GAMEOBJECT_TYPE_ID = 22, // 1 1 1
GAMEOBJECT_LEVEL = 23, // 1 1 1
GAMEOBJECT_END = 24
};

enum DynamicObjectUpdateFields
{
DYNAMICOBJECT_CASTER = OBJECT_END, // 2 4 1
DYNAMICOBJECT_BYTES = 8, // 1 5 1
DYNAMICOBJECT_SPELLID = 9, // 1 1 1
DYNAMICOBJECT_RADIUS = 10, // 1 3 1
DYNAMICOBJECT_POS_X = 11, // 1 3 1
DYNAMICOBJECT_POS_Y = 12, // 1 3 1
DYNAMICOBJECT_POS_Z = 13, // 1 3 1
DYNAMICOBJECT_FACING = 14, // 1 3 1
DYNAMICOBJECT_PAD = 15, // 1 5 1
DYNAMICOBJECT_END = 16
};

enum CorpseUpdateFields
{
CORPSE_FIELD_OWNER = OBJECT_END, // 2 4 1
CORPSE_FIELD_FACING = 8, // 1 3 1
CORPSE_FIELD_POS_X = 9, // 1 3 1
CORPSE_FIELD_POS_Y = 10, // 1 3 1
CORPSE_FIELD_POS_Z = 11, // 1 3 1
CORPSE_FIELD_DISPLAY_ID = 12, // 1 1 1
CORPSE_FIELD_ITEM = 13, // 19 1 1
CORPSE_FIELD_BYTES_1 = 32, // 1 5 1
CORPSE_FIELD_BYTES_2 = 33, // 1 5 1
CORPSE_FIELD_GUILD = 34, // 1 1 1
CORPSE_FIELD_FLAGS = 35, // 1 1 1
CORPSE_END = 36
};
#else // ver >= 171
*/
enum ObjectUpdateFields
{
OBJECT_FIELD_GUID = 0,
OBJECT_FIELD_TYPE = OBJECT_FIELD_GUID+2,
OBJECT_FIELD_ENTRY,
OBJECT_FIELD_SCALE_X,
OBJECT_FIELD_PADDING,
OBJECT_END
};
enum ItemUpdateFields
{
ITEM_FIELD_OWNER = OBJECT_FIELD_PADDING+1, // 6 7
ITEM_FIELD_CONTAINED = ITEM_FIELD_OWNER+2, // 8 9
ITEM_FIELD_CREATOR = ITEM_FIELD_CONTAINED+2, // 10 11
ITEM_FIELD_GIFTCREATOR = ITEM_FIELD_CREATOR+2, // 12 13
ITEM_FIELD_STACK_COUNT = ITEM_FIELD_GIFTCREATOR+2, // 14
ITEM_FIELD_DURATION, // 15
ITEM_FIELD_SPELL_CHARGES, // 16 17 18 19 20
ITEM_FIELD_FLAGS = ITEM_FIELD_SPELL_CHARGES+5, // 21
ITEM_FIELD_ENCHANTMENT, // 22
ITEM_FIELD_PROPERTY_SEED = ITEM_FIELD_ENCHANTMENT+21, // 23 - 43
ITEM_FIELD_RANDOM_PROPERTIES_ID, // 44
ITEM_FIELD_ITEM_TEXT_ID, // 45
ITEM_FIELD_DURABILITY, // 46
ITEM_FIELD_MAXDURABILITY, // 47
ITEM_END
};
enum ContainerUpdateFields
{
CONTAINER_FIELD_NUM_SLOTS = ITEM_FIELD_MAXDURABILITY+1,
CONTAINER_ALIGN_PAD,
CONTAINER_FIELD_SLOT_1,
CONTAINER_END
};
enum UnitUpdateFields
{
UNIT_FIELD_CHARM = OBJECT_FIELD_PADDING+1,
UNIT_FIELD_SUMMON = UNIT_FIELD_CHARM+2,
UNIT_FIELD_CHARMEDBY = UNIT_FIELD_SUMMON+2,
UNIT_FIELD_SUMMONEDBY = UNIT_FIELD_CHARMEDBY+2,
UNIT_FIELD_CREATEDBY = UNIT_FIELD_SUMMONEDBY+2,
UNIT_FIELD_TARGET = UNIT_FIELD_CREATEDBY+2,
UNIT_FIELD_PERSUADED = UNIT_FIELD_TARGET+2,
UNIT_FIELD_CHANNEL_OBJECT = UNIT_FIELD_PERSUADED+2,
UNIT_FIELD_HEALTH = UNIT_FIELD_CHANNEL_OBJECT+2,
UNIT_FIELD_POWER1,
UNIT_FIELD_POWER2,
UNIT_FIELD_POWER3,
UNIT_FIELD_POWER4,
UNIT_FIELD_POWER5,
UNIT_FIELD_MAXHEALTH,
UNIT_FIELD_MAXPOWER1,
UNIT_FIELD_MAXPOWER2,
UNIT_FIELD_MAXPOWER3,
UNIT_FIELD_MAXPOWER4,
UNIT_FIELD_MAXPOWER5,
UNIT_FIELD_LEVEL,
UNIT_FIELD_FACTIONTEMPLATE,
UNIT_FIELD_BYTES_0,
UNIT_VIRTUAL_ITEM_SLOT_DISPLAY,
UNIT_VIRTUAL_ITEM_SLOT_DISPLAY_01, // UQ1: ???
UNIT_VIRTUAL_ITEM_SLOT_DISPLAY_02, // UQ1: ???
UNIT_VIRTUAL_ITEM_INFO = UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+3,
UNIT_FIELD_FLAGS = UNIT_VIRTUAL_ITEM_INFO+6,
UNIT_FIELD_AURA,
UNIT_FIELD_AURAFLAGS = UNIT_FIELD_AURA + 64,
UNIT_FIELD_AURALEVELS = UNIT_FIELD_AURAFLAGS + 8,
UNIT_FIELD_AURAAPPLICATIONS = UNIT_FIELD_AURALEVELS + 8,
UNIT_FIELD_AURASTATE = UNIT_FIELD_AURAAPPLICATIONS + 16,
UNIT_FIELD_BASEATTACKTIME,
UNIT_FIELD_RANGEDATTACKTIME = UNIT_FIELD_BASEATTACKTIME+2,
UNIT_FIELD_BOUNDINGRADIUS,
UNIT_FIELD_COMBATREACH,
UNIT_FIELD_DISPLAYID,
UNIT_FIELD_NATIVEDISPLAYID,
UNIT_FIELD_MOUNTDISPLAYID,
UNIT_FIELD_MINDAMAGE,
UNIT_FIELD_MAXDAMAGE,
UNIT_FIELD_MINOFFHANDDAMAGE,
UNIT_FIELD_MAXOFFHANDDAMAGE,
UNIT_FIELD_BYTES_1,
UNIT_FIELD_PETNUMBER,
UNIT_FIELD_PET_NAME_TIMESTAMP,
UNIT_FIELD_PETEXPERIENCE,
UNIT_FIELD_PETNEXTLEVELEXP,
UNIT_DYNAMIC_FLAGS,
UNIT_CHANNEL_SPELL,
UNIT_MOD_CAST_SPEED,
UNIT_CREATED_BY_SPELL,
UNIT_NPC_FLAGS,
UNIT_NPC_EMOTESTATE,
UNIT_TRAINING_POINTS,
//UNIT_FIELD_IQ
UNIT_FIELD_STAT0,
UNIT_FIELD_STR = UNIT_FIELD_STAT0,
UNIT_FIELD_STAT1,
UNIT_FIELD_AGILITY = UNIT_FIELD_STAT1,
UNIT_FIELD_STAT2,
UNIT_FIELD_STAMINA = UNIT_FIELD_STAT2,
UNIT_FIELD_STAT3,
UNIT_FIELD_SPIRIT = UNIT_FIELD_STAT3,
UNIT_FIELD_STAT4,
UNIT_FIELD_IQ = UNIT_FIELD_STAT4,
UNIT_FIELD_ARMOR = UNIT_FIELD_STAT4, // UQ1: I dont think this is correct! Was IQ +1 in old code...
UNIT_FIELD_RESISTANCES,
UNIT_FIELD_RESISTANCES_01,
UNIT_FIELD_RESISTANCES_02,
UNIT_FIELD_RESISTANCES_03,
UNIT_FIELD_RESISTANCES_04,
UNIT_FIELD_RESISTANCES_05,
UNIT_FIELD_RESISTANCES_06,
UNIT_FIELD_ATTACKPOWER = UNIT_FIELD_RESISTANCES+7,
UNIT_FIELD_BASE_MANA,
UNIT_FIELD_BASE_HEALTH,
UNIT_FIELD_ATTACK_POWER_MODS,
UNIT_FIELD_BYTES_2,
UNIT_FIELD_RANGEDATTACKPOWER,
UNIT_FIELD_RANGED_ATTACK_POWER_MODS,
UNIT_FIELD_MINRANGEDDAMAGE,
UNIT_FIELD_MAXRANGEDDAMAGE,
UNIT_FIELD_POWER_COST_MODIFIER,
UNIT_FIELD_POWER_COST_MULTIPLIER,
UNIT_FIELD_PADDING,
UNIT_END
};
#define PLAYER_VISIBLE_ITEM_SIZE 12
enum PlayerUpdateFields
{
PLAYER_SELECTION = UNIT_FIELD_PADDING+12+1,
PLAYER_DUEL_ARBITER = PLAYER_SELECTION+2,
PLAYER_FLAGS = PLAYER_DUEL_ARBITER+2,
PLAYER_GUILDID,
PLAYER_GUILDRANK,
PLAYER_BYTES,
PLAYER_BYTES_2,
PLAYER_BYTES_3,
PLAYER_DUEL_TEAM,
PLAYER_GUILD_TIMESTAMP,
PLAYER_QUEST_LOG_1_1,
PLAYER_QUEST_LOG_1_2,
PLAYER_QUEST_LOG_2_1 = PLAYER_QUEST_LOG_1_2+2,
PLAYER_QUEST_LOG_2_2,
PLAYER_QUEST_LOG_3_1 = PLAYER_QUEST_LOG_2_2+2,
PLAYER_QUEST_LOG_3_2,
PLAYER_QUEST_LOG_4_1 = PLAYER_QUEST_LOG_3_2+2,
PLAYER_QUEST_LOG_4_2,
PLAYER_QUEST_LOG_5_1 = PLAYER_QUEST_LOG_4_2+2,
PLAYER_QUEST_LOG_5_2,
PLAYER_QUEST_LOG_6_1 = PLAYER_QUEST_LOG_5_2+2,
PLAYER_QUEST_LOG_6_2,
PLAYER_QUEST_LOG_7_1 = PLAYER_QUEST_LOG_6_2+2,
PLAYER_QUEST_LOG_7_2,
PLAYER_QUEST_LOG_8_1 = PLAYER_QUEST_LOG_7_2+2,
PLAYER_QUEST_LOG_8_2,
PLAYER_QUEST_LOG_9_1 = PLAYER_QUEST_LOG_8_2+2,
PLAYER_QUEST_LOG_9_2,
PLAYER_QUEST_LOG_10_1 = PLAYER_QUEST_LOG_9_2+2,
PLAYER_QUEST_LOG_10_2,
PLAYER_QUEST_LOG_11_1 = PLAYER_QUEST_LOG_10_2+2,
PLAYER_QUEST_LOG_11_2,
PLAYER_QUEST_LOG_12_1 = PLAYER_QUEST_LOG_11_2+2,
PLAYER_QUEST_LOG_12_2,
PLAYER_QUEST_LOG_13_1 = PLAYER_QUEST_LOG_12_2+2,
PLAYER_QUEST_LOG_13_2,
PLAYER_QUEST_LOG_14_1 = PLAYER_QUEST_LOG_13_2+2,
PLAYER_QUEST_LOG_14_2,
PLAYER_QUEST_LOG_15_1 = PLAYER_QUEST_LOG_14_2+2,
PLAYER_QUEST_LOG_15_2,
PLAYER_QUEST_LOG_16_1 = PLAYER_QUEST_LOG_15_2+2,
PLAYER_QUEST_LOG_16_2,
PLAYER_QUEST_LOG_17_1 = PLAYER_QUEST_LOG_16_2+2,
PLAYER_QUEST_LOG_17_2,
PLAYER_QUEST_LOG_18_1 = PLAYER_QUEST_LOG_17_2+2,
PLAYER_QUEST_LOG_18_2,
PLAYER_QUEST_LOG_19_1 = PLAYER_QUEST_LOG_18_2+2,
PLAYER_QUEST_LOG_19_2,
PLAYER_QUEST_LOG_20_1 = PLAYER_QUEST_LOG_19_2+2,
PLAYER_QUEST_LOG_20_2,
PLAYER_VISIBLE_ITEM_1_CREATOR = PLAYER_QUEST_LOG_20_2+2,
PLAYER_VISIBLE_ITEM_1_0 = PLAYER_VISIBLE_ITEM_1_CREATOR+2,
PLAYER_VISIBLE_ITEM_1_PROPERTIES = PLAYER_VISIBLE_ITEM_1_0+8,
PLAYER_VISIBLE_ITEM_1_PAD,
PLAYER_VISIBLE_ITEM_2_CREATOR,
PLAYER_VISIBLE_ITEM_2_0 = PLAYER_VISIBLE_ITEM_2_CREATOR+2,
PLAYER_VISIBLE_ITEM_2_PROPERTIES = PLAYER_VISIBLE_ITEM_2_0+8,
PLAYER_VISIBLE_ITEM_2_PAD,
PLAYER_VISIBLE_ITEM_3_CREATOR,
PLAYER_VISIBLE_ITEM_3_0 = PLAYER_VISIBLE_ITEM_3_CREATOR+2,
PLAYER_VISIBLE_ITEM_3_PROPERTIES = PLAYER_VISIBLE_ITEM_3_0+8,
PLAYER_VISIBLE_ITEM_3_PAD,
PLAYER_VISIBLE_ITEM_4_CREATOR,
PLAYER_VISIBLE_ITEM_4_0 = PLAYER_VISIBLE_ITEM_4_CREATOR+2,
PLAYER_VISIBLE_ITEM_4_PROPERTIES = PLAYER_VISIBLE_ITEM_4_0+8,
PLAYER_VISIBLE_ITEM_4_PAD,
PLAYER_VISIBLE_ITEM_5_CREATOR,
PLAYER_VISIBLE_ITEM_5_0 = PLAYER_VISIBLE_ITEM_5_CREATOR+2,
PLAYER_VISIBLE_ITEM_5_PROPERTIES = PLAYER_VISIBLE_ITEM_5_0+8,
PLAYER_VISIBLE_ITEM_5_PAD,
PLAYER_VISIBLE_ITEM_6_CREATOR,
PLAYER_VISIBLE_ITEM_6_0 = PLAYER_VISIBLE_ITEM_6_CREATOR+2,
PLAYER_VISIBLE_ITEM_6_PROPERTIES = PLAYER_VISIBLE_ITEM_6_0+8,
PLAYER_VISIBLE_ITEM_6_PAD,
PLAYER_VISIBLE_ITEM_7_CREATOR,
PLAYER_VISIBLE_ITEM_7_0 = PLAYER_VISIBLE_ITEM_7_CREATOR+2,
PLAYER_VISIBLE_ITEM_7_PROPERTIES = PLAYER_VISIBLE_ITEM_7_0+8,
PLAYER_VISIBLE_ITEM_7_PAD,
PLAYER_VISIBLE_ITEM_8_CREATOR,
PLAYER_VISIBLE_ITEM_8_0 = PLAYER_VISIBLE_ITEM_8_CREATOR+2,
PLAYER_VISIBLE_ITEM_8_PROPERTIES = PLAYER_VISIBLE_ITEM_8_0+8,
PLAYER_VISIBLE_ITEM_8_PAD,
PLAYER_VISIBLE_ITEM_9_CREATOR,
PLAYER_VISIBLE_ITEM_9_0 = PLAYER_VISIBLE_ITEM_9_CREATOR+2,
PLAYER_VISIBLE_ITEM_9_PROPERTIES = PLAYER_VISIBLE_ITEM_9_0+8,
PLAYER_VISIBLE_ITEM_9_PAD,
PLAYER_VISIBLE_ITEM_10_CREATOR,
PLAYER_VISIBLE_ITEM_10_0 = PLAYER_VISIBLE_ITEM_10_CREATOR+2,
PLAYER_VISIBLE_ITEM_10_PROPERTIES = PLAYER_VISIBLE_ITEM_10_0+8,
PLAYER_VISIBLE_ITEM_10_PAD,
PLAYER_VISIBLE_ITEM_11_CREATOR,
PLAYER_VISIBLE_ITEM_11_0 = PLAYER_VISIBLE_ITEM_11_CREATOR+2,
PLAYER_VISIBLE_ITEM_11_PROPERTIES = PLAYER_VISIBLE_ITEM_11_0+8,
PLAYER_VISIBLE_ITEM_11_PAD,
PLAYER_VISIBLE_ITEM_12_CREATOR,
PLAYER_VISIBLE_ITEM_12_0 = PLAYER_VISIBLE_ITEM_12_CREATOR+2,
PLAYER_VISIBLE_ITEM_12_PROPERTIES = PLAYER_VISIBLE_ITEM_12_0+8,
PLAYER_VISIBLE_ITEM_12_PAD,
PLAYER_VISIBLE_ITEM_13_CREATOR,
PLAYER_VISIBLE_ITEM_13_0 = PLAYER_VISIBLE_ITEM_13_CREATOR+2,
PLAYER_VISIBLE_ITEM_13_PROPERTIES = PLAYER_VISIBLE_ITEM_13_0+8,
PLAYER_VISIBLE_ITEM_13_PAD,
PLAYER_VISIBLE_ITEM_14_CREATOR,
PLAYER_VISIBLE_ITEM_14_0 = PLAYER_VISIBLE_ITEM_14_CREATOR+2,
PLAYER_VISIBLE_ITEM_14_PROPERTIES = PLAYER_VISIBLE_ITEM_14_0+8,
PLAYER_VISIBLE_ITEM_14_PAD,
PLAYER_VISIBLE_ITEM_15_CREATOR,
PLAYER_VISIBLE_ITEM_15_0 = PLAYER_VISIBLE_ITEM_15_CREATOR+2,
PLAYER_VISIBLE_ITEM_15_PROPERTIES = PLAYER_VISIBLE_ITEM_15_0+8,
PLAYER_VISIBLE_ITEM_15_PAD,
PLAYER_VISIBLE_ITEM_16_CREATOR,
PLAYER_VISIBLE_ITEM_16_0 = PLAYER_VISIBLE_ITEM_16_CREATOR+2,
PLAYER_VISIBLE_ITEM_16_PROPERTIES = PLAYER_VISIBLE_ITEM_16_0+8,
PLAYER_VISIBLE_ITEM_16_PAD,
PLAYER_VISIBLE_ITEM_17_CREATOR,
PLAYER_VISIBLE_ITEM_17_0 = PLAYER_VISIBLE_ITEM_17_CREATOR+2,
PLAYER_VISIBLE_ITEM_17_PROPERTIES = PLAYER_VISIBLE_ITEM_17_0+8,
PLAYER_VISIBLE_ITEM_17_PAD,
PLAYER_VISIBLE_ITEM_18_CREATOR,
PLAYER_VISIBLE_ITEM_18_0 = PLAYER_VISIBLE_ITEM_18_CREATOR+2,
PLAYER_VISIBLE_ITEM_18_PROPERTIES = PLAYER_VISIBLE_ITEM_18_0+8,
PLAYER_VISIBLE_ITEM_18_PAD,
PLAYER_VISIBLE_ITEM_19_CREATOR,
PLAYER_VISIBLE_ITEM_19_0 = PLAYER_VISIBLE_ITEM_19_CREATOR+2,
PLAYER_VISIBLE_ITEM_19_PROPERTIES = PLAYER_VISIBLE_ITEM_19_0+8,
PLAYER_VISIBLE_ITEM_19_PAD,
PLAYER_FIELD_INV_SLOT_HEAD,
PLAYER_FIELD_PACK_SLOT_1 = PLAYER_FIELD_INV_SLOT_HEAD+46,
PLAYER_FIELD_BANK_SLOT_1 = PLAYER_FIELD_PACK_SLOT_1+32,
PLAYER_FIELD_BANKBAG_SLOT_1 = PLAYER_FIELD_BANK_SLOT_1+48,
PLAYER_FIELD_VENDORBUYBACK_SLOT = PLAYER_FIELD_BANKBAG_SLOT_1+12,
PLAYER_FARSIGHT = PLAYER_FIELD_VENDORBUYBACK_SLOT+2,
PLAYER__FIELD_COMBO_TARGET = PLAYER_FARSIGHT+2,
PLAYER_FIELD_BUYBACK_NPC = PLAYER__FIELD_COMBO_TARGET+2,
PLAYER_XP = PLAYER_FIELD_BUYBACK_NPC+2,
PLAYER_NEXT_LEVEL_XP,
PLAYER_SKILL_INFO_1_1,
PLAYER_SKILL_INFO_1_1_381  = PLAYER_SKILL_INFO_1_1+381, //UQ1: ????
PLAYER_CHARACTER_POINTS1 = PLAYER_SKILL_INFO_1_1+384,
PLAYER_CHARACTER_POINTS2,
PLAYER_TRACK_CREATURES,
PLAYER_TRACK_RESOURCES,
PLAYER_BLOCK_PERCENTAGE,
PLAYER_DODGE_PERCENTAGE,
PLAYER_PARRY_PERCENTAGE,
PLAYER_CRIT_PERCENTAGE,
PLAYER_RANGED_CRIT_PERCENTAGE,
PLAYER_EXPLORED_ZONES_1,
PLAYER_REST_STATE_EXPERIENCE = PLAYER_EXPLORED_ZONES_1+64,
PLAYER_FIELD_COINAGE,
PLAYER_FIELD_POSSTAT0,
PLAYER_FIELD_POSSTAT1,
PLAYER_FIELD_POSSTAT2,
PLAYER_FIELD_POSSTAT3,
PLAYER_FIELD_POSSTAT4,
PLAYER_FIELD_NEGSTAT0,
PLAYER_FIELD_NEGSTAT1,
PLAYER_FIELD_NEGSTAT2,
PLAYER_FIELD_NEGSTAT3,
PLAYER_FIELD_NEGSTAT4,
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE,
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_01, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_02, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_03, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_04, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_05, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_06, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE = PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE+7,
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_01, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_02, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_03, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_04, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_05, // UQ1: ????
PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_06, // UQ1: ????
PLAYER_FIELD_MOD_DAMAGE_DONE_POS = PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE+7,
PLAYER_FIELD_MOD_DAMAGE_DONE_NEG = PLAYER_FIELD_MOD_DAMAGE_DONE_POS+7,
PLAYER_FIELD_MOD_DAMAGE_DONE_PCT = PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+7,
PLAYER_FIELD_BYTES = PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+7,
PLAYER_AMMO_ID,
PLAYER_SELF_RES_SPELL,
PLAYER_FIELD_PVP_MEDALS,
PLAYER_FIELD_BUYBACK_ITEM_ID,
PLAYER_FIELD_BUYBACK_RANDOM_PROPERTIES_ID,
PLAYER_FIELD_BUYBACK_SEED,
PLAYER_FIELD_BUYBACK_PRICE,
PLAYER_FIELD_BUYBACK_DURABILITY,
PLAYER_FIELD_BUYBACK_COUNT,
// Below this point update values sizes are uncertain
PLAYER_FIELD_SESSION_KILLS,
PLAYER_FIELD_YESTERDAY_KILLS,
PLAYER_FIELD_LAST_WEEK_KILLS,
PLAYER_FIELD_THIS_WEEK_KILLS,
PLAYER_FIELD_THIS_WEEK_CONTRIBUTION,
PLAYER_FIELD_LIFETIME_HONORBALE_KILLS,
PLAYER_FIELD_LIFETIME_DISHONORBALE_KILLS,
PLAYER_FIELD_YESTERDAY_CONTRIBUTION,
PLAYER_FIELD_LAST_WEEK_CONTRIBUTION,
PLAYER_FIELD_LAST_WEEK_RANK,
PLAYER_FIELD_BYTES2,
PLAYER_FIELD_PADDING,
PLAYER_END
};
enum GameObjectUpdateFields
{
//OBJECT_FIELD_GUID = 0,
//OBJECT_FIELD_TYPE = OBJECT_FIELD_GUID+2,
//OBJECT_FIELD_ENTRY,
//OBJECT_FIELD_SCALE_X,
//OBJECT_FIELD_PADDING,

OBJECT_FIELD_CREATED_BY = OBJECT_FIELD_PADDING+1, // =ED=E5=EF=F0=E8=EA=
//=E0=FF=ED=ED=FB=E9
GAMEOBJECT_DISPLAYID = OBJECT_FIELD_CREATED_BY+2,
GAMEOBJECT_FLAGS,
GAMEOBJECT_ROTATION,
GAMEOBJECT_STATE = GAMEOBJECT_ROTATION+4,
GAMEOBJECT_TIMESTAMP,
GAMEOBJECT_POS_X,
GAMEOBJECT_POS_Y,
GAMEOBJECT_POS_Z,
GAMEOBJECT_FACING,
GAMEOBJECT_DYN_FLAGS,
GAMEOBJECT_FACTION,
GAMEOBJECT_TYPE_ID,
GAMEOBJECT_LEVEL,
GAMEOBJECT_END
};
enum DynamicObjectUpdateFields
{
//OBJECT_FIELD_GUID = 0,
//OBJECT_FIELD_TYPE = OBJECT_FIELD_GUID+2,
//OBJECT_FIELD_ENTRY,
//OBJECT_FIELD_SCALE_X,
//OBJECT_FIELD_PADDING,

DYNAMICOBJECT_CASTER = OBJECT_FIELD_PADDING+1,
DYNAMICOBJECT_BYTES = DYNAMICOBJECT_CASTER+2,
DYNAMICOBJECT_SPELLID,
DYNAMICOBJECT_RADIUS,
DYNAMICOBJECT_POS_X,
DYNAMICOBJECT_POS_Y,
DYNAMICOBJECT_POS_Z,
DYNAMICOBJECT_FACING,
DYNAMICOBJECT_PAD,
DYNAMICOBJECT_END
};

enum CorpseUpdateFields
{
//OBJECT_FIELD_GUID = 0,
//OBJECT_FIELD_TYPE = OBJECT_FIELD_GUID+2,
//OBJECT_FIELD_ENTRY,
//OBJECT_FIELD_SCALE_X,
//OBJECT_FIELD_PADDING,

CORPSE_FIELD_OWNER = OBJECT_FIELD_PADDING+1,
CORPSE_FIELD_FACING = CORPSE_FIELD_OWNER+2,
CORPSE_FIELD_POS_X,
CORPSE_FIELD_POS_Y,
CORPSE_FIELD_POS_Z,
CORPSE_FIELD_DISPLAY_ID,
CORPSE_FIELD_ITEM,
CORPSE_FIELD_BYTES_1 = CORPSE_FIELD_ITEM+19,
CORPSE_FIELD_BYTES_2,
CORPSE_FIELD_GUILD,
CORPSE_FIELD_FLAGS,
CORPSE_FIELD_DYNAMIC_FLAGS,
CORPSE_FIELD_PAD,
CORPSE_END
};
//#endif

#endif

#endif //_VERSION_1_7_0_
