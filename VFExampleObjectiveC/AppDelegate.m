//
//  AppDelegate.m
//  VFExampleObjectiveC
//
//  Created by Martin Dunsmuir on 7/1/18.
//  Copyright © 2018 Martin Dunsmuir. All rights reserved.
//

#import "AppDelegate.h"
#import <VternalFramework/VternalFramework.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    [VternalFramework registerApplicationWithKey:@"be49c1d5a297c7a41b3c55010da97b33a9fd67b32251928a23ce61738ab2a885" callback:^(BOOL registered){
        if( registered )
        {
            NSLog(@"Registered for %@", [[NSBundle mainBundle] bundleIdentifier] );
        }
        else
        {
            NSLog(@"Failed to register for %@", [[NSBundle mainBundle] bundleIdentifier] );
        }
    }];
    
    return YES;
}

-(void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler {
    
    NSLog(@"performFetchWithCompletionHandler");
    
    long cTime = [VternalFramework conjugateWithTimeLimit:20];
    
    NSLog(@"conjugation took %lds", cTime );
    
    completionHandler( UIBackgroundFetchResultNewData );
    
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
