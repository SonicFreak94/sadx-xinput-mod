#include "precious thing.h"

//#include <cmath>
//#include <cstdint>

#include "SADXModLoader.h"

#pragma region help me
DataArray(ControllerData, Controller_Data_0, 0x03B0E9C8, 8);
DataPointer(CharObj1*, RAM_dword_ptr_P1_Obj1, 0x03B42E10);
DataPointer(ControllerData*, Controller_Data_0_ptr, 0x03B0E77C);
DataPointer(WORD, RAM_word_Game_Status, 0x03B22DE4);

DataPointer(LPVOID,		dword_3B2C480,	0x3B2C480);
DataPointer(_UNKNOWN,	unk_909FB8,		0x909FB8);
DataPointer(char*,		byte_3B0E9A4,	0x3B0E9A4);
DataPointer(char,		byte_3B0E3EC,	0x3B0E3EC);
DataPointer(char,		byte_3B0E3F2,	0x3B0E3F2);
DataPointer(char,		byte_3B0E3F5,	0x3B0E3F5);
DataPointer(char,		byte_3B0E3FB,	0x3B0E3FB);
DataPointer(char,		byte_3B0E404,	0x3B0E404);
DataPointer(char,		byte_3B0E407,	0x3B0E407);
DataPointer(char,		byte_3B0E40A,	0x3B0E40A);
DataPointer(char,		byte_3B0E410,	0x3B0E410);
DataPointer(char,		byte_3B0E41C,	0x3B0E41C);
DataPointer(char,		byte_3B0E41F,	0x3B0E41F);
DataPointer(char,		byte_3B0E422,	0x3B0E422);
DataPointer(char,		byte_3B0E42B,	0x3B0E42B);
DataPointer(char,		byte_3B0E42E,	0x3B0E42E);
DataPointer(char,		byte_3B0E431,	0x3B0E431);
DataPointer(char,		byte_3B0E437,	0x3B0E437);
DataPointer(char,		byte_3B0E458,	0x3B0E458);
DataPointer(char,		byte_3B0E45B,	0x3B0E45B);
DataPointer(char,		byte_3B0E464,	0x3B0E464);
DataPointer(char,		byte_3B0E4BE,	0x3B0E4BE);
DataPointer(int*,		dword_3B0E344,	0x3B0E344);
DataPointer(int*,		dword_3B0E768,	0x3B0E768);
DataPointer(int*,		dword_3B0E9B8,	0x3B0E9B8);
DataPointer(int*,		dword_3B0EBFC,	0x3B0EBFC);
DataPointer(int*,		dword_3B36DD0,	0x3B36DD0);
DataPointer(int*,		dword_8929D4,	0x8929D4);
DataPointer(int*,		dword_909FE0,	0x909FE0);
DataPointer(int*,		dword_90A000,	0x90A000);
DataPointer(int*,		dword_90A014,	0x90A014);
DataPointer(int*,		dword_90A01C,	0x90A01C);
DataPointer(int*,		dword_90A020,	0x90A020);
DataPointer(int,		dword_3B0E340,	0x3B0E340);
DataPointer(int,		dword_3B0E764,	0x3B0E764);
DataPointer(int,		dword_3B0E778,	0x3B0E778);
DataPointer(int,		dword_3B0E990,	0x3B0E990);
DataPointer(int,		dword_3B0E994,	0x3B0E994);
DataPointer(int,		dword_3B0E998,	0x3B0E998);
DataPointer(int,		dword_3B0E99C,	0x3B0E99C);
DataPointer(int,		dword_3B0E9A0,	0x3B0E9A0);
DataPointer(int,		dword_3B0EBF0,	0x3B0EBF0);
DataPointer(int,		dword_3B0EBF4,	0x3B0EBF4);
DataPointer(int,		dword_3B0EBF8,	0x3B0EBF8);
DataPointer(int,		dword_3B0EC0C,	0x3B0EC0C);
DataPointer(int,		dword_3B0EC10,	0x3B0EC10);
DataPointer(int,		dword_3B0EC14,	0x3B0EC14);
DataPointer(int,		dword_3B0EC18,	0x3B0EC18);
DataPointer(int,		dword_3B0EC24,	0x3B0EC24);
DataPointer(int,		dword_3B2A2E4,	0x3B2A2E4);
DataPointer(int,		dword_3B2A2E8,	0x3B2A2E8);
DataPointer(int,		dword_3B2C470,	0x3B2C470);
DataPointer(int,		dword_3B2C474,	0x3B2C474);
DataPointer(int,		dword_3B36D34,	0x3B36D34);
DataPointer(int,		dword_909FC8,	0x909FC8);
DataPointer(int,		dword_90A010,	0x90A010);
DataPointer(int,		dword_7DCC9C,	0x7DCC9C);
DataPointer(int,		dword_7DCCB0,	0x7DCCB0);
DataPointer(__int64,	qword_3B0EC1C,	0x3B0EC1C);
DataPointer(short*,		word_3B0E6E0,	0x3B0E6E0);
DataPointer(short,		word_3B2C460,	0x3B2C460);
DataPointer(short,		word_3B2C464,	0x3B2C464);

