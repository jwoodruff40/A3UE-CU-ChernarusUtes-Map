#include "\x\A3A\addons\maps\BuildObjectsList.hpp"
class CU_ChernarusUtes {
	population[] = {
		{"CU_chernarus_city_Chernogorsk", 785},{"CU_chernarus_city_Elektrozavodsk", 760},{"CU_chernarus_vill_Tulga", 35},{"CU_chernarus_city_Solnychniy", 235},{"CU_chernarus_city_Berezino", 346},{"CU_chernarus_city_StarySobor", 172},{"CU_chernarus_vill_Msta", 113},{"CU_chernarus_vill_Staroye", 152},{"CU_chernarus_vill_Shakhovka", 58},{"CU_chernarus_vill_Dolina", 86},{"CU_chernarus_vill_Orlovets", 65},{"CU_chernarus_vill_Bor", 51},{"CU_chernarus_city_Gorka", 161},{"CU_chernarus_vill_NovySobor", 143},{"CU_chernarus_vill_Kabanino", 94},{"CU_chernarus_vill_Mogilevka", 114},{"CU_chernarus_vill_Nadezhdino", 115},{"CU_chernarus_vill_Guglovo", 27},{"CU_chernarus_vill_Kamyshovo", 196},{"CU_chernarus_vill_Pusta", 55},{"CU_chernarus_city_Zelenogorsk", 306},{"CU_chernarus_city_Vybor", 272},{"CU_chernarus_vill_Dubrovka", 93},{"CU_chernarus_vill_Khelm", 110},{"CU_chernarus_vill_Olsha", 20},{"CU_chernarus_vill_Gvozdno", 95},{"CU_chernarus_city_Krasnostav", 228},{"CU_chernarus_vill_Petrovka", 45},{"CU_chernarus_vill_Grishino", 221},{"CU_chernarus_vill_Rogovo", 73},{"CU_chernarus_vill_Pogorevka", 67},{"CU_chernarus_vill_Pustoshka", 222},{"CU_chernarus_vill_Kozlovka", 120},{"CU_chernarus_vill_Polana", 122},{"CU_chernarus_vill_Balota", 159},{"CU_chernarus_vill_Komarovo", 129},{"CU_chernarus_vill_Kamenka", 127},{"CU_chernarus_vill_Myshkino", 49},{"CU_chernarus_vill_Pavlovo", 99},{"CU_chernarus_vill_Lopatino", 216},{"CU_chernarus_vill_Vyshnoye", 41},{"CU_chernarus_vill_Drozhino", 104},{"CU_chernarus_vill_Sosnovka", 60},{"CU_chernarus_vill_Nizhnoye", 146},{"CU_chernarus_vill_Pulkovo", 33},{"CU_utes_Utes_VillKamenyy", 76},{"CU_utes_Utes_VillStrelka", 64}
	};
	disabledTowns[] = {"CU_chernarus_vill_Prigorodki", "CU_utes_Utes_CC01", "CU_utes_Utes_CC02", "CU_utes_Utes_CC03", "CU_utes_Utes_CC04", "CU_utes_Utes_CC05"};
	antennas[] = {
		{13478.1,13586.4,0.100067},{13009.9,16205,0.048584},{6563.64,13644.3,0.0473175},{6444.38,16785.9,0.053772},{5264.38,15554.5,0.0282288},{8138.4,19378.9,0.00759888},{4548.18,13372.1,0.46043},{3715.81,16224.3,0},{3029.46,12590.2,0.0192871},{12937,23003.5,0.164093},{4968.36,20205.1,0}
	};
	antennasBlacklistIndex[] = {0,1,4,8};
	banks[] = {};
	garrison[] = {
		{},
		{
			"airport_3",
			"outpost_23", "outpost_24",
			"seaport_5",
			"control_41", "control_42"
		},
		{},
		{
			"control_41", "control_42"
		}
	};
	fuelStationTypes[] = {"Land_A_FuelStation_Feed","Land_Ind_FuelStation_Feed_EP1","Land_FuelStation_Feed_PMC","Land_Fuelstation","Land_Fuelstation_army","Land_Benzina_schnell"};
	milAdministrations[] = {
		{10393.5,12659.5,0},{11969,19457.7,0},{2973.42,15663.6,0}
	};
	climate = "temperate";
	buildObjects[] = {
		BUILDABLES_HISTORIC,
		BUILDABLES_UNIVERSAL,
		BUILDABLES_MODERN_GREEN,
		BUILDABLES_TEMPERATE,
		BUILDABLES_CUP
	};
};
