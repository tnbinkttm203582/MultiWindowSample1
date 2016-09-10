//
//  AppController.h
//  MultiWindow
//
//  Created by tanbo on 2016/03/24.
//  Copyright © 2016年 tanbo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@class SubWindowController;

@interface AppController : NSObject {
    SubWindowController *subWindowController;
    IBOutlet NSTextField *textField;
}

- (IBAction) showSubWindow:(id)sender;

@end
