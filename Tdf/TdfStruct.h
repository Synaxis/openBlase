#ifndef TDFSTRUCT_H
#define TDFSTRUCT_H

#include <vector>

#include "Tdf.h"

class TdfStruct : public Tdf
{
private:
	std::vector<Tdf*> m_values;

public:
	TdfStruct();
	TdfStruct(DWORD Label, TdfTypes Type, std::vector<Tdf*> Values);
	~TdfStruct();

	static TdfStruct* fromPacket(BlazeInStream* stream);

	virtual DWORD toPacket(void* buffer, DWORD size);

	std::vector<Tdf*> getValues() { return m_values; }
	//void setValues(const char* Value) { }
};

#endif //TDFSTRUCT_H