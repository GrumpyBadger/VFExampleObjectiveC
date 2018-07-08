//
//  VternalFindResult.h
//  V1
//
//  Created by Martin Dunsmuir on 6/24/18.
//  Copyright © 2018 Martin Dunsmuir. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum FindState {
    New, BuildingIndex, FindingKeys, HasAllParts, Error, Done
} FindState;

@interface VternalFindResult : NSObject

@property (strong, nonatomic) NSString *filePath;
@property (strong, nonatomic) NSString *displayName;
@property (assign) BOOL failed;
@property (assign) FindState state;

@end
