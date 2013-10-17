#include "FileProcessing.h"


int FileProcessing::load(vector<string>& data){
	try{
		ifstream input(_LOGNAME);
		if(!input.is_open()) {
			return STATUS_CODE_SET_ERROR::ERROR_LOAD_OPENFILE;
		} else {
			if (input.good()) {
				if (!emptyFile()) {
					data.clear();
					while(input) {
						string line;
						getline(input, line);
						data.push_back(line);
					}
				} else {
					input.close();
					LogLibrary::Log::writeLog(LogLibrary::STATUS_CODE_SET_LOG::LOG_WARNING,"Empty file","FileProcessingLog");
					return STATUS_CODE_SET_WARNING::WARNING_LOAD_EMPTY_FILE;	
				}
			} else {
				LogLibrary::Log::writeLog(LogLibrary::STATUS_CODE_SET_LOG::LOG_ERROR, "Error in opening file","FileProcessingLog");
				return STATUS_CODE_SET_ERROR::ERROR_LOAD_OPENFILE;
			}
		}
		input.close();
		return STATUS_CODE_SET_SUCCESS::SUCCESS_LOAD;
	}catch(exception e) {
		LogLibrary::Log::writeLog(LogLibrary::STATUS_CODE_SET_LOG::LOG_ERROR,"Error in opening file","FileProcessingLog");
		return STATUS_CODE_SET_ERROR::ERROR_LOAD_OPENFILE;
	}
}


int FileProcessing::save(vector<string>& data){
	try{
		ofstream output(_LOGNAME);
		//check if file exist
		if (!output.is_open()) {
			output.clear();
			output.open(_LOGNAME, ofstream::out|ofstream::trunc);
		}
		//check if file is created, ready for writing
		if (output.good()) {
			for(string s:data) {
				output << s << endl;
			}
		} else {
			output.close();
			LogLibrary::Log::writeLog(LogLibrary::STATUS_CODE_SET_LOG::LOG_ERROR,"Error in saving file","FileProcessingLog");
			return STATUS_CODE_SET_ERROR::ERROR_SAVE_SAVEFILE;
		}
		output.close();
		return STATUS_CODE_SET_SUCCESS::SUCCESS_SAVE;
	}catch(exception e){
		LogLibrary::Log::writeLog(LogLibrary::STATUS_CODE_SET_LOG::LOG_ERROR,"Error in saving file","FileProcessingLog");
		return STATUS_CODE_SET_ERROR::ERROR_SAVE_SAVEFILE;
	}
}


bool FileProcessing::emptyFile() {
	bool isEmpty = false;
	ifstream inf;
	inf.open(_LOGNAME);
	if(inf.peek() == ifstream::traits_type::eof())
		isEmpty = true;
	inf.close();
	return isEmpty;
}
