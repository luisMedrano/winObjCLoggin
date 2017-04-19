//
//  LogInstance.cpp
//  testingCplusplus
//
//  Created by Luis Meddrano-Zaldivar on 4/17/17.
//  Copyright © 2017 Luis Meddrano-Zaldivar. All rights reserved.
//

#include "LogInstance.hpp"
#include <iostream>
/* to use on windows:
 #using <system.dll>

 
 using namespace System;
 using namespace System::Diagnostics;
 using namespace System::Threading;
 */



static LogInstance *shareInstance;

void LogInstance::enventToLog(std::string sSource, std::string sLog, std::string sEvent){
    std::cout << "+++++++++" << std::endl;
    std::cout << "sSource: " << sSource <<  std::endl;
    std::cout << "sLog   : " << sLog <<  std::endl;
    std::cout << "sEvent : " << sEvent <<  std::endl;
    
    /* to use on windows:
	if (!EventLog::SourceExists("myFile")) {

		EventLog::CreateEventSource("myFile", "myNewLog");
     //VisualStudio 2017 doesn't recognize the Console object:
		Console::WriteLine("Test"); //
	}
	*/
    
}

LogInstance *LogInstance::instance(){
    
    if (!shareInstance)
        shareInstance = new LogInstance;
    return shareInstance;
}
