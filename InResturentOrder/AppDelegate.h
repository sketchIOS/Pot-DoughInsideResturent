//
//  AppDelegate.h
//  InResturentOrder
//
//  Created by IOS DEVELOPER on 25/07/17.
//  Copyright © 2017 IOS DEVELOPER. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

