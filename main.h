DWORD Msamp = (DWORD)GetModuleHandle("malinovka_samp.dll");
DWORD Mcore = (DWORD)GetModuleHandle("malinovka_core.dll");//malinovka_core.dll+76F980
DWORD* CPED = (DWORD*)0xB6F5F0;
DWORD* CMashina = (DWORD*)0xBA18FC;
DWORD* CCar1 = (DWORD*)(Msamp + 0x151428);
DWORD* CCamera1 = (DWORD*)(Mcore + 0x76F980);
DWORD* Cvadila = (DWORD*)(CMashina + 0x460);
DWORD* Cpasagir = (DWORD*)(CMashina + 0x464);


//DWORD* CPED = (DWORD*)0xB6F5F0;
//DWORD* SMASHINA = (DWORD*)0xBA18FC;
//DWORD* CCar1 = (DWORD*)(Msamp + 0x151428);
//DWORD* CCamera1 = (DWORD*)(Mcore + 0x76F980);
//byte* DVIZOK = (byte*)((*SMASHINA) + 0x428);
//DWORD* CVADILA = (DWORD*)((*SMASHINA) + 0x460);
//DWORD* CPASAGIR = (DWORD*)((*SMASHINA) + 0x464);
//DWORD* pMtrx = (DWORD*)((*CPED) + 0x14); //получаем указатель по адресу со смещением и также передаем его
//float* PosX = (float*)((*pMtrx) + 0x30);












#define FUNC_CMessages__AddMessageJumpQ 0x69F1E0


void AddMessageJumpQ(char* text, unsigned int time, unsigned short flag, bool bPreviousBrief)
{
	((void(__cdecl*)(char*, unsigned int, unsigned short, bool))FUNC_CMessages__AddMessageJumpQ)(text, time, flag, bPreviousBrief);
}