FunctionPointer(char,	GetDInputMouseState, (void), 0x0040BB80);
FunctionPointer(char*,	sub_77F120, (int a1),	0x77F120);
FunctionPointer(char,	sub_40EE10,	(void),		0x40EE10);
FunctionPointer(int,	sub_77EFA0,	(int a1),	0x77EFA0);
FunctionPointer(int,	sub_77EFB0,	(int a1),	0x77EFB0);
FunctionPointer(int,	sub_77F060,	(int a1),	0x77F060);
FunctionPointer(void,	sub_40E900,	(void),		0x40E900);
#pragma endregion

void __cdecl WriteControllerData_XInput()
{
	int v0; // eax@4
	int v1; // ecx@6
	int v2; // eax@8
	int v3; // ebx@8
	int v4; // edi@8
	ControllerData *v5; // edi@10
	int v6; // ebp@13
	signed int v7; // esi@32
	signed int v8; // eax@33
	int v9; // ecx@33
	int v10; // eax@36
	int v11; // ecx@42
	CharObj2 *v12; // esi@42
	long double v13; // st7@50
	__int16 v14; // ax@56
	char *v15; // esi@56
	char *v16; // eax@56
	__int16 v17; // ax@61
	__int16 v18; // ax@66
	__int16 v19; // ax@71
	int v20; // ebx@76
	char v21; // cl@76
	char v22; // dl@84
	int v23; // eax@85
	char v24; // cl@86
	char v25; // dl@88
	char v26; // zf@88
	int v27; // ecx@89
	int v28; // ebp@122
	_UNKNOWN *v29; // esi@122
	int v30; // eax@123
	int v31; // ecx@129
	int v32; // eax@130
	int v33; // edx@135
	signed int v34; // eax@136
	signed int v35; // ecx@136
	signed __int16 v36; // ax@147
	signed __int16 v37; // cx@155
	signed __int16 v38; // ax@159
	int v39; // edx@163
	int v40; // eax@163
	int v41; // ecx@163
	int v42; // ecx@163
	int v43; // eax@163
	int v44; // edx@163
	int v45; // ebx@164
	unsigned __int8 v46; // sf@169
	unsigned __int8 v47; // of@169
	LPVOID v48; // eax@176
	int v49; // edx@178
	char v50; // [sp+3h] [bp-21h]@84
	signed int v51; // [sp+4h] [bp-20h]@13
	int v52; // [sp+4h] [bp-20h]@76
	int v53; // [sp+8h] [bp-1Ch]@42
	int v54; // [sp+8h] [bp-1Ch]@76
	int v55; // [sp+Ch] [bp-18h]@6
	int v56; // [sp+14h] [bp-10h]@13
	int v57; // [sp+14h] [bp-10h]@76
	int v58; // [sp+18h] [bp-Ch]@13
	int v59; // [sp+18h] [bp-Ch]@76
	int v60; // [sp+1Ch] [bp-8h]@10
	signed int v61; // [sp+20h] [bp-4h]@76

	dword_3B0E340 = sub_77F060(0);
	if (dword_8929D4[0])
	{
		dword_3B0E764 = sub_77EFB0(0);
		dword_3B0E778 = sub_77EFA0(0);
	}
	else
	{
		dword_3B0E764 = (int)&dword_7DCC9C;
		dword_3B0E778 = (int)&dword_7DCCB0;
	}
	sub_40E900();
	v0 = dword_3B0E340;
	if (!dword_8929D4[0])
	{
		*(_DWORD *)(dword_3B0E340 + 2) = 0;
		*(_WORD *)(v0 + 6) = 0;
		*(_BYTE *)v0 = 0;
	}
	sub_40EE10();
	v1 = 0;
	dword_3B0EC24 = 0;
	v55 = 0;
	while (1)
	{
		v2 = v55;
		v3 = 0;
		v4 = v1;
		if (v55)
			v4 = v55;
		v60 = v4;
		v5 = &Controller_Data_0[v4];
		if (v1)
		{
			if (v55 == v1)
				goto LABEL_169;
			v2 = v55;
			v3 = 0;
		}
		v6 = 0;
		v5->CameraY = v3;
		v5->CameraX = v3;
		v5->ControlY = v3;
		v5->ControlX = v3;
		v51 = v3;
		v56 = v3;
		v58 = v3;
		if (v2 == v3)
		{
			if (byte_3B0E464 || byte_3B0E431)
				v51 = 4;
			if (byte_3B0E437 || byte_3B0E42B || byte_3B0E45B)
				v51 |= 2u;
			if (byte_3B0E458 || byte_3B0E4BE)
				v51 |= 8u;
			if (byte_3B0E3EC)
				v51 |= 0x400u;
			if (byte_3B0E422)
				v51 |= 0x200u;
			if (byte_3B0E41C)
				v51 |= 0x20000u;
			if (byte_3B0E42E)
				v51 |= 0x10000u;
			v7 = 0;
			do
			{
				v9 = *(_BYTE *)(dword_3B0E340 + v7 + 2);
				v8 = v9 - 89;
				if (v9 - 89 < 0 || v8 >= 9)
				{
					v10 = v9 - 79;
					if (v9 - 79 >= 0)
					{
						if (v10 < 4)
						{
							if (v10 >= 2)
								v3 += dword_90A014[v10 & 1];
							else
								v6 += dword_90A014[v10];
						}
					}
				}
				else
				{
					v6 += dword_90A01C[v8 % 3];
					v3 -= dword_90A01C[v8 / 3];
				}
				++v7;
			} while (v7 < 6);
			v3 += dword_90A020[(unsigned __int8)byte_3B0E3F2] - dword_90A020[(unsigned __int8)byte_3B0E41F];
			v56 = dword_90A020[(unsigned __int8)byte_3B0E40A] - dword_90A020[(unsigned __int8)byte_3B0E407];
			v61 = v7;
			v53 = dword_90A020[(unsigned __int8)byte_3B0E3FB] - dword_90A020[(unsigned __int8)byte_3B0E3F5] + v6;
			v58 = dword_90A020[(unsigned __int8)byte_3B0E404] - dword_90A020[(unsigned __int8)byte_3B0E410];
			v12 = GetCharObj2(0);
			v11 = (unsigned __int64)(atan2((double)v53, (double)v3) * 65536.0 * 0.1591549762031479);
			if (v53 | v3 && qword_3B0EC1C)
			{
				if (dword_3B0EC18)
				{
					--dword_3B0EC18;
					v53 = qword_3B0EC1C;
					v3 = HIDWORD(qword_3B0EC1C);
				}
				else
				{
					if (v11 - dword_3B0EC14 <= (signed int)0x4000u || dword_3B0EC14 - v11 <= (signed int)0x4000u)
					{
						if (v12)
						{
							if (dword_3B0EC10)
								v13 = v12->PhysData.Run1;
							else
								v13 = v12->PhysData.RollEnd;
							if (fabs(*(float *)(dword_3B36DD0[0] + 56) * 5.0 + v12->HSpeed) >= v13)
							{
								v53 = ((_DWORD)qword_3B0EC1C + v53) / 2;
								v3 = (v3 + HIDWORD(qword_3B0EC1C)) / 2;
								dword_3B0EC18 = dword_90A010;
							}
						}
					}
				}
			}
			else
			{
				dword_3B0EC18 = 0;
			}
			dword_3B0EC14 = v11;
			qword_3B0EC1C = __PAIR__(v3, v53);
			v6 = v53;
		}
		v16 = sub_77F120(dword_90A000[v55]);
		v15 = v16;
		v14 = *((_WORD *)v16 + 14);
		if (v14 > -60)
		{
			if (v14 < 60)
				*((_WORD *)v15 + 14) = (unsigned __int64)((double)v14 * 2.133333444595337);
			else
				*((_WORD *)v15 + 14) = 127;
		}
		else
		{
			*((_WORD *)v15 + 14) = -128;
		}
		v17 = *((_WORD *)v15 + 15);
		if (v17 > -60)
		{
			if (v17 < 60)
				*((_WORD *)v15 + 15) = (unsigned __int64)((double)v17 * 2.133333444595337);
			else
				*((_WORD *)v15 + 15) = 127;
		}
		else
		{
			*((_WORD *)v15 + 15) = -128;
		}
		v18 = *((_WORD *)v15 + 16);
		if (v18 > -60)
		{
			if (v18 < 60)
				*((_WORD *)v15 + 16) = (unsigned __int64)((double)v18 * 2.133333444595337);
			else
				*((_WORD *)v15 + 16) = 127;
		}
		else
		{
			*((_WORD *)v15 + 16) = -128;
		}
		v19 = *((_WORD *)v15 + 17);
		if (v19 > -60)
		{
			if (v19 < 60)
				*((_WORD *)v15 + 17) = (unsigned __int64)((double)v19 * 2.133333444595337);
			else
				*((_WORD *)v15 + 17) = 127;
		}
		else
		{
			*((_WORD *)v15 + 17) = -128;
		}
		v52 = *((_DWORD *)v15 + 2) | v51;
		v54 = *((_WORD *)v15 + 14) + v6;
		v20 = *((_WORD *)v15 + 15) + v3;
		v21 = byte_3B0E9A4[v61];
		v57 = *((_WORD *)v15 + 16) + v56;
		v59 = *((_WORD *)v15 + 17) + v58;
		v5->field_4 = 0x3F07FEu;
		if (v21)
		{
			v5->HeldButtons = dword_3B0E9B8[v61];
			byte_3B0E9A4[v61] = 0;
		}
		if (v55)
			goto LABEL_147;
		if (v54 || v20)
		{
			dword_3B0E998 = 0;
			dword_3B0E99C = 0;
			dword_3B0E9A0 = 0;
			dword_3B0E990 = 0;
			dword_3B0E994 = 0;
		}
		else
		{
			if (dword_3B0E998 > 0)
			{
				v20 = dword_3B0E9A0;
				v54 = -dword_3B0E99C;
			}
		}
		v22 = GetDInputMouseState();
		v50 = v22;
		if (v22)
		{
			v24 = v22;
			if (dword_3B0EBF8 == (unsigned __int8)v22)
			{
				v23 = dword_3B0EC0C;
				dword_3B0EBFC[dword_3B0EC0C] = dword_3B0EBFC[(dword_3B0EC0C - 1) & 3];
			}
			else
			{
				v26 = ((unsigned __int8)v22 & (unsigned __int8)(v22 ^ dword_3B0EBF8)) == 0;
				v25 = v22 & (v22 ^ dword_3B0EBF8);
				v23 = dword_3B0EC0C;
				if (v26)
				{
					if (v24 & 1)
					{
						dword_3B0EBFC[dword_3B0EC0C] = 1;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 & 2)
					{
						dword_3B0EBFC[v23] = 2;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 & 4)
					{
						dword_3B0EBFC[v23] = 3;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 & 8)
					{
						dword_3B0EBFC[v23] = 4;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 & 0x10)
					{
						dword_3B0EBFC[v23] = 5;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 & 0x20)
					{
						dword_3B0EBFC[v23] = 6;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 & 0x40)
					{
						dword_3B0EBFC[v23] = 7;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v24 >= 0)
						goto LABEL_122;
					dword_3B0EBFC[v23] = 8;
				}
				else
				{
					v27 = dword_3B0EBFC[(dword_3B0EC0C - 1) & 3] << 8;
					dword_3B0EBFC[dword_3B0EC0C] = v27;
					if (v25 & 1)
					{
						dword_3B0EBFC[v23] = v27 | 1;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 & 2)
					{
						dword_3B0EBFC[v23] |= 2u;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 & 4)
					{
						dword_3B0EBFC[v23] |= 3u;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 & 8)
					{
						dword_3B0EBFC[v23] |= 4u;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 & 0x10)
					{
						dword_3B0EBFC[v23] |= 5u;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 & 0x20)
					{
						dword_3B0EBFC[v23] |= 6u;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 & 0x40)
					{
						dword_3B0EBFC[v23] |= 7u;
						v23 = (v23 + 1) & 3;
						dword_3B0EC0C = v23;
					}
					if (v25 >= 0)
						goto LABEL_122;
					dword_3B0EBFC[v23] |= 8u;
				}
			}
		}
		else
		{
			v23 = dword_3B0EC0C;
			dword_3B0EBFC[dword_3B0EC0C] = 0;
		}
		v23 = (v23 + 1) & 3;
		dword_3B0EC0C = v23;
	LABEL_122:
		v28 = *(_DWORD *)&Controller_Data_0[5].CameraRight;
		v29 = (_UNKNOWN *)word_3B0E6E0;
		if (RAM_dword_ptr_P1_Obj1)
		{
			v30 = GetCharacterID(0);
			if (v30 >= 0)
			{
				if (v30 < 8)
				{
					if (RAM_dword_ptr_P1_Obj1->Action == dword_909FE0[v30])
					{
						if (RAM_dword_ptr_P1_Obj1->NextAction == 18)
						{
							v28 = dword_909FC8;
							v29 = &unk_909FB8;
							dword_3B36D34 = 1;
						}
					}
				}
			}
			v23 = dword_3B0EC0C;
		}
		v31 = 0;
		if (v28 > 0)
		{
			v32 = dword_3B0EBFC[(v23 - 1) & 3];
			while (v32 != *((_WORD *)v29 + 2 * v31))
			{
				++v31;
				if (v31 >= v28)
					goto LABEL_135;
			}
			v52 |= *((_WORD *)v29 + 2 * v31 + 1);
		}
	LABEL_135:
		v33 = *(_DWORD *)dword_3B0E778;
		dword_3B0EBF8 = (unsigned __int8)v50;
		if (v33 & 0x20000)
		{
			v35 = 20;
			v34 = 1;
			dword_3B0EBF4 = 20;
			dword_3B0EBF0 = 1;
		}
		else
		{
			v35 = dword_3B0EBF4;
			v34 = dword_3B0EBF0;
		}
		if (v33 & 0x10000)
		{
			v35 = 20;
			dword_3B0EBF0 = 2;
			goto LABEL_144;
		}
		if (!v35)
		{
			dword_3B0EBF0 = 0;
			goto LABEL_147;
		}
		if (v34 != 1)
		{
			if (v34 == 2)
			LABEL_144:
			v52 |= 0x10000u;
			dword_3B0EBF4 = v35 - 1;
			goto LABEL_147;
		}
		v52 |= 0x20000u;
		dword_3B0EBF4 = v35 - 1;
	LABEL_147:
		v36 = v54;
		if (v54 >= -127)
		{
			if (v54 > 127)
				v36 = 127;
		}
		else
		{
			v36 = -127;
		}
		if (v20 >= -127)
		{
			if (v20 > 127)
				LOWORD(v20) = 127;
		}
		else
		{
			LOWORD(v20) = -127;
		}
		v37 = v57;
		v5->ControlX = v36;
		v5->ControlY = v20;
		if (v57 >= -127)
		{
			if (v57 > 127)
				v37 = 127;
		}
		else
		{
			v37 = -127;
		}
		v38 = v59;
		if (v59 >= -127)
		{
			if (v59 > 127)
				v38 = 127;
		}
		else
		{
			v38 = -127;
		}
		v39 = v5->HeldButtons;
		v5->CameraY = v38;
		v5->CameraX = v37;
		v40 = v52;
		v41 = v52;
		v5->CameraLeft = (v40 & 0x20000) != 0 ? 0xFF : 0;
		v5->NotHeldButtons = ~v52;
		v5->CameraRight = (v41 & 0x10000) != 0 ? 0xFF : 0;
		v42 = v39;
		v43 = v52 ^ v39;
		v5->HeldButtons_Copy = v39;
		v44 = v52 & (v52 ^ v39);
		v5->ReleasedButtons = v42 & v43;
		v5->HeldButtons = v52;
		v5->PressedButtons = v44;
		v61 = v60;
		dword_3B0E344[v60] = v44;
		if (v52 == v42)
		{
			v45 = dword_3B0E768[v60] + 1;
			dword_3B0E768[v60] = v45;
			if (v45 == 15)
			{
				dword_3B0E344[v60] = v52;
			}
			else
			{
				if (v45 == 19)
				{
					dword_3B0E344[v60] = v52;
					dword_3B0E768[v60] = 15;
				}
			}
		}
		else
		{
			dword_3B0E768[v60] = 0;
		}
	LABEL_169:
		v47 = __SETO__(v55 + 1, 4);
		v46 = v55++ - 3 < 0;
		if (!(v46 ^ v47))
			break;
		v1 = dword_3B0EC24;
	}
	if (RAM_word_Game_Status == 15)
	{
		if (dword_3B2A2E4)
		{
			if (dword_3B2C470)
			{
				if (dword_3B2A2E8 < 0)
				{
					v48 = dword_3B2C480;
					if (dword_3B2C474 == 1)
					{
						if (word_3B2C464 > word_3B2C460 || (v49 = *((_DWORD *)dword_3B2C480 + 6 * word_3B2C464), v49 == -1))
						{
							dword_3B2C470 = 0;
							StartLevelCutscene(6);
							++word_3B2C464;
						}
						else
						{
							Controller_Data_0_ptr->HeldButtons = v49 | Controller_Data_0_ptr->HeldButtons & 8;
							Controller_Data_0_ptr->CameraLeft = *((_WORD *)v48 + 12 * word_3B2C464 + 2);
							Controller_Data_0_ptr->CameraRight = *((_WORD *)v48 + 12 * word_3B2C464 + 3);
							Controller_Data_0_ptr->ControlX = *((_WORD *)v48 + 12 * word_3B2C464 + 4);
							Controller_Data_0_ptr->ControlY = *((_WORD *)v48 + 12 * word_3B2C464 + 5);
							Controller_Data_0_ptr->NotHeldButtons = *((_DWORD *)v48 + 6 * word_3B2C464 + 3);
							Controller_Data_0_ptr->PressedButtons = Controller_Data_0_ptr->PressedButtons & 8 | *((_DWORD *)v48
								+ 6 * word_3B2C464
								+ 4);
							Controller_Data_0_ptr->ReleasedButtons = *((_DWORD *)v48 + 6 * word_3B2C464++ + 5);
						}
					}
				}
			}
		}
	}
}