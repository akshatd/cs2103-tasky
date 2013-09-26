#ifndef _Processor_H_
#define _Processor_H_

/*
 *This class is the central controlling unit. It will take string from UI and process it, acknowledge UI
 *if input format is not suitable or it will go ahead and extract command out of input string and call methods
 *in Logic/history/FileProcessing to carry out the command.
 *
 *Main role: string processing, central logic unit, front wall of logic.
 *
 *Additional notice: this class will take the pointer of the _itemList in Logic class to ease the cost of
 *displaying. But the author of this class will only read from _itemList. This method is more like data-binding
 *with only programmers' protection.
 *
 *Author: Akshat, Junchao
*/

#include <sstream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include "Task.h"
#include "History.h"
#include "FileProcessing.h"
#include "Logic.h"
#include "Essential.h"
#include "LogicStub.h"

using namespace msclr::interop;

class Processor{
private:
	vector<Task> _tempTaskList; //hold the tasks returned by search and display
	vector<string> _stringList; //hold the tasks in a string format, pass to FileProcessing and that
	                            //will read and write accordingly
	vector<Task>* _taskListPointer;
	LogicStub _logic;
	History _history;
	FileProcessing _fileProcessing;
	vector<string> *_wordsList;
	int _statusFlag;  //0 : last operation has ended;
	                  //1 : update operation has not ended;
	                  //2 : remove operation has not ended;
	                  //3 : mark operation has not ended;
	                  
private:
	static const string EMPTY_STRING;
	static const string NEW_LINE_STRING;
	static const string FROM_KEY_WORD;
	static const string TO_KEY_WORD;
	static const string BY_KEY_WORD;

	static const string ADD_TASK_SUCCESS;
	static const string ADD_TASK_FAILURE_DUPLICATE;
	static const string ADD_TASK_FAILURE_UNEXPECTED;
	static const string ADD_TASK_WARNING_CLASH;
	static const string DISPLAY_TASK_SUCCESS;
	static const string DISPLAY_TASK_FAILURE_UNEXPECTED;
	static const string WRONG_INPUT;
	static const string UNEXPECTED_ERROR;
	static const string UPDATE_CHOOSE_TASK;
	static const string REMOVE_CHOOSE_TASK;
	static const string MARK_CHOOSE_TASK;
	static const string NO_SUCH_TASK;

	static const char NEW_LINE;
	static const char SLASH;
	static const char BACK_SLASH;
	static const char DOT;
	static const char COLON;
	static const char DASH;
	static const char ZERO;
	static const char NINE;
	static const char SPACE;
	
public:
	Processor();
	string mainProcessor(string); //processes the string, calls the appropriate logic methods, returns string
	                              //to UI
	                              //create a new vector of strings and delete that at the end
	~Processor();

private:
	//level 1 abstraction
	string addCommandProcessor();
	string displayCommandProcessor();
	
	string updateCommandProcessor();  //change the flag if necessary
	string removeCommandProcessor();  //change the flag if necessary
	string markCommandProcessor();  //change the flag if necessary
	
	string otherCommandProcessor();

	//for add command processing
	string determineMsgToUI(int);
	int addFloatingTask(string, string);//need to refactor to only create a task
	int addDeadlineTask(string, DateTime, string);//need to refactor to only create a task
	int addNormalTask(string, DateTime, DateTime, string);//need to refactor to only create a task
	int createTask(Task&,string, DateTime, DateTime, int, bool, string);
	int formatDateTime(DateTime&, int, int);
	int translateDateTime(DateTime&, string, string);
	int translateDate(int&, int&, int&, string);
	int translateTime(int&, int&, int&, string);
	int determineType(int&, int&, int&, int&, int&);
	vector<int> identifyKeyWords();
	bool fromToCheck(int, int);
	bool byCheck(int);
	bool dateTimeCheck(string, string);
	bool dateCheck(string);
	bool timeCheck(string);

	//additional helper methods
	int breakIntoStringVectorBySpace(string);
	int stringToInt(string);
	string combineStringsWithSpaceOnVector(int,int);//check size of vector first
	string combineStringsWithNewLineOnVector(int,int);
	string combineStringsWithNewLine(string, string);
	string taskToString(Task);
	string printFloatingTask(Task);
	string printDeadlineTask(Task);
	string printTimedTask(Task);
	string printStatus(bool);
	string toLowCaseString(string);
	string removeLeadingSpaces(string);
	int characterType(char) ;
	string combineStatusMsgWithFeedback(string);
};

#endif