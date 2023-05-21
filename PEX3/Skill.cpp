#include "Skill.h"

const char* Skill::skillTypeStrings[] = { "painting", "chess", "dancing", "reading" };



const char* Skill::getTypeString() const
{
	return Skill::skillTypeStrings[this->type];
}

const char* Skill::intType2string(int type)
{
	if (type < 0 || type >= sizeof(Skill::skillTypeStrings) / sizeof(const char*))
		return nullptr;
	else return Skill::skillTypeStrings[type];
}


ostream& operator<<(ostream& out, const Skill& s)
{
	//implement this method
	int type;
	type = s.getType();
	if (type < 0)
	{

		out << "\nSkills: There is not skill yet\n";

	}
	else
	{
		out << "Skill type:" <<s.getTypeString() << "\nSkill Level:" << s.skillLevel;
	}
	

	return out;
}

void Skill::practice()
{
	this->skillLevel += std::rand() % 6 + 1;
	if (skillLevel > 100)
		skillLevel = 100;
}

void Skill::forget()
{
	this->skillLevel -= std::rand() % 6 + 1;
	if (skillLevel < 0)
		skillLevel = 0;
}

int Skill::getType() const
{
	return type;
}