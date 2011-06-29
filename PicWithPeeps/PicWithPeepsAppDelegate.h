//
//  PicWithPeepsAppDelegate.h
//  PicWithPeeps
//
//  Created by Steve Ho on 6/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PicWithPeepsViewController;

@interface PicWithPeepsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet PicWithPeepsViewController *viewController;

@end
