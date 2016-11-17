// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class TutorialMetaData;

/// Object used to manage a pressistent memory to store \c TutorialMetaData objects.
@interface TutorialMetaDataCache : NSObject

/// Returns an array of \c TutorialMetaData objects that belongs to the given \c tutorialCategory.
- (NSArray<TutorialMetaData *> *)tutorialModelWithCategoryKey:(TutorialCategory)tutorialCategory;

/// Removes the \c TutorialMetaData with the given \c metaDataKey.
- (void)removeTutorialWithMetaDataKey:(NSString *)metaDataKey;

@end

NS_ASSUME_NONNULL_END
