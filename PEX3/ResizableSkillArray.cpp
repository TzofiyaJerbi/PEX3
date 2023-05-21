//#include "ResizableSkillArray.h"
//
///// <summary>
///// this destructor should release all memory managed by the class.
/////		The inner Skill objects (by pointers), and the dynamic array holding them
///// NOTE - skillArray can be nullptr;
///// </summary>
//ResizableSkillArray::~ResizableSkillArray()
//{
//	//implement this method
//}
//
///// <summary>
///// The copy constructor.
///// </summary>
///// <param name="other">the object to copy</param>
//ResizableSkillArray::ResizableSkillArray(const ResizableSkillArray& other) : currentSize(other.currentSize), maxSize(other.maxSize)
//{
//	//implement this method
//}
//
///// <summary>
///// adds the pointer (by value - copying the address) to the skillArray in the next open spot
///// this method adds from index 0 upwards.
///// NOTE - use the private method resize() when necessary 
///// </summary>
///// <param name="s">a pointer to a newly allocated Skill object to add to the pointer
/////		array</param>
//void ResizableSkillArray::pushBack(Skill* s)
//{
//	if (currentSize == maxSize)
//		resize();
//	skillArray[currentSize++] = s;
//}
//
///// <summary>
///// reallocates the skillArray to a size twice as big (twice as many pointers)
///// </summary>
//void ResizableSkillArray::resize()
//{
//	//maxsize 
// = 0 is the initial size
//	if (maxSize == 0)
//	{
//		maxSize = 2;
//		skillArray = new Skill * [maxSize];
//	}
//	else
//	{
//		maxSize *= 2;
//		Skill** temp = new Skill * [maxSize];
//		for (int i = 0; i < currentSize; i++)
//			temp[i] = new Skill(*skillArray[i]);
//
//		for (int i = 0; i < currentSize; i++)
//			delete skillArray[i];
//		delete[] skillArray;
//
//		skillArray = temp;
//	}
//}
//
///// <summary>
///// simple field public getter
///// </summary>
///// <returns>the current populated array size</returns>
//int ResizableSkillArray::getSize() const
//{
//	return this->currentSize;
//}
//
///// <summary>
///// simple field public getter
///// </summary>
///// <returns>the current maximum array size</returns>
//int ResizableSkillArray::getCapacity() const
//{
//	return this->maxSize;
//}
//
///// <summary>
///// this method should simply call pushback
///// </summary>
///// <param name="s">a pointer to a newly allocated Skill</param>
///// <returns>a reference to the calling object</returns>
//const ResizableSkillArray& ResizableSkillArray::operator+=(Skill* s)
//{
//	//implement this method
//}
//
///// <summary>
///// prints the array object to an ostream (usually cout in our case)
///// </summary>
///// <param name="out">an ostream</param>
///// <param name="ra">an array object to print</param>
///// <returns>a reference to the output ostream</returns>
//ostream& operator<<(ostream& out, const ResizableSkillArray& rsa)
//{
//	//implement this method
//}
//
////note: we SHOULD use the copy & swap Idiom, but we did not learn this subject
///// <summary>
///// copy assignment operator. implement as seen in class
///// </summary>
///// <param name="rhs">the right hand side of the assignment</param>
///// <returns>a reference to the assigned object</returns>
//ResizableSkillArray& ResizableSkillArray::operator=(const ResizableSkillArray& rhs)
//{
//	//implement this method
//}
//
///// <summary>
///// array access operator (a.k.a array subscript)
///// implement this operator so that it returns the element in the array at position "index"
///// </summary>
///// <param name="index">the index to access in the skillArray</param>
///// <returns>a pointer from the skillArray if exists, nullptr o.w</returns>
//Skill* ResizableSkillArray::operator[](int index) const
//{
//	//implement this method
//}
//
///// <summary>
///// searches the array for a skill with type "type"
///// </summary>
///// <param name="type">the skill integer type to find in the array</param>
///// <returns>the index of the skill if found, -1 otherwise</returns>
//int ResizableSkillArray::findSkill(int type) const
//{
//	int index = -1;
//	for (int i = 0; i < currentSize; i++)
//	{
//		if (skillArray[i]->getType() == type)
//		{
//			index = i;
//			break;
//		}
//	}
//
//	return index;
//}
//
