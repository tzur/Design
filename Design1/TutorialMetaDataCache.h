// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@class TutorialMetaData;

@interface TutorialMetaDataCache : NSObject

- (NSArray<TutorialMetaData *> *)tutorialModelWithCategoryKey:(TutorialCategory)tutorialCategory;

- (void)removeTutorialWithMetaDataKey:(NSString *)metaDataKey;

@end

NS_ASSUME_NONNULL_END
