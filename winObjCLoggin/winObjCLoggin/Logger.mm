//
//  Logger.m
//  testingCplusplus
//
//  Created by Luis Meddrano-Zaldivar on 4/18/17.
//  Copyright © 2017 Luis Meddrano-Zaldivar. All rights reserved.
//

#import "Logger.h"
#import "LogInstance.hpp"


@interface Logger()

@property (nonatomic) LogInstance loggin;

@end

@implementation Logger

+(Logger*)appLog
{
    static Logger *shareObject = nil;
    static dispatch_once_t onceToken;
    dispatch_once ( &onceToken, ^{
        shareObject = [[self alloc] init];
          shareObject.loggin = *(new LogInstance);
    });
    return shareObject;
}

-(void)logToFile{
    
    NSString *sSource = @"dotNET Sample App1";
    std::string source = std::string([sSource UTF8String]);
    NSString *sLog = @"Application1";
    std::string log = std::string([sLog UTF8String]);
    NSString *sEvent = @"Sample Event1";
    std::string event = std::string([sEvent UTF8String]);
    
    self.loggin.enventToLog(source,log, event);
    
}

@end
