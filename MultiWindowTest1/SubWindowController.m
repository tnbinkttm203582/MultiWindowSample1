//
//  SubWindow.m
//  MultiWindowTest1
//
//  Created by tanbo on 2016/09/04.
//  Copyright © 2016年 tanbo. All rights reserved.
//

#import "SubWindowController.h"
#import "SubWindowAppController.h"

@interface SubWindowController ()

@end

@implementation SubWindowController

@synthesize subAppCon = _subAppCon;

- (void)windowDidLoad {
    [super windowDidLoad];
}

- (void) passingTestStr:(NSString *) str
{
    _subAppCon.testStr = str;
}

@end
