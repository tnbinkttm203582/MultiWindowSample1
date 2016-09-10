//
//  SubWindow.h
//  MultiWindowTest1
//
//  Created by tanbo on 2016/09/04.
//  Copyright © 2016年 tanbo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SubWindowAppController;

@interface SubWindowController : NSWindowController

@property (weak) IBOutlet SubWindowAppController *subAppCon;

- (void) passingTestStr:(NSString *) str;

@end
