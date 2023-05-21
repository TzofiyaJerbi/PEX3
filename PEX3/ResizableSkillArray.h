//#pragma once
//#include "Skill.h"
//#include <iostream>
//
//class ResizableSkillArray
//{
//private:
//	Skill** skillArray = nullptr;
//	int currentSize = 0;
//	int maxSize = 0;
//
//	void resize();
//public:
//	ResizableSkillArray() = default;
//	void pushBack(Skill* s);
//
//	int getSize() const;
//	int getCapacity() const;
//
//	Skill* operator[](int index) const;
//	const ResizableSkillArray& operator+=(Skill* s);
//	friend ostream& operator<<(ostream& out, const ResizableSkillArray& ra);
//	int findSkill(int type) const;
//	ResizableSkillArray(const ResizableSkillArray& other);
//	ResizableSkillArray& operator=(const ResizableSkillArray& rhs);
//	~ResizableSkillArray();
//};