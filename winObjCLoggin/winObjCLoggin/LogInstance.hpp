//
//  LogInstance.hpp
//  testingCplusplus
//
//  Created by Luis Meddrano-Zaldivar on 4/17/17.
//  Copyright © 2017 Luis Meddrano-Zaldivar. All rights reserved.
//

#ifndef LogInstance_hpp
#define LogInstance_hpp

#include <stdio.h>
#include <string>

class LogInstance {
    
    
public:
    static LogInstance *instance();
    void enventToLog(std::string sSource, std::string sLog, std::string sEvent);
};

#endif /* LogInstance_hpp */
