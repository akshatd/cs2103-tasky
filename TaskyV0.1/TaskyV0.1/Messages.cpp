#include "Messages.h"



const string Messages::MESSAGE_OVERALL_SUCCESS =		"Success!";
const string Messages::MESSAGE_OVERALL_WARNING =		"Warning!";
const string Messages::MESSAGE_OVERALL_ERROR =			"Error!";
const string Messages::MESSAGE_OVERALL_PROMPT =		"Please enter your choice:";
const string Messages::MESSAGE_OVERALL_EXIT =			"The program will now exit, Goodbye!";

const string Messages::MESSAGE_SUCCESS_ADD =			"Success! Task added";
const string Messages::MESSAGE_SUCCESS_REMOVE =		"Success! Task removed";
const string Messages::MESSAGE_SUCCESS_DISPLAY =		"Success! Tasks displayed";
const string Messages::MESSAGE_SUCCESS_UPDATE =		"Success! Task updated";
const string Messages::MESSAGE_SUCCESS_RESHCEDULE =	"Success! Task rescheduled";
const string Messages::MESSAGE_SUCCESS_MARK =			"Success! Task(s) marked";
const string Messages::MESSAGE_SUCCESS_SEARCH =		"Success! Search successful";
const string Messages::MESSAGE_SUCCESS_LOAD =			"Success! File loaded";
const string Messages::MESSAGE_SUCCESS_SAVE =			"Success! File saved";
const string Messages::MESSAGE_SUCCESS_UNDO =			"Success! Undo successful";
const string Messages::MESSAGE_SUCCESS_REDO =			"Success! Redo successful";
const string Messages::MESSAGE_SUCCESS_RECORD =		"Success! Previous action recorded";
const string Messages::MESSAGE_SUCCESS_INTERPRET_ADD = "Success! Interpreted add";
const string Messages::MESSAGE_SUCCESS_INTERPRET_REMOVE = "Success! Interpreted remove";
const string Messages::MESSAGE_SUCCESS_INTERPRET_DISPLAY = "Success! Interpreted display";
const string Messages::MESSAGE_SUCCESS_INTERPRET_RENAME = "Success! Interpreted rename";
const string Messages::MESSAGE_SUCCESS_INTERPRET_RESCHEDULE = "Success! Interpreted reschedule";
const string Messages::MESSAGE_SUCCESS_INTERPRET_MARK = "Success! Interpreted mark";
const string Messages::MESSAGE_SUCCESS_INTERPRET_SEARCH = "Success! Interpreted search";
const string Messages::MESSAGE_SUCCESS_INTERPRET_STRINGTODATETIME = "Success! Interpreted Date";

const string Messages::MESSAGE_WARNING_ADD_CLASH =		"Warning! Task clashes with existing ones";
const string Messages::MESSAGE_WARNING_ADD_DUPLICATE = "Warning! Task already exists";
const string Messages::MESSAGE_WARNING_DISPLAY_NO_RESULT = "Warning! No tasks to display";
const string Messages::MESSAGE_WARNING_UPDATE_SAME =	"Warning! The new data is the same as the old data";
const string Messages::MESSAGE_WARNING_UPDATE_CLASH =	"Warning! The new data will make the task clash with the following:";
const string Messages::MESSAGE_WARNING_MARK_NO_CHANGE = "Warning! There is no change in the status";
const string Messages::MESSAGE_WARNING_SEARCH_NO_RESULT = "Warning! No such task";
const string Messages::MESSAGE_WARNING_UNDO_NO_TASKS = "Warning! There is nothing to undo";
const string Messages::MESSAGE_WARNING_REDO_NO_TASKS = "Warning! There is nothing to redo";
const string Messages::MESSAGE_WARNING_LOAD_EMPTY_FILE = "Warning! The file being loaded is empty";	
const string Messages::MESSAGE_WARNING_INTERPRET_ADD_NO_TITLE = "Warning! No title interpreted";
const string Messages::MESSAGE_WARNING_WRONG_INPUT =	"Warning! Wrong input";

const string Messages::MESSAGE_ERROR_ADD =				"Error! Unexpected error while adding task";
const string Messages::MESSAGE_ERROR_REMOVE =			"Error! Unexpected error while removing task" ;
const string Messages::MESSAGE_ERROR_DISPLAY =			"Error! Unexpected error while displaying tasks";
const string Messages::MESSAGE_ERROR_UPDATE =		"Error! Unexpected error while rescheduling task";
const string Messages::MESSAGE_ERROR_MARK =			"Error! Unexpected error while marking task(s)";
const string Messages::MESSAGE_ERROR_SEARCH =			"Error! Unexpected error while searching for tasks";
const string Messages::MESSAGE_ERROR_UNDO =			"Error! Unexpected error while undoing task";
const string Messages::MESSAGE_ERROR_REDO =			"Error! Unexpected error while redoing task";
const string Messages::MESSAGE_ERROR_LOAD_OPENFILE =	"Error! Unexpected error while loading file";
const string Messages::MESSAGE_ERROR_LOAD_CORRUPTED_DATA =	"Error! File corrupted!";
const string Messages::MESSAGE_ERROR_SAVE_SAVEFILE =	"Error! Unexpected error while saving to file";
const string Messages::MESSAGE_ERROR_RECORD =			"Error! Unexpected error while recording task";
const string Messages::MESSAGE_ERROR_INVALID_CHOICE =			"Invalid Choice";
const string Messages::MESSAGE_ERROR_INTERPRET_EMPTY_INPUT = "Empty input! You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_TITLE_FORMAT = "Invalid title format! You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_DATETIME_FORMAT = "Invalid input for date and time! You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_MISSING_ESSENTIAL_COMPONENTS_IN_COMMAND = "Missing essential components in command! You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_MIXED_UP_INPUT = "Command is not consistent! You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_ADD = "The interpretation for adding is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_REMOVE = "The interpretation for removal is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_DISPLAY = "The interpretation for display is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_RENAME = "The interpretation for rename is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_RESCHEDULE = "The interpretation for rescheduling is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_MARK = "The interpretation for marking is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_POWER_SEARCH = "The interpretation for search is not successful.  You can type 'help' for more information.";
const string Messages::MESSAGE_ERROR_INTERPRET_STRINGTODATETIME = "Error! Unexpected error while interpreting date and time";

