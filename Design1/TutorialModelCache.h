// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class TutorialModel;

@interface TutorialModelCache : NSObject <NSCoding>

- (NSArray<TutorialModel *> *)tutorialModelWithId:(NSString *)tutorialId;

- (void)removeTutorialModelWithTutorialId:(NSString *)tutorialId;

@end

NS_ASSUME_NONNULL_END
