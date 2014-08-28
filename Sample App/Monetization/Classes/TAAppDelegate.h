//
//  TAAppDelegate.h
//  Test Application
//
//  Copyright (c) 2012 InMobi Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

//Please provide your App IDs below as obtained from InMobi portal.
#warning - Please provide your App IDs below as obtained from InMobi portal.

#define INMOBI_APP_ID           @"ea0599002ef0474399bd808f3b93d3f7"
#define BANNER_APP_ID           INMOBI_APP_ID//@"1400047250296211"
#define INTERSTITIAL_APP_ID     INMOBI_APP_ID//@"1400161974610189"

@interface TAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) UISplitViewController *splitViewController;

@end