const string Messages::MESSAGE_PROMPT_REMOVE_CHOOSE =	"Enter task number to remove:";
const string Messages::MESSAGE_PROMPT_RENAME_CHOOSE =	"Enter task number to rename:";
const string Messages::MESSAGE_PROMPT_RESCHEDULE_CHOOSE = "Enter task number to reschedule:";
const string Messages::MESSAGE_PROMPT_MARK_CHOOSE =	"Enter task number to mark:";

const string Messages::MESSAGE_ARRAY [MAX_MESSAGES] = {
	MESSAGE_OVERALL_SUCCESS,
	MESSAGE_OVERALL_WARNING,
	MESSAGE_OVERALL_ERROR,
	MESSAGE_OVERALL_PROMPT,
	MESSAGE_OVERALL_EXIT,

	MESSAGE_SUCCESS_ADD,
	MESSAGE_SUCCESS_REMOVE,
	MESSAGE_SUCCESS_DISPLAY,
	MESSAGE_SUCCESS_UPDATE,
	MESSAGE_SUCCESS_RESHCEDULE,
	MESSAGE_SUCCESS_MARK,
	MESSAGE_SUCCESS_SEARCH,
	MESSAGE_SUCCESS_LOAD,
	MESSAGE_SUCCESS_SAVE,
	MESSAGE_SUCCESS_UNDO,
	MESSAGE_SUCCESS_REDO,
	MESSAGE_SUCCESS_RECORD,
	MESSAGE_SUCCESS_INTERPRET_ADD,
	MESSAGE_SUCCESS_INTERPRET_REMOVE,
	MESSAGE_SUCCESS_INTERPRET_DISPLAY,
	MESSAGE_SUCCESS_INTERPRET_RENAME,
	MESSAGE_SUCCESS_INTERPRET_RESCHEDULE,	
	MESSAGE_SUCCESS_INTERPRET_MARK,
	MESSAGE_SUCCESS_INTERPRET_SEARCH,
	MESSAGE_SUCCESS_INTERPRET_STRINGTODATETIME,

	MESSAGE_WARNING_ADD_CLASH,	
	MESSAGE_WARNING_ADD_DUPLICATE,
	MESSAGE_WARNING_DISPLAY_NO_RESULT,
	MESSAGE_WARNING_UPDATE_SAME,	
	MESSAGE_WARNING_UPDATE_CLASH,
	MESSAGE_WARNING_MARK_NO_CHANGE,
	MESSAGE_WARNING_SEARCH_NO_RESULT,
	MESSAGE_WARNING_UNDO_NO_TASKS,
	MESSAGE_WARNING_REDO_NO_TASKS,
	MESSAGE_WARNING_LOAD_EMPTY_FILE,	
	MESSAGE_WARNING_INTERPRET_ADD_NO_TITLE,
	MESSAGE_WARNING_WRONG_INPUT,

	MESSAGE_ERROR_ADD,
	MESSAGE_ERROR_REMOVE,
	MESSAGE_ERROR_DISPLAY,
	MESSAGE_ERROR_UPDATE,
	MESSAGE_ERROR_MARK,
	MESSAGE_ERROR_SEARCH,
	MESSAGE_ERROR_UNDO,
	MESSAGE_ERROR_REDO,
	MESSAGE_ERROR_LOAD_OPENFILE,
	MESSAGE_ERROR_LOAD_CORRUPTED_DATA,
	MESSAGE_ERROR_SAVE_SAVEFILE,
	MESSAGE_ERROR_RECORD,
	MESSAGE_ERROR_INVALID_CHOICE,
	MESSAGE_ERROR_INTERPRET_EMPTY_INPUT,
	MESSAGE_ERROR_INTERPRET_TITLE_FORMAT,
	MESSAGE_ERROR_INTERPRET_DATETIME_FORMAT,
	MESSAGE_ERROR_INTERPRET_MISSING_ESSENTIAL_COMPONENTS_IN_COMMAND,
	MESSAGE_ERROR_INTERPRET_MIXED_UP_INPUT,
	MESSAGE_ERROR_INTERPRET_ADD,
	MESSAGE_ERROR_INTERPRET_REMOVE,
	MESSAGE_ERROR_INTERPRET_DISPLAY,
	MESSAGE_ERROR_INTERPRET_RENAME,	
	MESSAGE_ERROR_INTERPRET_RESCHEDULE,
	MESSAGE_ERROR_INTERPRET_MARK,
	MESSAGE_ERROR_INTERPRET_POWER_SEARCH,
	MESSAGE_ERROR_INTERPRET_STRINGTODATETIME,

	MESSAGE_PROMPT_REMOVE_CHOOSE,
	MESSAGE_PROMPT_RENAME_CHOOSE,
	MESSAGE_PROMPT_RESCHEDULE_CHOOSE,
	MESSAGE_PROMPT_MARK_CHOOSE,
};

Messages::Messages()
{
}

Messages::~Messages()
{
}

string Messages::getMessage(int index){
	return MESSAGE_ARRAY[index];
}