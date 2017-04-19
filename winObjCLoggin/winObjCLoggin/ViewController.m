//
//  ViewController.m
//  winObjCLoggin
//
//  Created by Luis Meddrano-Zaldivar on 4/19/17.
//  Copyright © 2017 Luis Meddrano-Zaldivar. All rights reserved.
//

#import "ViewController.h"
#import "Logger.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.appLog logToFile];
}

-(Logger*)appLog
{
    return [Logger appLog];
}


@end
