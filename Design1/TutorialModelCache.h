// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class TutorialModel;

/// Object used to manage a pressistent memory to store \c TutorialModel objects.
@interface TutorialModelCache : NSObject <NSCoding>

/// Returns an array of \c TutorialModel objects with the given \c tutorialId
- (NSArray<TutorialModel *> *)tutorialModelWithId:(NSString *)tutorialId;

/// Removes the \c TutorialMetaData with the given \c tutorialId.
- (void)removeTutorialModelWithTutorialId:(NSString *)tutorialId;

@end

NS_ASSUME_NONNULL_END
