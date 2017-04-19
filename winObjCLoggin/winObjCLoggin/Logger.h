//
//  Logger.h
//  testingCplusplus
//
//  Created by Luis Meddrano-Zaldivar on 4/18/17.
//  Copyright © 2017 Luis Meddrano-Zaldivar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Logger : NSObject

+(Logger*)appLog;
-(void)logToFile;


@end
