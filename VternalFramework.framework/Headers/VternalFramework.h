//
//  VternalFramework.h
//  VternalFramework
//
//  Created by Martin Dunsmuir on 6/30/18.
//  Copyright © 2018 Martin Dunsmuir. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for VternalFramework.
FOUNDATION_EXPORT double VternalFrameworkVersionNumber;

//! Project version string for VternalFramework.
FOUNDATION_EXPORT const unsigned char VternalFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VternalFramework/PublicHeader.h>
#import <Foundation/Foundation.h>

#import "VternalFindResult.h"
#import "VternalStatsResult.h"

@interface VternalFramework : NSObject

+ (NSString * _Nonnull) vternalAppKey;

+ (void) registerApplicationWithKey:(NSString * _Nonnull)key callback:(void(^ _Nonnull)(BOOL))registered;        // callback returns success as boolean

+ (NSString * _Nonnull) storeAssetToVternal:(NSData * _Nonnull)data; //  returns key to new asset, data.length must be <= MAXASSETSIZE
+ (NSString * _Nonnull) storeUrlToVternal:(NSURL * _Nonnull)fileUrl; //  returns key to new asset

+ (void) fetchAssetFromVternal:(NSString * _Nonnull)key callback:(void(^ _Nonnull)(VternalFindResult * _Nonnull))found; //  callback returns VternalFindResult
+ (void) fetchFileFromVternal:(NSString * _Nonnull)key callback:(void(^ _Nonnull)(VternalFindResult * _Nonnull))found;

+ (VternalStatsResult * _Nonnull) getStatistics;
+ (long) setAllocation:(long)newSize;

+ (long) maxAssetSize;
+ (long) maxFileSize;
+ (BOOL) isInitialized;

+ (long) conjugate;
+ (long) conjugateWithTimeLimit:(long)timeLimit;

@end


