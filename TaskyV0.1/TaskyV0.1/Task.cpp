#include "Task.h"

Task::Task(){

}

bool& Task::getDone(){return _done;}
	_title=title;

Task::Task(string title, DateTime start, DateTime end, int type, bool done, string comment){

	_title = title;
	_start = &start;
	_end = &end;
	_type = type;
	_done = done;
	_comment = comment;

}

Task::~Task()
{
	delete _start;
	delete _end;
}

bool Task::isEqualTo(Task& compare){

	return compare.getTitle() == _title
		&& compare.getStart() == *_start
		&& compare.getEnd() == *_end;

}


//clash: if start >= _start && < _end || if end > _start && <= _end
bool Task::isClashingWith(Task& compare){

	bool startClash = compare.getStart() >= *_start
		&& compare.getStart() < *_end;
	bool endClash = compare.getEnd() > *_start
		&& compare.getEnd() <= *_end;

	return startClash || endClash;

}

