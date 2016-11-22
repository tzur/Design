// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class TutorialModel;

/// Object used to manage a pressistent memory to store \c TutorialModel objects.
@interface TutorialModelCache : NSObject <NSCoding>

/// Returns \c TutorialModel object with the given \c tutorialId.
- (TutorialModel *)tutorialModelWithId:(NSString *)tutorialId;

/// Adds the given \c model to the pressistent memory, the key that will be used is \c
/// model.tutorialId
- (void)addTutorialModel:(TutorialModel *)model;

/// Removes the \c TutorialModel with the given \c tutorialId.
- (void)removeTutorialModelWithTutorialId:(NSString *)tutorialId;

@end

NS_ASSUME_NONNULL_END
