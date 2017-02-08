//
//  AppDelegate.m
//  自动滚动的文字
//
//  Created by admin on 17/2/7.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
   
    self.wc = [[WC alloc] initWithWindowNibName:@"WC"];
    [self.wc.window center];
    [self.wc.window orderFront:nil];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

@end
