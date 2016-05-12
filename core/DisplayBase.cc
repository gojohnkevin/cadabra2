
#include "DisplayBase.hh"

DisplayBase::DisplayBase(const Kernel& k, const Ex& e)
	: tree(e), kernel(k)
	{
	}

void DisplayBase::output(std::ostream& str) 
	{
	Ex::iterator it=tree.begin();

	output(str, it);
	}

void DisplayBase::output(std::ostream& str, Ex::iterator it) 
	{
	dispatch(str, it);
	}
