//
//  VternalStatsResult.h
//  V1
//
//  Created by Martin Dunsmuir on 6/24/18.
//  Copyright © 2018 Martin Dunsmuir. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VternalStatsResult : NSObject

@property (assign) time_t configBirthday;
@property (assign) long configRealtimeElapsed;
@property (assign) time_t configAverageConjugationTime;
@property (assign) time_t configAverageConjugationSpacing;
@property (assign) long configNumberOfConjugations;
@property (assign) long configNumberOfConjugationsSinceLastStart;
@property (assign) long configNumberOfAssets;
@property (assign) long configStorageAllocated;
@property (assign) long configStorageUsed;
@property (assign) long configVternalizedBytes;
@property (assign) long configVternalizations;
@property (assign) double configFigureOfMerit;

@end
